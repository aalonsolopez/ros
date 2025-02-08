from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pid_genetic_tuner',
            executable='genetic_pid_node',
            output='screen',
        ),
    ])
