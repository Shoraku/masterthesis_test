# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/MakeSquare.idl
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


class Metaclass_MakeSquare_Request(type):
    """Metaclass of message 'MakeSquare_Request'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MakeSquare_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__make_square__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__make_square__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__make_square__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__make_square__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__make_square__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MakeSquare_Request(metaclass=Metaclass_MakeSquare_Request):
    """Message class 'MakeSquare_Request'."""

    __slots__ = [
        '_sender_id',
        '_receiver_id',
        '_timestamp',
        '_message_type',
        '_value',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'sender_id': 'int32',
        'receiver_id': 'int32',
        'timestamp': 'builtin_interfaces/Time',
        'message_type': 'string',
        'value': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.sender_id = kwargs.get('sender_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.message_type = kwargs.get('message_type', str())
        self.value = kwargs.get('value', float())

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
        if self.sender_id != other.sender_id:
            return False
        if self.receiver_id != other.receiver_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.message_type != other.message_type:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sender_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sender_id' field must be an integer in [-2147483648, 2147483647]"
        self._sender_id = value

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'receiver_id' field must be an integer in [-2147483648, 2147483647]"
        self._receiver_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message_type' field must be of type 'str'"
        self._message_type = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_MakeSquare_Response(type):
    """Metaclass of message 'MakeSquare_Response'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MakeSquare_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__make_square__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__make_square__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__make_square__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__make_square__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__make_square__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MakeSquare_Response(metaclass=Metaclass_MakeSquare_Response):
    """Message class 'MakeSquare_Response'."""

    __slots__ = [
        '_sender_id',
        '_receiver_id',
        '_timestamp',
        '_message_type',
        '_result',
        '_timeslot',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'sender_id': 'int32',
        'receiver_id': 'int32',
        'timestamp': 'builtin_interfaces/Time',
        'message_type': 'string',
        'result': 'float',
        'timeslot': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.sender_id = kwargs.get('sender_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.message_type = kwargs.get('message_type', str())
        self.result = kwargs.get('result', float())
        from builtin_interfaces.msg import Time
        self.timeslot = kwargs.get('timeslot', Time())

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
        if self.sender_id != other.sender_id:
            return False
        if self.receiver_id != other.receiver_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.message_type != other.message_type:
            return False
        if self.result != other.result:
            return False
        if self.timeslot != other.timeslot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sender_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sender_id' field must be an integer in [-2147483648, 2147483647]"
        self._sender_id = value

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'receiver_id' field must be an integer in [-2147483648, 2147483647]"
        self._receiver_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message_type' field must be of type 'str'"
        self._message_type = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'result' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'result' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._result = value

    @builtins.property
    def timeslot(self):
        """Message field 'timeslot'."""
        return self._timeslot

    @timeslot.setter
    def timeslot(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timeslot' field must be a sub message of type 'Time'"
        self._timeslot = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MakeSquare_Event(type):
    """Metaclass of message 'MakeSquare_Event'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MakeSquare_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__make_square__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__make_square__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__make_square__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__make_square__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__make_square__event

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


class MakeSquare_Event(metaclass=Metaclass_MakeSquare_Event):
    """Message class 'MakeSquare_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<interfaces/MakeSquare_Request, 1>',
        'response': 'sequence<interfaces/MakeSquare_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['interfaces', 'srv'], 'MakeSquare_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['interfaces', 'srv'], 'MakeSquare_Response'), 1),  # noqa: E501
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
            from interfaces.srv import MakeSquare_Request
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
                 all(isinstance(v, MakeSquare_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'MakeSquare_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from interfaces.srv import MakeSquare_Response
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
                 all(isinstance(v, MakeSquare_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'MakeSquare_Response'"
        self._response = value


class Metaclass_MakeSquare(type):
    """Metaclass of service 'MakeSquare'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.MakeSquare')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__make_square

            from interfaces.srv import _make_square
            if _make_square.Metaclass_MakeSquare_Request._TYPE_SUPPORT is None:
                _make_square.Metaclass_MakeSquare_Request.__import_type_support__()
            if _make_square.Metaclass_MakeSquare_Response._TYPE_SUPPORT is None:
                _make_square.Metaclass_MakeSquare_Response.__import_type_support__()
            if _make_square.Metaclass_MakeSquare_Event._TYPE_SUPPORT is None:
                _make_square.Metaclass_MakeSquare_Event.__import_type_support__()


class MakeSquare(metaclass=Metaclass_MakeSquare):
    from interfaces.srv._make_square import MakeSquare_Request as Request
    from interfaces.srv._make_square import MakeSquare_Response as Response
    from interfaces.srv._make_square import MakeSquare_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
