#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

typedef int32_t mode_t;

typedef uint32_t sys_pid_t;
typedef uint32_t sys_program_segment_t;
typedef uint32_t sys_overlay_t;
typedef uint32_t sys_interrupt_tag_t;
typedef uint32_t sys_mutex_t;
typedef uint32_t sys_cond_t;
typedef uint32_t sys_shared_mutex_t;
typedef uint32_t sys_sync_point_t;
typedef uint32_t sys_rwlock_t;
typedef uint32_t sys_protocol_t;
typedef uint32_t sys_recursive_t;
typedef uint32_t sys_process_shared_t;
typedef uint32_t sys_adaptive_t;
typedef uint32_t sys_semaphore_t;
typedef uint32_t sys_event_flag_t;
typedef uint32_t sys_event_queue_t;
typedef uint32_t sys_event_port_t;
typedef uint32_t sys_event_type_t;
typedef uint32_t sys_spu_thread_group_t;
typedef uint32_t sys_spu_thread_t;
typedef uint32_t sys_spu_system_module_t;
typedef uint32_t sys_timer_t;
typedef uint32_t sys_memory_t;
typedef uint32_t sys_memory_container_t;
typedef uint32_t sys_trace_t;
typedef uint32_t sys_trace_buffer_t;
typedef uint32_t second_t;
typedef uint32_t pid_t;
typedef uint32_t _sys_lwcond_queue_t;
typedef uint32_t _sys_sleep_queue_t;
typedef uint32_t sys_hw_thread_t;
typedef uint32_t sys_interrupt_thread_handle_t;
typedef uint32_t sys_interrupt_handler_handle_t;

typedef int64_t off_t;
typedef int64_t off64_t;
typedef int64_t time_t;
typedef int64_t ssize_t;
typedef int64_t useconds_t;
typedef int64_t key_t;
typedef int64_t blkcnt_t;
typedef int64_t blksize_t;
typedef int64_t system_time_t;

typedef uint64_t callout_t;
typedef uint64_t timer_t;
typedef uint64_t usecond_t;
typedef uint64_t dev_t;
typedef uint64_t ino_t;
typedef uint64_t nlink_t;
typedef uint64_t sys_ipc_key_t;
typedef uint64_t sys_ppu_thread_t;
typedef uint64_t sys_ppu_thread_icontext_t;
typedef uint64_t sys_irqoutlet_id_t;

typedef uintptr_t lparaddr_t;
typedef uintptr_t sys_addr_t;

typedef struct sys_ppu_guid_info {
	const char magic[5];
	const uint8_t id_revision;
	const uint16_t reserved1;
	const uint32_t ppu_guid[5];
	const uint32_t reserved2;
} sys_ppu_guid_info_t;

typedef struct _sys_ppu_thread_stack_t {
	void *addr;
	uint32_t size;
} sys_ppu_thread_stack_t;

typedef struct {
	system_time_t next_expiration_time;
	usecond_t period;
	uint32_t timer_state;
	uint32_t pad;
} sys_timer_information_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
} sys_memory_info_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
} sys_page_attr_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
	uint64_t val_4;
	uint64_t val_5;
} sys_vm_statistics_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
} sys_ppu_thread_stack_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
} sys_spu_segment_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
	uint32_t val_2;
	uint32_t val_3;
} sys_spu_image_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
} sys_spu_thread_argument_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
	uint32_t val_2;
} sys_spu_thread_attribute_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
	uint32_t val_2;
	uint32_t val_3;
} sys_spu_thread_group_attribute_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
	uint64_t val_4;
} sys_mutex_attribute_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
} sys_cond_attribute_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
} sys_rwlock_attribute_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
	uint32_t val_2;
	uint32_t val_3;
} sys_lwmutex_attribute_t;

typedef struct {
	uint8_t val_0;
	uint8_t val_1;
	uint8_t val_2;
	uint8_t val_3;
	uint8_t val_4;
	uint8_t val_5;
	uint8_t val_6;
	uint8_t val_7;
} sys_lwcond_attribute_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
} sys_semaphore_attribute_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
} sys_event_flag_attribute_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
	uint32_t val_2;
	uint32_t val_3;
} sys_event_queue_attribute_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
	uint64_t val_3;
} sys_event_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
} sys_timer_information_t;

typedef struct {
	uint64_t val_0;
	uint64_t val_1;
	uint64_t val_2;
} sys_lwmutex_t;

typedef struct {
	uint32_t val_0;
	uint32_t val_1;
} sys_lwcond_t;

typedef struct {
	uint64_t val_0;
} sys_prx_start_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_stop_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_load_module_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_load_module_list_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_start_module_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_stop_module_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_unload_module_option_t;

typedef struct {
	uint64_t val_0;
} sys_prx_register_module_option_t;



#endif // TYPES_H