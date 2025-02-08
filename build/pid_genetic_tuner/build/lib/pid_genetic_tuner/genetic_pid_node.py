import rclpy
from rclpy.node import Node
import numpy as np
import random
from msgs_control.srv import SimPID  # Usar el mensaje correcto

class GeneticPIDTuner(Node):
    def __init__(self):
        super().__init__('genetic_pid_tuner')

        # Cliente de servicio que se comunica con el simulador del motor
        self.client = self.create_client(SimPID, '/serv/sim_pid')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Esperando el servicio del motor en /serv/sim_pid...")

        # Parámetros del Algoritmo Genético
        self.population_size = 10
        self.generations = 20
        self.mutation_rate = 0.2
        self.population = self.initialize_population()

        # Ejecutar evolución
        self.evolve()

    def initialize_population(self):
        return [np.random.uniform(0, 10, 3) for _ in range(self.population_size)]

    def evaluate_fitness(self, pid_values):
        request = SimPID.Request()
        request.kp, request.ki, request.kd = pid_values

        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        if future.result() is not None:
            response = future.result()
            # Calcular el performance_score basado en los campos de la respuesta
            performance_score = response.overshoot + response.d + response.ess + response.ts
            return performance_score
        else:
            self.get_logger().error("Error en la llamada al servicio.")
            return float('inf')

    def select_parents(self, scores):
        sorted_population = [x for _, x in sorted(zip(scores, self.population), key=lambda pair: pair[0])]
        return sorted_population[:2]

    def crossover(self, parent1, parent2):
        return (parent1 + parent2) / 2

    def mutate(self, individual):
        if random.random() < self.mutation_rate:
            individual += np.random.uniform(-0.5, 0.5, 3)
        return individual

    def evolve(self):
        for gen in range(self.generations):
            scores = [self.evaluate_fitness(pid) for pid in self.population]
            best_individual = self.population[np.argmin(scores)]
            self.get_logger().info(f"Generación {gen}: Mejor PID {best_individual} con fitness {min(scores)}")
            parents = self.select_parents(scores)
            new_population = [self.mutate(self.crossover(parents[0], parents[1])) for _ in range(self.population_size)]
            self.population = new_population
        self.get_logger().info(f"PID final óptimo: {self.population[0]}")

def main(args=None):
    rclpy.init(args=args)
    node = GeneticPIDTuner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
