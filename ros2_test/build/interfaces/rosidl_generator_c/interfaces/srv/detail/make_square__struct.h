// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MAKE_SQUARE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__MAKE_SQUARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'message_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MakeSquare in the package interfaces.
typedef struct interfaces__srv__MakeSquare_Request
{
  int32_t sender_id;
  int32_t receiver_id;
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String message_type;
  float value;
} interfaces__srv__MakeSquare_Request;

// Struct for a sequence of interfaces__srv__MakeSquare_Request.
typedef struct interfaces__srv__MakeSquare_Request__Sequence
{
  interfaces__srv__MakeSquare_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MakeSquare_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
// Member 'timeslot'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'message_type'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MakeSquare in the package interfaces.
typedef struct interfaces__srv__MakeSquare_Response
{
  int32_t sender_id;
  int32_t receiver_id;
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String message_type;
  float result;
  builtin_interfaces__msg__Time timeslot;
} interfaces__srv__MakeSquare_Response;

// Struct for a sequence of interfaces__srv__MakeSquare_Response.
typedef struct interfaces__srv__MakeSquare_Response__Sequence
{
  interfaces__srv__MakeSquare_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MakeSquare_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__srv__MakeSquare_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__srv__MakeSquare_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MakeSquare in the package interfaces.
typedef struct interfaces__srv__MakeSquare_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__srv__MakeSquare_Request__Sequence request;
  interfaces__srv__MakeSquare_Response__Sequence response;
} interfaces__srv__MakeSquare_Event;

// Struct for a sequence of interfaces__srv__MakeSquare_Event.
typedef struct interfaces__srv__MakeSquare_Event__Sequence
{
  interfaces__srv__MakeSquare_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__MakeSquare_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__MAKE_SQUARE__STRUCT_H_
