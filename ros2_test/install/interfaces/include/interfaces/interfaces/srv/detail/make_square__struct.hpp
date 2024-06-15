// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MAKE_SQUARE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__MAKE_SQUARE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MakeSquare_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MakeSquare_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MakeSquare_Request_
{
  using Type = MakeSquare_Request_<ContainerAllocator>;

  explicit MakeSquare_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0l;
      this->receiver_id = 0l;
      this->message_type = "";
      this->value = 0.0f;
    }
  }

  explicit MakeSquare_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    message_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0l;
      this->receiver_id = 0l;
      this->message_type = "";
      this->value = 0.0f;
    }
  }

  // field types and members
  using _sender_id_type =
    int32_t;
  _sender_id_type sender_id;
  using _receiver_id_type =
    int32_t;
  _receiver_id_type receiver_id;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__sender_id(
    const int32_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__receiver_id(
    const int32_t & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MakeSquare_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MakeSquare_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MakeSquare_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MakeSquare_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MakeSquare_Request
    std::shared_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MakeSquare_Request
    std::shared_ptr<interfaces::srv::MakeSquare_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MakeSquare_Request_ & other) const
  {
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MakeSquare_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MakeSquare_Request_

// alias to use template instance with default allocator
using MakeSquare_Request =
  interfaces::srv::MakeSquare_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


// Include directives for member types
// Member 'timestamp'
// Member 'timeslot'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MakeSquare_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MakeSquare_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MakeSquare_Response_
{
  using Type = MakeSquare_Response_<ContainerAllocator>;

  explicit MakeSquare_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    timeslot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0l;
      this->receiver_id = 0l;
      this->message_type = "";
      this->result = 0.0f;
    }
  }

  explicit MakeSquare_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    message_type(_alloc),
    timeslot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0l;
      this->receiver_id = 0l;
      this->message_type = "";
      this->result = 0.0f;
    }
  }

  // field types and members
  using _sender_id_type =
    int32_t;
  _sender_id_type sender_id;
  using _receiver_id_type =
    int32_t;
  _receiver_id_type receiver_id;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _result_type =
    float;
  _result_type result;
  using _timeslot_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timeslot_type timeslot;

  // setters for named parameter idiom
  Type & set__sender_id(
    const int32_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__receiver_id(
    const int32_t & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__result(
    const float & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__timeslot(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timeslot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MakeSquare_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MakeSquare_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MakeSquare_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MakeSquare_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MakeSquare_Response
    std::shared_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MakeSquare_Response
    std::shared_ptr<interfaces::srv::MakeSquare_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MakeSquare_Response_ & other) const
  {
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->timeslot != other.timeslot) {
      return false;
    }
    return true;
  }
  bool operator!=(const MakeSquare_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MakeSquare_Response_

// alias to use template instance with default allocator
using MakeSquare_Response =
  interfaces::srv::MakeSquare_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__MakeSquare_Event __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__MakeSquare_Event __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MakeSquare_Event_
{
  using Type = MakeSquare_Event_<ContainerAllocator>;

  explicit MakeSquare_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MakeSquare_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::srv::MakeSquare_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::MakeSquare_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::srv::MakeSquare_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::MakeSquare_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interfaces::srv::MakeSquare_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::MakeSquare_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interfaces::srv::MakeSquare_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::MakeSquare_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::MakeSquare_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::MakeSquare_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MakeSquare_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::MakeSquare_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__MakeSquare_Event
    std::shared_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__MakeSquare_Event
    std::shared_ptr<interfaces::srv::MakeSquare_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MakeSquare_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MakeSquare_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MakeSquare_Event_

// alias to use template instance with default allocator
using MakeSquare_Event =
  interfaces::srv::MakeSquare_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct MakeSquare
{
  using Request = interfaces::srv::MakeSquare_Request;
  using Response = interfaces::srv::MakeSquare_Response;
  using Event = interfaces::srv::MakeSquare_Event;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MAKE_SQUARE__STRUCT_HPP_
