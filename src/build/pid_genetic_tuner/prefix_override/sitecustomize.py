import sys
if sys.prefix == '/home/aalonso/ros2_py310_env':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/aalonso/Personal/ros2_ws/src/install/pid_genetic_tuner'
