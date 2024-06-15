// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__MAKE_SQUARE__TRAITS_HPP_
#define INTERFACES__ACTION__DETAIL__MAKE_SQUARE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/action/detail/make_square__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_Goal & msg,
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

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
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
  const MakeSquare_Goal & msg,
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

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
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

inline std::string to_yaml(const MakeSquare_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_Goal & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_Goal>()
{
  return "interfaces::action::MakeSquare_Goal";
}

template<>
inline const char * name<interfaces::action::MakeSquare_Goal>()
{
  return "interfaces/action/MakeSquare_Goal";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::MakeSquare_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'timestamp'
// Member 'timeslot'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_Result & msg,
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

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
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
  const MakeSquare_Result & msg,
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

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
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

inline std::string to_yaml(const MakeSquare_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_Result & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_Result>()
{
  return "interfaces::action::MakeSquare_Result";
}

template<>
inline const char * name<interfaces::action::MakeSquare_Result>()
{
  return "interfaces/action/MakeSquare_Result";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::MakeSquare_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: calculation_process
  {
    out << "calculation_process: ";
    rosidl_generator_traits::value_to_yaml(msg.calculation_process, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: calculation_process
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calculation_process: ";
    rosidl_generator_traits::value_to_yaml(msg.calculation_process, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_Feedback & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_Feedback>()
{
  return "interfaces::action::MakeSquare_Feedback";
}

template<>
inline const char * name<interfaces::action::MakeSquare_Feedback>()
{
  return "interfaces/action/MakeSquare_Feedback";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::action::MakeSquare_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interfaces/action/detail/make_square__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_SendGoal_Request & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_SendGoal_Request>()
{
  return "interfaces::action::MakeSquare_SendGoal_Request";
}

template<>
inline const char * name<interfaces::action::MakeSquare_SendGoal_Request>()
{
  return "interfaces/action/MakeSquare_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::MakeSquare_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::MakeSquare_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_SendGoal_Response & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_SendGoal_Response>()
{
  return "interfaces::action::MakeSquare_SendGoal_Response";
}

template<>
inline const char * name<interfaces::action::MakeSquare_SendGoal_Response>()
{
  return "interfaces/action/MakeSquare_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_SendGoal_Event & msg,
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
  const MakeSquare_SendGoal_Event & msg,
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

inline std::string to_yaml(const MakeSquare_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_SendGoal_Event & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_SendGoal_Event>()
{
  return "interfaces::action::MakeSquare_SendGoal_Event";
}

template<>
inline const char * name<interfaces::action::MakeSquare_SendGoal_Event>()
{
  return "interfaces/action/MakeSquare_SendGoal_Event";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::MakeSquare_SendGoal_Request>::value && has_bounded_size<interfaces::action::MakeSquare_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::MakeSquare_SendGoal>()
{
  return "interfaces::action::MakeSquare_SendGoal";
}

template<>
inline const char * name<interfaces::action::MakeSquare_SendGoal>()
{
  return "interfaces/action/MakeSquare_SendGoal";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::MakeSquare_SendGoal_Request>::value &&
    has_fixed_size<interfaces::action::MakeSquare_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::MakeSquare_SendGoal_Request>::value &&
    has_bounded_size<interfaces::action::MakeSquare_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::MakeSquare_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::MakeSquare_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::MakeSquare_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_GetResult_Request & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_GetResult_Request>()
{
  return "interfaces::action::MakeSquare_GetResult_Request";
}

template<>
inline const char * name<interfaces::action::MakeSquare_GetResult_Request>()
{
  return "interfaces/action/MakeSquare_GetResult_Request";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/make_square__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_GetResult_Response & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_GetResult_Response>()
{
  return "interfaces::action::MakeSquare_GetResult_Response";
}

template<>
inline const char * name<interfaces::action::MakeSquare_GetResult_Response>()
{
  return "interfaces/action/MakeSquare_GetResult_Response";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::MakeSquare_Result>::value> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::MakeSquare_Result>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_GetResult_Event & msg,
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
  const MakeSquare_GetResult_Event & msg,
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

inline std::string to_yaml(const MakeSquare_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_GetResult_Event & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_GetResult_Event>()
{
  return "interfaces::action::MakeSquare_GetResult_Event";
}

template<>
inline const char * name<interfaces::action::MakeSquare_GetResult_Event>()
{
  return "interfaces/action/MakeSquare_GetResult_Event";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::MakeSquare_GetResult_Request>::value && has_bounded_size<interfaces::action::MakeSquare_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::action::MakeSquare_GetResult>()
{
  return "interfaces::action::MakeSquare_GetResult";
}

template<>
inline const char * name<interfaces::action::MakeSquare_GetResult>()
{
  return "interfaces/action/MakeSquare_GetResult";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::action::MakeSquare_GetResult_Request>::value &&
    has_fixed_size<interfaces::action::MakeSquare_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::action::MakeSquare_GetResult_Request>::value &&
    has_bounded_size<interfaces::action::MakeSquare_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaces::action::MakeSquare_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::action::MakeSquare_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::action::MakeSquare_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/make_square__traits.hpp"

namespace interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::action::MakeSquare_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::action::MakeSquare_FeedbackMessage & msg)
{
  return interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::action::MakeSquare_FeedbackMessage>()
{
  return "interfaces::action::MakeSquare_FeedbackMessage";
}

template<>
inline const char * name<interfaces::action::MakeSquare_FeedbackMessage>()
{
  return "interfaces/action/MakeSquare_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaces::action::MakeSquare_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaces::action::MakeSquare_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaces::action::MakeSquare_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaces::action::MakeSquare_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaces::action::MakeSquare_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaces::action::MakeSquare>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaces::action::MakeSquare_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaces::action::MakeSquare_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaces::action::MakeSquare_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFACES__ACTION__DETAIL__MAKE_SQUARE__TRAITS_HPP_
