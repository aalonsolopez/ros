// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msgs_control/srv/sim_pid.hpp"


#ifndef MSGS_CONTROL__SRV__DETAIL__SIM_PID__TRAITS_HPP_
#define MSGS_CONTROL__SRV__DETAIL__SIM_PID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgs_control/srv/detail/sim_pid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msgs_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimPID_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimPID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimPID_Request & msg, bool use_flow_style = false)
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

}  // namespace msgs_control

namespace rosidl_generator_traits
{

[[deprecated("use msgs_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_control::srv::SimPID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const msgs_control::srv::SimPID_Request & msg)
{
  return msgs_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_control::srv::SimPID_Request>()
{
  return "msgs_control::srv::SimPID_Request";
}

template<>
inline const char * name<msgs_control::srv::SimPID_Request>()
{
  return "msgs_control/srv/SimPID_Request";
}

template<>
struct has_fixed_size<msgs_control::srv::SimPID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgs_control::srv::SimPID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgs_control::srv::SimPID_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace msgs_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimPID_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: overshoot
  {
    out << "overshoot: ";
    rosidl_generator_traits::value_to_yaml(msg.overshoot, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: ess
  {
    out << "ess: ";
    rosidl_generator_traits::value_to_yaml(msg.ess, out);
    out << ", ";
  }

  // member: ts
  {
    out << "ts: ";
    rosidl_generator_traits::value_to_yaml(msg.ts, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimPID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: overshoot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overshoot: ";
    rosidl_generator_traits::value_to_yaml(msg.overshoot, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: ess
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ess: ";
    rosidl_generator_traits::value_to_yaml(msg.ess, out);
    out << "\n";
  }

  // member: ts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts: ";
    rosidl_generator_traits::value_to_yaml(msg.ts, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimPID_Response & msg, bool use_flow_style = false)
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

}  // namespace msgs_control

namespace rosidl_generator_traits
{

[[deprecated("use msgs_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_control::srv::SimPID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const msgs_control::srv::SimPID_Response & msg)
{
  return msgs_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_control::srv::SimPID_Response>()
{
  return "msgs_control::srv::SimPID_Response";
}

template<>
inline const char * name<msgs_control::srv::SimPID_Response>()
{
  return "msgs_control/srv/SimPID_Response";
}

template<>
struct has_fixed_size<msgs_control::srv::SimPID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgs_control::srv::SimPID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgs_control::srv::SimPID_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace msgs_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimPID_Event & msg,
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
  const SimPID_Event & msg,
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

inline std::string to_yaml(const SimPID_Event & msg, bool use_flow_style = false)
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

}  // namespace msgs_control

namespace rosidl_generator_traits
{

[[deprecated("use msgs_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgs_control::srv::SimPID_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgs_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgs_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const msgs_control::srv::SimPID_Event & msg)
{
  return msgs_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msgs_control::srv::SimPID_Event>()
{
  return "msgs_control::srv::SimPID_Event";
}

template<>
inline const char * name<msgs_control::srv::SimPID_Event>()
{
  return "msgs_control/srv/SimPID_Event";
}

template<>
struct has_fixed_size<msgs_control::srv::SimPID_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msgs_control::srv::SimPID_Event>
  : std::integral_constant<bool, has_bounded_size<msgs_control::srv::SimPID_Request>::value && has_bounded_size<msgs_control::srv::SimPID_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<msgs_control::srv::SimPID_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs_control::srv::SimPID>()
{
  return "msgs_control::srv::SimPID";
}

template<>
inline const char * name<msgs_control::srv::SimPID>()
{
  return "msgs_control/srv/SimPID";
}

template<>
struct has_fixed_size<msgs_control::srv::SimPID>
  : std::integral_constant<
    bool,
    has_fixed_size<msgs_control::srv::SimPID_Request>::value &&
    has_fixed_size<msgs_control::srv::SimPID_Response>::value
  >
{
};

template<>
struct has_bounded_size<msgs_control::srv::SimPID>
  : std::integral_constant<
    bool,
    has_bounded_size<msgs_control::srv::SimPID_Request>::value &&
    has_bounded_size<msgs_control::srv::SimPID_Response>::value
  >
{
};

template<>
struct is_service<msgs_control::srv::SimPID>
  : std::true_type
{
};

template<>
struct is_service_request<msgs_control::srv::SimPID_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msgs_control::srv::SimPID_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSGS_CONTROL__SRV__DETAIL__SIM_PID__TRAITS_HPP_
