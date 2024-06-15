// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__MAKE_SQUARE__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__MAKE_SQUARE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/make_square__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_Goal_value
{
public:
  explicit Init_MakeSquare_Goal_value(::interfaces::action::MakeSquare_Goal & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_Goal value(::interfaces::action::MakeSquare_Goal::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Goal msg_;
};

class Init_MakeSquare_Goal_timestamp
{
public:
  explicit Init_MakeSquare_Goal_timestamp(::interfaces::action::MakeSquare_Goal & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Goal_value timestamp(::interfaces::action::MakeSquare_Goal::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MakeSquare_Goal_value(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Goal msg_;
};

class Init_MakeSquare_Goal_message_type
{
public:
  explicit Init_MakeSquare_Goal_message_type(::interfaces::action::MakeSquare_Goal & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Goal_timestamp message_type(::interfaces::action::MakeSquare_Goal::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_MakeSquare_Goal_timestamp(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Goal msg_;
};

class Init_MakeSquare_Goal_receiver_id
{
public:
  explicit Init_MakeSquare_Goal_receiver_id(::interfaces::action::MakeSquare_Goal & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Goal_message_type receiver_id(::interfaces::action::MakeSquare_Goal::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_MakeSquare_Goal_message_type(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Goal msg_;
};

class Init_MakeSquare_Goal_sender_id
{
public:
  Init_MakeSquare_Goal_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_Goal_receiver_id sender_id(::interfaces::action::MakeSquare_Goal::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_MakeSquare_Goal_receiver_id(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_Goal>()
{
  return interfaces::action::builder::Init_MakeSquare_Goal_sender_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_Result_timeslot
{
public:
  explicit Init_MakeSquare_Result_timeslot(::interfaces::action::MakeSquare_Result & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_Result timeslot(::interfaces::action::MakeSquare_Result::_timeslot_type arg)
  {
    msg_.timeslot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Result msg_;
};

class Init_MakeSquare_Result_result
{
public:
  explicit Init_MakeSquare_Result_result(::interfaces::action::MakeSquare_Result & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Result_timeslot result(::interfaces::action::MakeSquare_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MakeSquare_Result_timeslot(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Result msg_;
};

class Init_MakeSquare_Result_timestamp
{
public:
  explicit Init_MakeSquare_Result_timestamp(::interfaces::action::MakeSquare_Result & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Result_result timestamp(::interfaces::action::MakeSquare_Result::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MakeSquare_Result_result(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Result msg_;
};

class Init_MakeSquare_Result_message_type
{
public:
  explicit Init_MakeSquare_Result_message_type(::interfaces::action::MakeSquare_Result & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Result_timestamp message_type(::interfaces::action::MakeSquare_Result::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_MakeSquare_Result_timestamp(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Result msg_;
};

class Init_MakeSquare_Result_receiver_id
{
public:
  explicit Init_MakeSquare_Result_receiver_id(::interfaces::action::MakeSquare_Result & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_Result_message_type receiver_id(::interfaces::action::MakeSquare_Result::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_MakeSquare_Result_message_type(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Result msg_;
};

class Init_MakeSquare_Result_sender_id
{
public:
  Init_MakeSquare_Result_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_Result_receiver_id sender_id(::interfaces::action::MakeSquare_Result::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_MakeSquare_Result_receiver_id(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_Result>()
{
  return interfaces::action::builder::Init_MakeSquare_Result_sender_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_Feedback_calculation_process
{
public:
  Init_MakeSquare_Feedback_calculation_process()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::MakeSquare_Feedback calculation_process(::interfaces::action::MakeSquare_Feedback::_calculation_process_type arg)
  {
    msg_.calculation_process = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_Feedback>()
{
  return interfaces::action::builder::Init_MakeSquare_Feedback_calculation_process();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_SendGoal_Request_goal
{
public:
  explicit Init_MakeSquare_SendGoal_Request_goal(::interfaces::action::MakeSquare_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_SendGoal_Request goal(::interfaces::action::MakeSquare_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Request msg_;
};

class Init_MakeSquare_SendGoal_Request_goal_id
{
public:
  Init_MakeSquare_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_SendGoal_Request_goal goal_id(::interfaces::action::MakeSquare_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MakeSquare_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_SendGoal_Request>()
{
  return interfaces::action::builder::Init_MakeSquare_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_SendGoal_Response_stamp
{
public:
  explicit Init_MakeSquare_SendGoal_Response_stamp(::interfaces::action::MakeSquare_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_SendGoal_Response stamp(::interfaces::action::MakeSquare_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Response msg_;
};

class Init_MakeSquare_SendGoal_Response_accepted
{
public:
  Init_MakeSquare_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_SendGoal_Response_stamp accepted(::interfaces::action::MakeSquare_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MakeSquare_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_SendGoal_Response>()
{
  return interfaces::action::builder::Init_MakeSquare_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_SendGoal_Event_response
{
public:
  explicit Init_MakeSquare_SendGoal_Event_response(::interfaces::action::MakeSquare_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_SendGoal_Event response(::interfaces::action::MakeSquare_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Event msg_;
};

class Init_MakeSquare_SendGoal_Event_request
{
public:
  explicit Init_MakeSquare_SendGoal_Event_request(::interfaces::action::MakeSquare_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_SendGoal_Event_response request(::interfaces::action::MakeSquare_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MakeSquare_SendGoal_Event_response(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Event msg_;
};

class Init_MakeSquare_SendGoal_Event_info
{
public:
  Init_MakeSquare_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_SendGoal_Event_request info(::interfaces::action::MakeSquare_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MakeSquare_SendGoal_Event_request(msg_);
  }

private:
  ::interfaces::action::MakeSquare_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_SendGoal_Event>()
{
  return interfaces::action::builder::Init_MakeSquare_SendGoal_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_GetResult_Request_goal_id
{
public:
  Init_MakeSquare_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::MakeSquare_GetResult_Request goal_id(::interfaces::action::MakeSquare_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_GetResult_Request>()
{
  return interfaces::action::builder::Init_MakeSquare_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_GetResult_Response_result
{
public:
  explicit Init_MakeSquare_GetResult_Response_result(::interfaces::action::MakeSquare_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_GetResult_Response result(::interfaces::action::MakeSquare_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_GetResult_Response msg_;
};

class Init_MakeSquare_GetResult_Response_status
{
public:
  Init_MakeSquare_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_GetResult_Response_result status(::interfaces::action::MakeSquare_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MakeSquare_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::MakeSquare_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_GetResult_Response>()
{
  return interfaces::action::builder::Init_MakeSquare_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_GetResult_Event_response
{
public:
  explicit Init_MakeSquare_GetResult_Event_response(::interfaces::action::MakeSquare_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_GetResult_Event response(::interfaces::action::MakeSquare_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_GetResult_Event msg_;
};

class Init_MakeSquare_GetResult_Event_request
{
public:
  explicit Init_MakeSquare_GetResult_Event_request(::interfaces::action::MakeSquare_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MakeSquare_GetResult_Event_response request(::interfaces::action::MakeSquare_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MakeSquare_GetResult_Event_response(msg_);
  }

private:
  ::interfaces::action::MakeSquare_GetResult_Event msg_;
};

class Init_MakeSquare_GetResult_Event_info
{
public:
  Init_MakeSquare_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_GetResult_Event_request info(::interfaces::action::MakeSquare_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MakeSquare_GetResult_Event_request(msg_);
  }

private:
  ::interfaces::action::MakeSquare_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_GetResult_Event>()
{
  return interfaces::action::builder::Init_MakeSquare_GetResult_Event_info();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_FeedbackMessage_feedback
{
public:
  explicit Init_MakeSquare_FeedbackMessage_feedback(::interfaces::action::MakeSquare_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::MakeSquare_FeedbackMessage feedback(::interfaces::action::MakeSquare_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::MakeSquare_FeedbackMessage msg_;
};

class Init_MakeSquare_FeedbackMessage_goal_id
{
public:
  Init_MakeSquare_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_FeedbackMessage_feedback goal_id(::interfaces::action::MakeSquare_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MakeSquare_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::MakeSquare_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::MakeSquare_FeedbackMessage>()
{
  return interfaces::action::builder::Init_MakeSquare_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__MAKE_SQUARE__BUILDER_HPP_
