# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msgs_control:srv/SimPID.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SimPID_Request(type):
    """Metaclass of message 'SimPID_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msgs_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msgs_control.srv.SimPID_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sim_pid__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sim_pid__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sim_pid__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sim_pid__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sim_pid__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimPID_Request(metaclass=Metaclass_SimPID_Request):
    """Message class 'SimPID_Request'."""

    __slots__ = [
        '_kp',
        '_ki',
        '_kd',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'kp': 'float',
        'ki': 'float',
        'kd': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.kp = kwargs.get('kp', float())
        self.ki = kwargs.get('ki', float())
        self.kd = kwargs.get('kd', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.kp != other.kp:
            return False
        if self.ki != other.ki:
            return False
        if self.kd != other.kd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kp = value

    @builtins.property
    def ki(self):
        """Message field 'ki'."""
        return self._ki

    @ki.setter
    def ki(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ki' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ki' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ki = value

    @builtins.property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SimPID_Response(type):
    """Metaclass of message 'SimPID_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msgs_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msgs_control.srv.SimPID_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sim_pid__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sim_pid__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sim_pid__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sim_pid__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sim_pid__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimPID_Response(metaclass=Metaclass_SimPID_Response):
    """Message class 'SimPID_Response'."""

    __slots__ = [
        '_overshoot',
        '_d',
        '_ess',
        '_ts',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'overshoot': 'float',
        'd': 'float',
        'ess': 'float',
        'ts': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.overshoot = kwargs.get('overshoot', float())
        self.d = kwargs.get('d', float())
        self.ess = kwargs.get('ess', float())
        self.ts = kwargs.get('ts', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.overshoot != other.overshoot:
            return False
        if self.d != other.d:
            return False
        if self.ess != other.ess:
            return False
        if self.ts != other.ts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def overshoot(self):
        """Message field 'overshoot'."""
        return self._overshoot

    @overshoot.setter
    def overshoot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'overshoot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'overshoot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._overshoot = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._d = value

    @builtins.property
    def ess(self):
        """Message field 'ess'."""
        return self._ess

    @ess.setter
    def ess(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ess' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ess' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ess = value

    @builtins.property
    def ts(self):
        """Message field 'ts'."""
        return self._ts

    @ts.setter
    def ts(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ts = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SimPID_Event(type):
    """Metaclass of message 'SimPID_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msgs_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msgs_control.srv.SimPID_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sim_pid__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sim_pid__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sim_pid__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sim_pid__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sim_pid__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimPID_Event(metaclass=Metaclass_SimPID_Event):
    """Message class 'SimPID_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<msgs_control/SimPID_Request, 1>',
        'response': 'sequence<msgs_control/SimPID_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['msgs_control', 'srv'], 'SimPID_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['msgs_control', 'srv'], 'SimPID_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from msgs_control.srv import SimPID_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SimPID_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SimPID_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from msgs_control.srv import SimPID_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SimPID_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SimPID_Response'"
        self._response = value


class Metaclass_SimPID(type):
    """Metaclass of service 'SimPID'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msgs_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msgs_control.srv.SimPID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sim_pid

            from msgs_control.srv import _sim_pid
            if _sim_pid.Metaclass_SimPID_Request._TYPE_SUPPORT is None:
                _sim_pid.Metaclass_SimPID_Request.__import_type_support__()
            if _sim_pid.Metaclass_SimPID_Response._TYPE_SUPPORT is None:
                _sim_pid.Metaclass_SimPID_Response.__import_type_support__()
            if _sim_pid.Metaclass_SimPID_Event._TYPE_SUPPORT is None:
                _sim_pid.Metaclass_SimPID_Event.__import_type_support__()


class SimPID(metaclass=Metaclass_SimPID):
    from msgs_control.srv._sim_pid import SimPID_Request as Request
    from msgs_control.srv._sim_pid import SimPID_Response as Response
    from msgs_control.srv._sim_pid import SimPID_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
