// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MAKE_SQUARE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__MAKE_SQUARE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/make_square__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MakeSquare_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::MakeSquare_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::MakeSquare_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::MakeSquare_Request>()
{
  return "interfaces::srv::MakeSquare_Request";
}

template<>
inline const char * name<interfaces::srv::MakeSquare_Request>()
{
  return "interfaces/srv/MakeSquare_Request";
}

template<>
struct has_fixed_size<interfaces::srv::MakeSquare_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::MakeSquare_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::MakeSquare_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'timestamp'
// Member 'timeslot'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MakeSquare_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: timeslot
  {
    out << "timeslot: ";
    to_flow_style_yaml(msg.timeslot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: timeslot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeslot:\n";
    to_block_style_yaml(msg.timeslot, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::MakeSquare_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::MakeSquare_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::MakeSquare_Response>()
{
  return "interfaces::srv::MakeSquare_Response";
}

template<>
inline const char * name<interfaces::srv::MakeSquare_Response>()
{
  return "interfaces/srv/MakeSquare_Response";
}

template<>
struct has_fixed_size<interfaces::srv::MakeSquare_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::MakeSquare_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::MakeSquare_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MakeSquare_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::MakeSquare_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::MakeSquare_Event & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::MakeSquare_Event>()
{
  return "interfaces::srv::MakeSquare_Event";
}

template<>
inline const char * name<interfaces::srv::MakeSquare_Event>()
{
  return "interfaces/srv/MakeSquare_Event";
}

template<>
struct has_fixed_size<interfaces::srv::MakeSquare_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::MakeSquare_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::srv::MakeSquare_Request>::value && has_bounded_size<interfaces::srv::MakeSquare_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::srv::MakeSquare_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::MakeSquare>()
{
  return "interfaces::srv::MakeSquare";
}

template<>
inline const char * name<interfaces::srv::MakeSquare>()
{
  return "interfaces/srv/MakeSquare";
}

template<>
struct has_fixed_size<interfaces::srv::MakeSquare>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::MakeSquare_Request>::value &&
    has_fixed_size<interfaces::srv::MakeSquare_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::MakeSquare>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::MakeSquare_Request>::value &&
    has_bounded_size<interfaces::srv::MakeSquare_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::MakeSquare>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::MakeSquare_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::MakeSquare_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__MAKE_SQUARE__TRAITS_HPP_
