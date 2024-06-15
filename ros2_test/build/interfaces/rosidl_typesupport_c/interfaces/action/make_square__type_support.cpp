// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces/action/detail/make_square__struct.h"
#include "interfaces/action/detail/make_square__type_support.h"
#include "interfaces/action/detail/make_square__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_Goal_type_support_ids_t;

static const _MakeSquare_Goal_type_support_ids_t _MakeSquare_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_Goal_type_support_symbol_names_t _MakeSquare_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_Goal)),
  }
};

typedef struct _MakeSquare_Goal_type_support_data_t
{
  void * data[2];
} _MakeSquare_Goal_type_support_data_t;

static _MakeSquare_Goal_type_support_data_t _MakeSquare_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_Goal_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_Goal__get_type_hash,
  &interfaces__action__MakeSquare_Goal__get_type_description,
  &interfaces__action__MakeSquare_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_Goal)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_Result_type_support_ids_t;

static const _MakeSquare_Result_type_support_ids_t _MakeSquare_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_Result_type_support_symbol_names_t _MakeSquare_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_Result)),
  }
};

typedef struct _MakeSquare_Result_type_support_data_t
{
  void * data[2];
} _MakeSquare_Result_type_support_data_t;

static _MakeSquare_Result_type_support_data_t _MakeSquare_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_Result_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_Result__get_type_hash,
  &interfaces__action__MakeSquare_Result__get_type_description,
  &interfaces__action__MakeSquare_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_Result)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_Feedback_type_support_ids_t;

static const _MakeSquare_Feedback_type_support_ids_t _MakeSquare_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_Feedback_type_support_symbol_names_t _MakeSquare_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_Feedback)),
  }
};

typedef struct _MakeSquare_Feedback_type_support_data_t
{
  void * data[2];
} _MakeSquare_Feedback_type_support_data_t;

static _MakeSquare_Feedback_type_support_data_t _MakeSquare_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_Feedback_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_Feedback__get_type_hash,
  &interfaces__action__MakeSquare_Feedback__get_type_description,
  &interfaces__action__MakeSquare_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_Feedback)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_SendGoal_Request_type_support_ids_t;

static const _MakeSquare_SendGoal_Request_type_support_ids_t _MakeSquare_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_SendGoal_Request_type_support_symbol_names_t _MakeSquare_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_SendGoal_Request)),
  }
};

typedef struct _MakeSquare_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MakeSquare_SendGoal_Request_type_support_data_t;

static _MakeSquare_SendGoal_Request_type_support_data_t _MakeSquare_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_SendGoal_Request_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_SendGoal_Request__get_type_hash,
  &interfaces__action__MakeSquare_SendGoal_Request__get_type_description,
  &interfaces__action__MakeSquare_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_SendGoal_Request)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_SendGoal_Response_type_support_ids_t;

static const _MakeSquare_SendGoal_Response_type_support_ids_t _MakeSquare_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_SendGoal_Response_type_support_symbol_names_t _MakeSquare_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_SendGoal_Response)),
  }
};

typedef struct _MakeSquare_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MakeSquare_SendGoal_Response_type_support_data_t;

static _MakeSquare_SendGoal_Response_type_support_data_t _MakeSquare_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_SendGoal_Response_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_SendGoal_Response__get_type_hash,
  &interfaces__action__MakeSquare_SendGoal_Response__get_type_description,
  &interfaces__action__MakeSquare_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_SendGoal_Response)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_SendGoal_Event_type_support_ids_t;

static const _MakeSquare_SendGoal_Event_type_support_ids_t _MakeSquare_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_SendGoal_Event_type_support_symbol_names_t _MakeSquare_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_SendGoal_Event)),
  }
};

typedef struct _MakeSquare_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MakeSquare_SendGoal_Event_type_support_data_t;

static _MakeSquare_SendGoal_Event_type_support_data_t _MakeSquare_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_SendGoal_Event_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_SendGoal_Event__get_type_hash,
  &interfaces__action__MakeSquare_SendGoal_Event__get_type_description,
  &interfaces__action__MakeSquare_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_SendGoal_Event)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MakeSquare_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_SendGoal_type_support_ids_t;

static const _MakeSquare_SendGoal_type_support_ids_t _MakeSquare_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_SendGoal_type_support_symbol_names_t _MakeSquare_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_SendGoal)),
  }
};

typedef struct _MakeSquare_SendGoal_type_support_data_t
{
  void * data[2];
} _MakeSquare_SendGoal_type_support_data_t;

static _MakeSquare_SendGoal_type_support_data_t _MakeSquare_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_SendGoal_service_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MakeSquare_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MakeSquare_SendGoal_Request_message_type_support_handle,
  &MakeSquare_SendGoal_Response_message_type_support_handle,
  &MakeSquare_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    action,
    MakeSquare_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    action,
    MakeSquare_SendGoal
  ),
  &interfaces__action__MakeSquare_SendGoal__get_type_hash,
  &interfaces__action__MakeSquare_SendGoal__get_type_description,
  &interfaces__action__MakeSquare_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_SendGoal)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_GetResult_Request_type_support_ids_t;

