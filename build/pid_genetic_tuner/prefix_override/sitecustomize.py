import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/upm/Escritorio/ros/install/pid_genetic_tuner'
