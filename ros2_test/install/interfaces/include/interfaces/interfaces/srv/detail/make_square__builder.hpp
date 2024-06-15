// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MAKE_SQUARE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__MAKE_SQUARE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/make_square__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MakeSquare_Request_value
{
public:
  explicit Init_MakeSquare_Request_value(::interfaces::srv::MakeSquare_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::MakeSquare_Request value(::interfaces::srv::MakeSquare_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Request msg_;
};

class Init_MakeSquare_Request_message_type
{
public:
  explicit Init_MakeSquare_Request_message_type(::interfaces::srv::MakeSquare_Request & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Request_value message_type(::interfaces::srv::MakeSquare_Request::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_MakeSquare_Request_value(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Request msg_;
};

class Init_MakeSquare_Request_timestamp
{
public:
  explicit Init_MakeSquare_Request_timestamp(::interfaces::srv::MakeSquare_Request & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Request_message_type timestamp(::interfaces::srv::MakeSquare_Request::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MakeSquare_Request_message_type(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Request msg_;
};

class Init_MakeSquare_Request_receiver_id
{
public:
  explicit Init_MakeSquare_Request_receiver_id(::interfaces::srv::MakeSquare_Request & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Request_timestamp receiver_id(::interfaces::srv::MakeSquare_Request::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_MakeSquare_Request_timestamp(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Request msg_;
};

class Init_MakeSquare_Request_sender_id
{
public:
  Init_MakeSquare_Request_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_Request_receiver_id sender_id(::interfaces::srv::MakeSquare_Request::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_MakeSquare_Request_receiver_id(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MakeSquare_Request>()
{
  return interfaces::srv::builder::Init_MakeSquare_Request_sender_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MakeSquare_Response_timeslot
{
public:
  explicit Init_MakeSquare_Response_timeslot(::interfaces::srv::MakeSquare_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::MakeSquare_Response timeslot(::interfaces::srv::MakeSquare_Response::_timeslot_type arg)
  {
    msg_.timeslot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Response msg_;
};

class Init_MakeSquare_Response_result
{
public:
  explicit Init_MakeSquare_Response_result(::interfaces::srv::MakeSquare_Response & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Response_timeslot result(::interfaces::srv::MakeSquare_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MakeSquare_Response_timeslot(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Response msg_;
};

class Init_MakeSquare_Response_message_type
{
public:
  explicit Init_MakeSquare_Response_message_type(::interfaces::srv::MakeSquare_Response & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Response_result message_type(::interfaces::srv::MakeSquare_Response::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_MakeSquare_Response_result(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Response msg_;
};

class Init_MakeSquare_Response_timestamp
{
public:
  explicit Init_MakeSquare_Response_timestamp(::interfaces::srv::MakeSquare_Response & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Response_message_type timestamp(::interfaces::srv::MakeSquare_Response::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MakeSquare_Response_message_type(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Response msg_;
};

class Init_MakeSquare_Response_receiver_id
{
public:
  explicit Init_MakeSquare_Response_receiver_id(::interfaces::srv::MakeSquare_Response & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Response_timestamp receiver_id(::interfaces::srv::MakeSquare_Response::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_MakeSquare_Response_timestamp(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Response msg_;
};

class Init_MakeSquare_Response_sender_id
{
public:
  Init_MakeSquare_Response_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_Response_receiver_id sender_id(::interfaces::srv::MakeSquare_Response::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_MakeSquare_Response_receiver_id(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MakeSquare_Response>()
{
  return interfaces::srv::builder::Init_MakeSquare_Response_sender_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_MakeSquare_Event_response
{
public:
  explicit Init_MakeSquare_Event_response(::interfaces::srv::MakeSquare_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::MakeSquare_Event response(::interfaces::srv::MakeSquare_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Event msg_;
};

class Init_MakeSquare_Event_request
{
public:
  explicit Init_MakeSquare_Event_request(::interfaces::srv::MakeSquare_Event & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Event_response request(::interfaces::srv::MakeSquare_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MakeSquare_Event_response(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Event msg_;
};

class Init_MakeSquare_Event_info
{
public:
  Init_MakeSquare_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_Event_request info(::interfaces::srv::MakeSquare_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MakeSquare_Event_request(msg_);
  }

private:
  ::interfaces::srv::MakeSquare_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::MakeSquare_Event>()
{
  return interfaces::srv::builder::Init_MakeSquare_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MAKE_SQUARE__BUILDER_HPP_