static const _MakeSquare_GetResult_Request_type_support_ids_t _MakeSquare_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_GetResult_Request_type_support_symbol_names_t _MakeSquare_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_GetResult_Request)),
  }
};

typedef struct _MakeSquare_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MakeSquare_GetResult_Request_type_support_data_t;

static _MakeSquare_GetResult_Request_type_support_data_t _MakeSquare_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_GetResult_Request_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_GetResult_Request__get_type_hash,
  &interfaces__action__MakeSquare_GetResult_Request__get_type_description,
  &interfaces__action__MakeSquare_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_GetResult_Request)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_GetResult_Response_type_support_ids_t;

static const _MakeSquare_GetResult_Response_type_support_ids_t _MakeSquare_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_GetResult_Response_type_support_symbol_names_t _MakeSquare_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_GetResult_Response)),
  }
};

typedef struct _MakeSquare_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MakeSquare_GetResult_Response_type_support_data_t;

static _MakeSquare_GetResult_Response_type_support_data_t _MakeSquare_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_GetResult_Response_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_GetResult_Response__get_type_hash,
  &interfaces__action__MakeSquare_GetResult_Response__get_type_description,
  &interfaces__action__MakeSquare_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_GetResult_Response)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_GetResult_Event_type_support_ids_t;

static const _MakeSquare_GetResult_Event_type_support_ids_t _MakeSquare_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_GetResult_Event_type_support_symbol_names_t _MakeSquare_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_GetResult_Event)),
  }
};

typedef struct _MakeSquare_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MakeSquare_GetResult_Event_type_support_data_t;

static _MakeSquare_GetResult_Event_type_support_data_t _MakeSquare_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_GetResult_Event_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_GetResult_Event__get_type_hash,
  &interfaces__action__MakeSquare_GetResult_Event__get_type_description,
  &interfaces__action__MakeSquare_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_GetResult_Event)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MakeSquare_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_GetResult_type_support_ids_t;

static const _MakeSquare_GetResult_type_support_ids_t _MakeSquare_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_GetResult_type_support_symbol_names_t _MakeSquare_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_GetResult)),
  }
};

typedef struct _MakeSquare_GetResult_type_support_data_t
{
  void * data[2];
} _MakeSquare_GetResult_type_support_data_t;

static _MakeSquare_GetResult_type_support_data_t _MakeSquare_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_GetResult_service_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MakeSquare_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MakeSquare_GetResult_Request_message_type_support_handle,
  &MakeSquare_GetResult_Response_message_type_support_handle,
  &MakeSquare_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    action,
    MakeSquare_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    action,
    MakeSquare_GetResult
  ),
  &interfaces__action__MakeSquare_GetResult__get_type_hash,
  &interfaces__action__MakeSquare_GetResult__get_type_description,
  &interfaces__action__MakeSquare_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_GetResult)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/action/detail/make_square__struct.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"
// already included above
// #include "interfaces/action/detail/make_square__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MakeSquare_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_FeedbackMessage_type_support_ids_t;

static const _MakeSquare_FeedbackMessage_type_support_ids_t _MakeSquare_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakeSquare_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_FeedbackMessage_type_support_symbol_names_t _MakeSquare_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, action, MakeSquare_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, action, MakeSquare_FeedbackMessage)),
  }
};

typedef struct _MakeSquare_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MakeSquare_FeedbackMessage_type_support_data_t;

static _MakeSquare_FeedbackMessage_type_support_data_t _MakeSquare_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_FeedbackMessage_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__action__MakeSquare_FeedbackMessage__get_type_hash,
  &interfaces__action__MakeSquare_FeedbackMessage__get_type_description,
  &interfaces__action__MakeSquare_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, action, MakeSquare_FeedbackMessage)() {
  return &::interfaces::action::rosidl_typesupport_c::MakeSquare_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "interfaces/action/make_square.h"
// already included above
// #include "interfaces/action/detail/make_square__type_support.h"

static rosidl_action_type_support_t _interfaces__action__MakeSquare__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &interfaces__action__MakeSquare__get_type_hash,
  &interfaces__action__MakeSquare__get_type_description,
  &interfaces__action__MakeSquare__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, interfaces, action, MakeSquare)()
{
  // Thread-safe by always writing the same values to the static struct
  _interfaces__action__MakeSquare__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, interfaces, action, MakeSquare_SendGoal)();
  _interfaces__action__MakeSquare__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, interfaces, action, MakeSquare_GetResult)();
  _interfaces__action__MakeSquare__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _interfaces__action__MakeSquare__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, interfaces, action, MakeSquare_FeedbackMessage)();
  _interfaces__action__MakeSquare__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_interfaces__action__MakeSquare__typesupport_c;
}

#ifdef __cplusplus
}
#endif
