// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__MAKE_SQUARE__STRUCT_H_
#define INTERFACES__ACTION__DETAIL__MAKE_SQUARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message_type'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_Goal
{
  int32_t sender_id;
  int32_t receiver_id;
  rosidl_runtime_c__String message_type;
  builtin_interfaces__msg__Time timestamp;
  float value;
} interfaces__action__MakeSquare_Goal;

// Struct for a sequence of interfaces__action__MakeSquare_Goal.
typedef struct interfaces__action__MakeSquare_Goal__Sequence
{
  interfaces__action__MakeSquare_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message_type'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'timestamp'
// Member 'timeslot'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_Result
{
  int32_t sender_id;
  int32_t receiver_id;
  rosidl_runtime_c__String message_type;
  builtin_interfaces__msg__Time timestamp;
  float result;
  builtin_interfaces__msg__Time timeslot;
} interfaces__action__MakeSquare_Result;

// Struct for a sequence of interfaces__action__MakeSquare_Result.
typedef struct interfaces__action__MakeSquare_Result__Sequence
{
  interfaces__action__MakeSquare_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'calculation_process'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_Feedback
{
  rosidl_runtime_c__String calculation_process;
} interfaces__action__MakeSquare_Feedback;

// Struct for a sequence of interfaces__action__MakeSquare_Feedback.
typedef struct interfaces__action__MakeSquare_Feedback__Sequence
{
  interfaces__action__MakeSquare_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interfaces/action/detail/make_square__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__MakeSquare_Goal goal;
} interfaces__action__MakeSquare_SendGoal_Request;

// Struct for a sequence of interfaces__action__MakeSquare_SendGoal_Request.
typedef struct interfaces__action__MakeSquare_SendGoal_Request__Sequence
{
  interfaces__action__MakeSquare_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaces__action__MakeSquare_SendGoal_Response;

// Struct for a sequence of interfaces__action__MakeSquare_SendGoal_Response.
typedef struct interfaces__action__MakeSquare_SendGoal_Response__Sequence
{
  interfaces__action__MakeSquare_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__action__MakeSquare_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__action__MakeSquare_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__action__MakeSquare_SendGoal_Request__Sequence request;
  interfaces__action__MakeSquare_SendGoal_Response__Sequence response;
} interfaces__action__MakeSquare_SendGoal_Event;

// Struct for a sequence of interfaces__action__MakeSquare_SendGoal_Event.
typedef struct interfaces__action__MakeSquare_SendGoal_Event__Sequence
{
  interfaces__action__MakeSquare_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaces__action__MakeSquare_GetResult_Request;

// Struct for a sequence of interfaces__action__MakeSquare_GetResult_Request.
typedef struct interfaces__action__MakeSquare_GetResult_Request__Sequence
{
  interfaces__action__MakeSquare_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/make_square__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_GetResult_Response
{
  int8_t status;
  interfaces__action__MakeSquare_Result result;
} interfaces__action__MakeSquare_GetResult_Response;

// Struct for a sequence of interfaces__action__MakeSquare_GetResult_Response.
typedef struct interfaces__action__MakeSquare_GetResult_Response__Sequence
{
  interfaces__action__MakeSquare_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__action__MakeSquare_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__action__MakeSquare_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__action__MakeSquare_GetResult_Request__Sequence request;
  interfaces__action__MakeSquare_GetResult_Response__Sequence response;
} interfaces__action__MakeSquare_GetResult_Event;

// Struct for a sequence of interfaces__action__MakeSquare_GetResult_Event.
typedef struct interfaces__action__MakeSquare_GetResult_Event__Sequence
{
  interfaces__action__MakeSquare_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/make_square__struct.h"

/// Struct defined in action/MakeSquare in the package interfaces.
typedef struct interfaces__action__MakeSquare_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__MakeSquare_Feedback feedback;
} interfaces__action__MakeSquare_FeedbackMessage;

// Struct for a sequence of interfaces__action__MakeSquare_FeedbackMessage.
typedef struct interfaces__action__MakeSquare_FeedbackMessage__Sequence
{
  interfaces__action__MakeSquare_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__MakeSquare_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__ACTION__DETAIL__MAKE_SQUARE__STRUCT_H_
