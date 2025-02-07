// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msgs_control/srv/sim_pid.h"


#ifndef MSGS_CONTROL__SRV__DETAIL__SIM_PID__FUNCTIONS_H_
#define MSGS_CONTROL__SRV__DETAIL__SIM_PID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "msgs_control/msg/rosidl_generator_c__visibility_control.h"

#include "msgs_control/srv/detail/sim_pid__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SimPID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_control__srv__SimPID_Request
 * )) before or use
 * msgs_control__srv__SimPID_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Request__init(msgs_control__srv__SimPID_Request * msg);

/// Finalize srv/SimPID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Request__fini(msgs_control__srv__SimPID_Request * msg);

/// Create srv/SimPID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_control__srv__SimPID_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
msgs_control__srv__SimPID_Request *
msgs_control__srv__SimPID_Request__create(void);

/// Destroy srv/SimPID message.
/**
 * It calls
 * msgs_control__srv__SimPID_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Request__destroy(msgs_control__srv__SimPID_Request * msg);

/// Check for srv/SimPID message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Request__are_equal(const msgs_control__srv__SimPID_Request * lhs, const msgs_control__srv__SimPID_Request * rhs);

/// Copy a srv/SimPID message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Request__copy(
  const msgs_control__srv__SimPID_Request * input,
  msgs_control__srv__SimPID_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SimPID messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_control__srv__SimPID_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Request__Sequence__init(msgs_control__srv__SimPID_Request__Sequence * array, size_t size);

/// Finalize array of srv/SimPID messages.
/**
 * It calls
 * msgs_control__srv__SimPID_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Request__Sequence__fini(msgs_control__srv__SimPID_Request__Sequence * array);

/// Create array of srv/SimPID messages.
/**
 * It allocates the memory for the array and calls
 * msgs_control__srv__SimPID_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
msgs_control__srv__SimPID_Request__Sequence *
msgs_control__srv__SimPID_Request__Sequence__create(size_t size);

/// Destroy array of srv/SimPID messages.
/**
 * It calls
 * msgs_control__srv__SimPID_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Request__Sequence__destroy(msgs_control__srv__SimPID_Request__Sequence * array);

/// Check for srv/SimPID message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Request__Sequence__are_equal(const msgs_control__srv__SimPID_Request__Sequence * lhs, const msgs_control__srv__SimPID_Request__Sequence * rhs);

/// Copy an array of srv/SimPID messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Request__Sequence__copy(
  const msgs_control__srv__SimPID_Request__Sequence * input,
  msgs_control__srv__SimPID_Request__Sequence * output);

/// Initialize srv/SimPID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_control__srv__SimPID_Response
 * )) before or use
 * msgs_control__srv__SimPID_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Response__init(msgs_control__srv__SimPID_Response * msg);

/// Finalize srv/SimPID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Response__fini(msgs_control__srv__SimPID_Response * msg);

/// Create srv/SimPID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_control__srv__SimPID_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
msgs_control__srv__SimPID_Response *
msgs_control__srv__SimPID_Response__create(void);

/// Destroy srv/SimPID message.
/**
 * It calls
 * msgs_control__srv__SimPID_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Response__destroy(msgs_control__srv__SimPID_Response * msg);

/// Check for srv/SimPID message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Response__are_equal(const msgs_control__srv__SimPID_Response * lhs, const msgs_control__srv__SimPID_Response * rhs);

/// Copy a srv/SimPID message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Response__copy(
  const msgs_control__srv__SimPID_Response * input,
  msgs_control__srv__SimPID_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SimPID messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_control__srv__SimPID_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Response__Sequence__init(msgs_control__srv__SimPID_Response__Sequence * array, size_t size);

/// Finalize array of srv/SimPID messages.
/**
 * It calls
 * msgs_control__srv__SimPID_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Response__Sequence__fini(msgs_control__srv__SimPID_Response__Sequence * array);

/// Create array of srv/SimPID messages.
/**
 * It allocates the memory for the array and calls
 * msgs_control__srv__SimPID_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
msgs_control__srv__SimPID_Response__Sequence *
msgs_control__srv__SimPID_Response__Sequence__create(size_t size);

/// Destroy array of srv/SimPID messages.
/**
 * It calls
 * msgs_control__srv__SimPID_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Response__Sequence__destroy(msgs_control__srv__SimPID_Response__Sequence * array);

/// Check for srv/SimPID message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Response__Sequence__are_equal(const msgs_control__srv__SimPID_Response__Sequence * lhs, const msgs_control__srv__SimPID_Response__Sequence * rhs);

/// Copy an array of srv/SimPID messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Response__Sequence__copy(
  const msgs_control__srv__SimPID_Response__Sequence * input,
  msgs_control__srv__SimPID_Response__Sequence * output);

/// Initialize srv/SimPID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_control__srv__SimPID_Event
 * )) before or use
 * msgs_control__srv__SimPID_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Event__init(msgs_control__srv__SimPID_Event * msg);

/// Finalize srv/SimPID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Event__fini(msgs_control__srv__SimPID_Event * msg);

/// Create srv/SimPID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_control__srv__SimPID_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
msgs_control__srv__SimPID_Event *
msgs_control__srv__SimPID_Event__create(void);

/// Destroy srv/SimPID message.
/**
 * It calls
 * msgs_control__srv__SimPID_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Event__destroy(msgs_control__srv__SimPID_Event * msg);

/// Check for srv/SimPID message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Event__are_equal(const msgs_control__srv__SimPID_Event * lhs, const msgs_control__srv__SimPID_Event * rhs);

/// Copy a srv/SimPID message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Event__copy(
  const msgs_control__srv__SimPID_Event * input,
  msgs_control__srv__SimPID_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SimPID messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_control__srv__SimPID_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Event__Sequence__init(msgs_control__srv__SimPID_Event__Sequence * array, size_t size);

/// Finalize array of srv/SimPID messages.
/**
 * It calls
 * msgs_control__srv__SimPID_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Event__Sequence__fini(msgs_control__srv__SimPID_Event__Sequence * array);

/// Create array of srv/SimPID messages.
/**
 * It allocates the memory for the array and calls
 * msgs_control__srv__SimPID_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
msgs_control__srv__SimPID_Event__Sequence *
msgs_control__srv__SimPID_Event__Sequence__create(size_t size);

/// Destroy array of srv/SimPID messages.
/**
 * It calls
 * msgs_control__srv__SimPID_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
void
msgs_control__srv__SimPID_Event__Sequence__destroy(msgs_control__srv__SimPID_Event__Sequence * array);

/// Check for srv/SimPID message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Event__Sequence__are_equal(const msgs_control__srv__SimPID_Event__Sequence * lhs, const msgs_control__srv__SimPID_Event__Sequence * rhs);

/// Copy an array of srv/SimPID messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_control
bool
msgs_control__srv__SimPID_Event__Sequence__copy(
  const msgs_control__srv__SimPID_Event__Sequence * input,
  msgs_control__srv__SimPID_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // MSGS_CONTROL__SRV__DETAIL__SIM_PID__FUNCTIONS_H_
