// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces/srv/detail/make_square__functions.h"
#include "interfaces/srv/detail/make_square__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MakeSquare_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_Request_type_support_ids_t;

static const _MakeSquare_Request_type_support_ids_t _MakeSquare_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MakeSquare_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_Request_type_support_symbol_names_t _MakeSquare_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, MakeSquare_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, MakeSquare_Request)),
  }
};

typedef struct _MakeSquare_Request_type_support_data_t
{
  void * data[2];
} _MakeSquare_Request_type_support_data_t;

static _MakeSquare_Request_type_support_data_t _MakeSquare_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_Request_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces__srv__MakeSquare_Request__get_type_hash,
  &interfaces__srv__MakeSquare_Request__get_type_description,
  &interfaces__srv__MakeSquare_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::MakeSquare_Request>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::MakeSquare_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, MakeSquare_Request)() {
  return get_message_type_support_handle<interfaces::srv::MakeSquare_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/make_square__functions.h"
// already included above
// #include "interfaces/srv/detail/make_square__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MakeSquare_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_Response_type_support_ids_t;

static const _MakeSquare_Response_type_support_ids_t _MakeSquare_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MakeSquare_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_Response_type_support_symbol_names_t _MakeSquare_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, MakeSquare_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, MakeSquare_Response)),
  }
};

typedef struct _MakeSquare_Response_type_support_data_t
{
  void * data[2];
} _MakeSquare_Response_type_support_data_t;

static _MakeSquare_Response_type_support_data_t _MakeSquare_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_Response_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces__srv__MakeSquare_Response__get_type_hash,
  &interfaces__srv__MakeSquare_Response__get_type_description,
  &interfaces__srv__MakeSquare_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::MakeSquare_Response>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::MakeSquare_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, MakeSquare_Response)() {
  return get_message_type_support_handle<interfaces::srv::MakeSquare_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/make_square__functions.h"
// already included above
// #include "interfaces/srv/detail/make_square__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MakeSquare_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_Event_type_support_ids_t;

static const _MakeSquare_Event_type_support_ids_t _MakeSquare_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MakeSquare_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_Event_type_support_symbol_names_t _MakeSquare_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, MakeSquare_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, MakeSquare_Event)),
  }
};

typedef struct _MakeSquare_Event_type_support_data_t
{
  void * data[2];
} _MakeSquare_Event_type_support_data_t;

static _MakeSquare_Event_type_support_data_t _MakeSquare_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_Event_message_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakeSquare_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces__srv__MakeSquare_Event__get_type_hash,
  &interfaces__srv__MakeSquare_Event__get_type_description,
  &interfaces__srv__MakeSquare_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::MakeSquare_Event>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::MakeSquare_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces, srv, MakeSquare_Event)() {
  return get_message_type_support_handle<interfaces::srv::MakeSquare_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "interfaces/srv/detail/make_square__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MakeSquare_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakeSquare_type_support_ids_t;

static const _MakeSquare_type_support_ids_t _MakeSquare_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MakeSquare_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakeSquare_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakeSquare_type_support_symbol_names_t _MakeSquare_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces, srv, MakeSquare)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, MakeSquare)),
  }
};

typedef struct _MakeSquare_type_support_data_t
{
  void * data[2];
} _MakeSquare_type_support_data_t;

static _MakeSquare_type_support_data_t _MakeSquare_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakeSquare_service_typesupport_map = {
  2,
  "interfaces",
  &_MakeSquare_service_typesupport_ids.typesupport_identifier[0],
  &_MakeSquare_service_typesupport_symbol_names.symbol_name[0],
  &_MakeSquare_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MakeSquare_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakeSquare_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces::srv::MakeSquare_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces::srv::MakeSquare_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces::srv::MakeSquare_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<interfaces::srv::MakeSquare>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<interfaces::srv::MakeSquare>,
  &interfaces__srv__MakeSquare__get_type_hash,
  &interfaces__srv__MakeSquare__get_type_description,
  &interfaces__srv__MakeSquare__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::srv::MakeSquare>()
{
  return &::interfaces::srv::rosidl_typesupport_cpp::MakeSquare_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
