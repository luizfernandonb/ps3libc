#ifndef SYSCALLS_H
#define SYSCALLS_H

#include <stdint.h>
#include <stddef.h>
#include <ps3/types.h>

#define PS3LIBC_INLINE __attribute__((always_inline))

// https://www.psdevwiki.com/ps3/LV2_Functions_and_Syscalls

// To call a syscall:

static int call_syscall_0(int id);
static int call_syscall_1(int id, uint64_t arg1);
static int call_syscall_2(int id, uint64_t arg1, uint64_t arg2);
static int call_syscall_3(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3);
static int call_syscall_4(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);
static int call_syscall_5(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5);
static int call_syscall_6(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6);
static int call_syscall_7(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7);
static int call_syscall_8(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8);

// Syscalls:
// sys_process_*

extern int sys_process_getpid() PS3LIBC_INLINE;
extern int sys_process_wait_for_child(int process_id, uint32_t *status, int unk) PS3LIBC_INLINE;
extern int sys_process_exit(int status) PS3LIBC_INLINE;
extern int sys_process_get_status(int process_id) PS3LIBC_INLINE;

// sys_process_detach_child ?
// sys_process_create_program_segment ?
// sys_process_destroy_program_segment ?
// sys_process_authenticate_program_segment ?
// sys_process_load_program_segment ?
// sys_process_unload_program_segment ?
// sys_process_find_program_segment ?

extern int sys_process_get_number_of_object(uint32_t object_type, uint32_t *count) PS3LIBC_INLINE;
extern int sys_process_get_id(uint32_t object, uint32_t *buff, size_t size, size_t *set_size) PS3LIBC_INLINE;
extern int sys_process_is_spu_lock_line_reservation_address(uintptr_t addr, uint64_t flags) PS3LIBC_INLINE;

// sys_process_create ?
// sys_process_create_primary_ppu_thread ?

extern int sys_process_getppid() PS3LIBC_INLINE;
extern int sys_process_kill(int process_id) PS3LIBC_INLINE;

// sys_process_create_primary_ppu_thread_tls ?

extern int sys_process_spawn(int *process_id, int prio, uint64_t flags, void *stack, int stack_size, int unk1, int unk2) PS3LIBC_INLINE;

// sys_process_exit2 ?
// sys_process_wait_for_child2 ?
// syscall nº 24 ?

extern int sys_process_get_sdk_version(int process_id, uint32_t* sdk_version) PS3LIBC_INLINE;

// _sys_process_exit as well ?
// syscall nº 27 ?
// _sys_process_get_number_of_object as well kinda ?
// sys_process_get_id as well ?
// _sys_process_get_paramsfo ?

extern uintptr_t sys_process_get_ppu_guid() PS3LIBC_INLINE;


// sys_ppu_*

extern int sys_ppu_thread_exit(int status) PS3LIBC_INLINE;

// sys_ppu_thread_get_id ?

extern void sys_ppu_thread_yield() PS3LIBC_INLINE;
extern int sys_ppu_thread_join(uint64_t thread_id, uint64_t *vptr) PS3LIBC_INLINE;
extern int sys_ppu_thread_detach(uint64_t thread_id) PS3LIBC_INLINE;
extern void sys_ppu_thread_get_join_state(int *isjoinable) PS3LIBC_INLINE;
extern int sys_ppu_thread_set_priority(uint64_t thread_id, int prio) PS3LIBC_INLINE;
extern int sys_ppu_thread_get_stack_information(sys_ppu_thread_stack_t *info) PS3LIBC_INLINE;
extern int sys_ppu_thread_stop(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_ppu_thread_restart() PS3LIBC_INLINE;

// sys_ppu_thread_create ?

extern int sys_ppu_thread_start(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;

// syscall nº 54 ?
// syscall nº 55 ?

extern int sys_ppu_thread_rename(sys_ppu_thread_t thread_id, const char *name) PS3LIBC_INLINE;
extern int sys_ppu_thread_recover_page_fault(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_ppu_thread_get_page_fault_context(sys_ppu_thread_t thread_id, sys_ppu_thread_icontext_t *ctxp) PS3LIBC_INLINE;

// sys_trace_create	?
// sys_trace_start ?
// sys_trace_stop ?
// sys_trace_update_top_index ?
// sys_trace_destroy ?
// sys_trace_drain ?
// sys_trace_attach_process	?
// sys_trace_allocate_buffer ?
// sys_trace_free_buffer ?
// sys_trace_create2 ?
// sys_trace_create2_in_cbepm ?
// sys_trace_ ?

// sys_timer_*

extern int sys_timer_create(sys_timer_t *timer_id) PS3LIBC_INLINE;
extern int sys_timer_destroy(sys_timer_t timer_id) PS3LIBC_INLINE;
extern int sys_timer_get_information(sys_timer_t timer_id, sys_timer_information_t *info) PS3LIBC_INLINE;
extern int sys_timer_start(sys_timer_t timer_id, system_time_t base_time, usecond_t period) PS3LIBC_INLINE;
extern int sys_timer_stop(sys_timer_t timer_id) PS3LIBC_INLINE;
extern int sys_timer_connect_event_queue(sys_timer_t timer_id, sys_event_queue_t queue_id, uint64_t name, uint64_t data1, uint64_t data2) PS3LIBC_INLINE;
extern int sys_timer_disconnect_event_queue(sys_timer_t timer_id) PS3LIBC_INLINE;

// sys_interrupt_*

extern int sys_interrupt_tag_create(sys_interrupt_tag_t *intrtag, sys_irqoutlet_id_t irq, sys_hw_thread_t hwthread) PS3LIBC_INLINE;
extern int sys_interrupt_tag_destroy(sys_interrupt_tag_t intrtag) PS3LIBC_INLINE;
extern int sys_interrupt_thread_establish(sys_interrupt_thread_handle_t * ih, sys_interrupt_tag_t intrtag, uint64_t intrthread, uint64_t arg1, uint64_t arg2);

// sys_event_*

extern int sys_event_flag_create(sys_event_flag_t *id, sys_event_flag_attribute_t *attr, uint64_t init) PS3LIBC_INLINE;
extern int sys_event_flag_destroy(sys_event_flag_t id);

















#endif // SYSCALLS_H