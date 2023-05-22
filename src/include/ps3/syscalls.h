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

extern sys_pid_t sys_process_getpid() PS3LIBC_INLINE;
extern int sys_process_wait_for_child(sys_pid_t process_id, uint32_t *status, int unk) PS3LIBC_INLINE;
extern void sys_process_exit(int status) PS3LIBC_INLINE;
extern int sys_process_get_status(sys_pid_t process_id) PS3LIBC_INLINE;
extern int sys_process_detach_child(sys_pid_t process_id) PS3LIBC_INLINE;

// sys_process_create_program_segment ?
// sys_process_destroy_program_segment ?
// sys_process_authenticate_program_segment ?
// sys_process_load_program_segment ?
// sys_process_unload_program_segment ?
// sys_process_find_program_segment ?

extern int sys_process_get_number_of_object(uint32_t object, size_t *nump) PS3LIBC_INLINE;
extern int sys_process_get_id(uint32_t object, uint32_t *buff, size_t size, size_t *set_size) PS3LIBC_INLINE;
extern int sys_process_get_id2(uint32_t object, uint32_t *buff, size_t size, size_t *set_size) PS3LIBC_INLINE;
extern int sys_process_is_spu_lock_line_reservation_address(sys_addr_t addr, uint64_t flags) PS3LIBC_INLINE;

// sys_process_create ?
// sys_process_create_primary_ppu_thread ?

extern sys_pid_t sys_process_getppid() PS3LIBC_INLINE;
extern int sys_process_kill(sys_pid_t process_id) PS3LIBC_INLINE;

// sys_process_create_primary_ppu_thread_tls ?
// sys_process_spawn ?

// sys_process_exit2 ?
// sys_process_wait_for_child2 ?
// syscall nº 24 ?

extern int sys_process_get_sdk_version(sys_pid_t process_id, uint32_t* sdk_version) PS3LIBC_INLINE;

// _sys_process_exit as well ?
// syscall nº 27 ?
// _sys_process_get_number_of_object as well kinda ?

extern int sys_process_get_paramsfo(uint8_t buffer[0x40]) PS3LIBC_INLINE;
extern sys_addr_t sys_process_get_ppu_guid() PS3LIBC_INLINE;


// sys_ppu_*

extern int sys_ppu_thread_exit(uint64_t status) PS3LIBC_INLINE;
extern int sys_ppu_thread_get_id(sys_ppu_thread_t *thread_id) PS3LIBC_INLINE;
extern void sys_ppu_thread_yield() PS3LIBC_INLINE;
extern int sys_ppu_thread_join(sys_ppu_thread_t thread_id, uint64_t *vptr) PS3LIBC_INLINE;
extern int sys_ppu_thread_detach(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern void sys_ppu_thread_get_join_state(uint32_t *isjoinable) PS3LIBC_INLINE;
extern int sys_ppu_thread_set_priority(sys_ppu_thread_t thread_id, int prio) PS3LIBC_INLINE;
extern int sys_ppu_thread_get_stack_information(sys_ppu_thread_stack_t *sp) PS3LIBC_INLINE;
extern int sys_ppu_thread_stop(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_ppu_thread_restart() PS3LIBC_INLINE;
extern int sys_ppu_thread_create(sys_ppu_thread_t *thread_id, void(*entry)(uint64_t), uint64_t arg, int prio, size_t stacksize, uint64_t flags, const char *threadname) PS3LIBC_INLINE;
extern int sys_ppu_thread_start(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;

// syscall nº 54 ?
// syscall nº 55 ?

extern int sys_ppu_thread_rename(sys_ppu_thread_t thread_id, const char *name) PS3LIBC_INLINE;
extern int sys_ppu_thread_recover_page_fault(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_ppu_thread_get_page_fault_context(sys_ppu_thread_t thread_id, sys_ppu_thread_icontext_t *ctxp) PS3LIBC_INLINE;


// sys_trace_*

extern int sys_trace_create() PS3LIBC_INLINE;
extern int sys_trace_start() PS3LIBC_INLINE;
extern int sys_trace_stop() PS3LIBC_INLINE;
extern int sys_trace_update_top_index() PS3LIBC_INLINE;
extern int sys_trace_destroy() PS3LIBC_INLINE;
extern int sys_trace_drain() PS3LIBC_INLINE;
extern int sys_trace_attach_process() PS3LIBC_INLINE;
extern int sys_trace_allocate_buffer() PS3LIBC_INLINE;
extern int sys_trace_free_buffer() PS3LIBC_INLINE;
extern int sys_trace_create2() PS3LIBC_INLINE;
extern int sys_trace_create2_in_cbepm() PS3LIBC_INLINE;
extern int sys_trace_() PS3LIBC_INLINE;


// sys_timer_*

extern int sys_timer_create(sys_timer_t *timer_id) PS3LIBC_INLINE;
extern int sys_timer_destroy(sys_timer_t timer_id) PS3LIBC_INLINE;
extern int sys_timer_get_information(sys_timer_t timer_id, sys_timer_information_t *info) PS3LIBC_INLINE;
extern int sys_timer_start(sys_timer_t timer_id, system_time_t base_time, usecond_t period) PS3LIBC_INLINE;
extern int sys_timer_stop(sys_timer_t timer_id) PS3LIBC_INLINE;
extern int sys_timer_connect_event_queue(sys_timer_t timer_id, sys_event_queue_t queue_id, uint64_t name, uint64_t data1, uint64_t data2) PS3LIBC_INLINE;
extern int sys_timer_disconnect_event_queue(sys_timer_t timer_id) PS3LIBC_INLINE;
extern int sys_timer_usleep(usecond_t sleep_time) PS3LIBC_INLINE;
extern int sys_timer_sleep(second_t sleep_time) PS3LIBC_INLINE;

// sys_interrupt_*

extern int sys_interrupt_tag_create(sys_interrupt_tag_t *intrtag, sys_irqoutlet_id_t irq, sys_hw_thread_t hwthread) PS3LIBC_INLINE;
extern int sys_interrupt_tag_destroy(sys_interrupt_tag_t intrtag) PS3LIBC_INLINE;
extern int sys_interrupt_thread_establish(sys_interrupt_thread_handle_t *ih, sys_interrupt_tag_t intrtag, uint64_t intrthread, uint64_t arg1, uint64_t arg2) PS3LIBC_INLINE;
extern void sys_interrupt_thread_eoi() PS3LIBC_INLINE;
extern int sys_interrupt_thread_disestablish(sys_interrupt_thread_handle_t ih, uint64_t *tsl_mem) PS3LIBC_INLINE;


// sys_event_*

extern int sys_event_flag_create(sys_event_flag_t *id, sys_event_flag_attribute_t *attr, uint64_t init) PS3LIBC_INLINE;
extern int sys_event_flag_destroy(sys_event_flag_t id) PS3LIBC_INLINE;
extern int sys_event_flag_wait(sys_event_flag_t id, uint64_t bitptn, uint32_t mode, uint64_t *result, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_event_flag_trywait(sys_event_flag_t id, uint64_t bitptn, uint32_t mode, uint64_t *result) PS3LIBC_INLINE;
extern int sys_event_flag_set(sys_event_flag_t id, uint64_t bitptn) PS3LIBC_INLINE;
extern int sys_event_flag_clear(sys_event_flag_t id, uint64_t bitptn) PS3LIBC_INLINE;
extern int sys_event_flag_cancel(sys_event_flag_t id, int *num) PS3LIBC_INLINE;
extern int sys_event_flag_get(sys_event_flag_t id, uint64_t *bitptn) PS3LIBC_INLINE;

// sys_semaphore_*

extern int sys_semaphore_create(sys_semaphore_t *sem, sys_semaphore_attribute_t *attr, sys_semaphore_value_t initial_val, sys_semaphore_value_t max_val) PS3LIBC_INLINE;
extern int sys_semaphore_destroy(sys_semaphore_t sem) PS3LIBC_INLINE;
extern int sys_semaphore_wait(sys_semaphore_t sem, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_semaphore_trywait(sys_semaphore_t sem) PS3LIBC_INLINE;
extern int sys_semaphore_post(sys_semaphore_t sem, sys_semaphore_value_t val) PS3LIBC_INLINE;

// sys_lwmutex_*
extern int sys_lwmutex_create(sys_lwmutex_pseudo_id_t *lwmutex, sys_protocol_t protocol, sys_lwmutex_t *control, int has_name, uint64_t name) PS3LIBC_INLINE;
extern int sys_lwmutex_destroy(sys_lwmutex_pseudo_id_t lwmutex) PS3LIBC_INLINE;
extern int sys_lwmutex_lock(sys_lwmutex_pseudo_id_t lwmutex, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_lwmutex_unlock(sys_lwmutex_pseudo_id_t lwmutex) PS3LIBC_INLINE;
extern int sys_lwmutex_trylock(sys_lwmutex_pseudo_id_t lwmutex) PS3LIBC_INLINE;

extern int sys_mutex_create(sys_mutex_t *mutex_id, sys_mutex_attribute_t *attr) PS3LIBC_INLINE;
extern int sys_mutex_destroy(sys_mutex_t mutex_id) PS3LIBC_INLINE;
extern int sys_mutex_lock(sys_mutex_t mutex_id, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_mutex_trylock(sys_mutex_t mutex_id) PS3LIBC_INLINE;
extern int sys_mutex_unlock(sys_mutex_t mutex_id) PS3LIBC_INLINE;

extern int sys_cond_create(sys_cond_t *cond_id, sys_mutex_t mutex_id, sys_cond_attribute_t *attr) PS3LIBC_INLINE;
extern int sys_cond_destroy(sys_cond_t cond_id) PS3LIBC_INLINE;
extern int sys_cond_wait(sys_cond_t cond_id, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_cond_signal(sys_cond_t cond_id) PS3LIBC_INLINE;
extern int sys_cond_signal_all(sys_cond_t cond_id) PS3LIBC_INLINE;
extern int sys_cond_signal_to(sys_cond_t cond_id, sys_ppu_thread_t thread) PS3LIBC_INLINE;

extern int sys_lwcond_create(sys_lwcond_pseudo_id_t *lwcond, sys_lwmutex_pseudo_id_t lwmutex, sys_lwcond_t *control, uint64_t name) PS3LIBC_INLINE;
extern int sys_lwcond_destroy(sys_lwcond_pseudo_id_t lwcond) PS3LIBC_INLINE;
extern int sys_lwcond_queue_wait(sys_lwcond_pseudo_id_t lwcond, sys_lwmutex_pseudo_id_t lwmutex, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_lwcond_signal(sys_lwcond_pseudo_id_t lwcond, sys_lwmutex_pseudo_id_t lwmutex, sys_ppu_thread_t ppu_thread_id, uint32_t mode) PS3LIBC_INLINE;
extern int sys_lwcond_signal_all(sys_lwcond_pseudo_id_t lwcond, sys_lwmutex_pseudo_id_t lwmutex, uint32_t mode) PS3LIBC_INLINE;

extern int sys_semaphore_get_value(sys_semaphore_t sem, sys_semaphore_value_t *val)PS3LIBC_INLINE;


extern int sys_rwlock_create(sys_rwlock_t * rw_lock_id, sys_rwlock_attribute_t *attr) PS3LIBC_INLINE;
extern int sys_rwlock_destroy(sys_rwlock_t rw_lock_id) PS3LIBC_INLINE;
extern int sys_rwlock_rlock(sys_rwlock_t rw_lock_id, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_rwlock_tryrlock(sys_rwlock_t rw_lock_id) PS3LIBC_INLINE;
extern int sys_rwlock_runlock(sys_rwlock_t rw_lock_id) PS3LIBC_INLINE;
extern int sys_rwlock_wlock(sys_rwlock_t rw_lock_id, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_rwlock_trywlock(sys_rwlock_t rw_lock_id) PS3LIBC_INLINE;
extern int sys_rwlock_wunlock(sys_rwlock_t rw_lock_id) PS3LIBC_INLINE;

extern int sys_event_queue_create(sys_event_queue_t * equeue_id, sys_event_queue_attribute_t * attr, sys_ipc_key_t event_queue_key, int size) PS3LIBC_INLINE;
extern int sys_event_queue_destroy(sys_event_queue_t equeue_id, int mode) PS3LIBC_INLINE;
extern int sys_event_queue_receive(sys_event_queue_t equeue_id, sys_event_t *event, usecond_t timeout) PS3LIBC_INLINE;
extern int sys_event_queue_tryreceive(sys_event_queue_t equeue_id, sys_event_t *event_array, int size, int *number) PS3LIBC_INLINE;
extern int sys_event_queue_drain(sys_event_queue_t equeue_id) PS3LIBC_INLINE;
extern int sys_event_port_create(sys_event_port_t *eport_id, int port_type, uint64_t name) PS3LIBC_INLINE;
extern int sys_event_port_destroy(sys_event_port_t eport_id) PS3LIBC_INLINE;
extern int sys_event_port_connect_local(sys_event_port_t event_port_id, sys_event_queue_t event_queue_id) PS3LIBC_INLINE;
extern int sys_event_port_disconnect(sys_event_port_t event_port_id) PS3LIBC_INLINE;
extern int sys_event_port_send(sys_event_port_t eport_id, uint64_t data1, uint64_t data2, uint64_t data3) PS3LIBC_INLINE;
extern int sys_event_port_connect_ipc(sys_event_port_t eport_id, sys_ipc_key_t event_queue_key) PS3LIBC_INLINE;


extern int sys_time_set_timezone(int timezone, int summertime) PS3LIBC_INLINE;
extern int sys_time_get_timezone(int *timezone, int *summertime) PS3LIBC_INLINE;
extern int sys_time_get_current_time(sys_time_sec_t *sec, sys_time_nsec_t *nsec) PS3LIBC_INLINE;
extern int sys_time_set_current_time(uint64_t sec, uint64_t nsec) PS3LIBC_INLINE;
extern uint64_t sys_time_get_timebase_frequency() PS3LIBC_INLINE;

extern int sys_rwlock_trywlock(sys_rwlock_t rw_lock_id) PS3LIBC_INLINE;

extern int sys_raw_spu_create_interrupt_tag(sys_raw_spu_t id, sys_class_id_t class_id, sys_hw_thread_t hwthread, sys_interrupt_tag_t *intrtag) PS3LIBC_INLINE;
extern int sys_raw_spu_set_int_mask(sys_raw_spu_t id, sys_class_id_t class_id, uint64_t mask) PS3LIBC_INLINE;
extern int sys_raw_spu_get_int_mask(sys_raw_spu_t id, sys_class_id_t class_id, uint64_t *mask) PS3LIBC_INLINE;
extern int sys_raw_spu_set_int_stat(sys_raw_spu_t id, sys_class_id_t class_id, uint64_t stat) PS3LIBC_INLINE;
extern int sys_raw_spu_get_int_stat(sys_raw_spu_t id, sys_class_id_t class_id, uint64_t *stat) PS3LIBC_INLINE;
extern int sys_spu_image_get_information(sys_spu_image_t *img, int *entry_point, int *nsegs) PS3LIBC_INLINE;
extern int sys_spu_image_open(sys_spu_image_t *img, const char *path) PS3LIBC_INLINE;
extern int sys_spu_image_import(sys_spu_image_t *img, const void *src, uint32_t type) PS3LIBC_INLINE;
extern int sys_spu_image_close(sys_spu_image_t *img)PS3LIBC_INLINE;
extern int sys_raw_spu_create(sys_raw_spu_t *id, sys_raw_spu_attribute_t *attr) PS3LIBC_INLINE;
extern int sys_raw_spu_destroy(sys_raw_spu_t id) PS3LIBC_INLINE;
extern int sys_raw_spu_read_puint_mb(sys_raw_spu_t id, uint32_t *value) PS3LIBC_INLINE;
extern int sys_spu_thread_get_exit_status(sys_spu_thread_t thread_id, int *status) PS3LIBC_INLINE;
extern int sys_spu_thread_set_argument(sys_spu_thread_t thread_id, sys_spu_thread_argument_t *arg) PS3LIBC_INLINE;

extern int sys_spu_initialize(uint32_t max_usable_spu, uint32_t max_raw_spu) PS3LIBC_INLINE;
extern int sys_spu_thread_group_create(sys_spu_thread_group_t *id, uint32_t num, int prio, sys_spu_thread_group_attribute_t *attr) PS3LIBC_INLINE;
extern int sys_spu_thread_group_destroy(sys_spu_thread_group_t id) PS3LIBC_INLINE;
extern int sys_spu_thread_initialize(sys_spu_thread_t *thread, sys_spu_thread_group_t group, uint32_t spu_num, sys_spu_image_t *img, sys_spu_thread_attribute_t *attr, sys_spu_thread_argument_t *arg) PS3LIBC_INLINE;
extern int sys_spu_thread_group_start(sys_spu_thread_group_t id) PS3LIBC_INLINE;
extern int sys_spu_thread_group_suspend(sys_spu_thread_group_t id) PS3LIBC_INLINE;
extern int sys_spu_thread_group_resume(sys_spu_thread_group_t id) PS3LIBC_INLINE;
extern int sys_spu_thread_group_yield(sys_spu_thread_group_t id) PS3LIBC_INLINE;
extern int sys_spu_thread_group_terminate(sys_spu_thread_group_t id, int value) PS3LIBC_INLINE;
extern int sys_spu_thread_group_join(sys_spu_thread_group_t gid, int *cause, int *status) PS3LIBC_INLINE;
extern int sys_spu_thread_group_set_priority(sys_spu_thread_group_t id, int priority) PS3LIBC_INLINE;
extern int sys_spu_thread_group_get_priority(sys_spu_thread_group_t id, int *priority) PS3LIBC_INLINE;
extern int sys_spu_thread_write_ls(sys_spu_thread_t thread_id, uint32_t address, uint64_t value, size_t type) PS3LIBC_INLINE;
extern int sys_spu_thread_read_ls(sys_spu_thread_t thread_id, uint32_t address, uint64_t *value, size_t type) PS3LIBC_INLINE;

extern int sys_spu_thread_write_snr(sys_spu_thread_t thread_id, int number, uint32_t value) PS3LIBC_INLINE;
extern int sys_spu_thread_group_connect_event(sys_spu_thread_group_t id, sys_event_queue_t eq, sys_event_type_t et) PS3LIBC_INLINE;
extern int sys_spu_thread_group_disconnect_event(sys_spu_thread_group_t id, sys_event_type_t et) PS3LIBC_INLINE;
extern int sys_spu_thread_set_spu_cfg(sys_spu_thread_t thread_id, uint64_t value) PS3LIBC_INLINE;
extern int sys_spu_thread_get_spu_cfg(sys_spu_thread_t thread_id, uint64_t *value) PS3LIBC_INLINE;

extern int sys_spu_thread_write_spu_mb(sys_spu_thread_t thread_id, uint32_t value) PS3LIBC_INLINE;
extern int sys_spu_thread_connect_event(sys_spu_thread_t thread_id, sys_event_queue_t eq, sys_event_type_t et, uint8_t spup) PS3LIBC_INLINE;
extern int sys_spu_thread_disconnect_event(sys_spu_thread_t thread_id, sys_event_type_t et, uint8_t spup) PS3LIBC_INLINE;
extern int sys_spu_thread_bind_queue(sys_spu_thread_t thread_id,sys_event_queue_t spuq,uint32_t spuq_num) PS3LIBC_INLINE;
extern int sys_spu_thread_unbind_queue(sys_spu_thread_t thread_id, uint32_t spuq_num) PS3LIBC_INLINE;
extern int sys_raw_spu_set_spu_cfg(sys_raw_spu_t id, uint32_t value) PS3LIBC_INLINE;
extern int sys_raw_spu_get_spu_cfg(sys_raw_spu_t id, uint32_t *value) PS3LIBC_INLINE;
extern int sys_spu_thread_recover_page_fault(sys_spu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_raw_spu_recover_page_fault(sys_raw_spu_t id) PS3LIBC_INLINE;

extern int sys_isolated_spu_destroy(sys_raw_spu_t id) PS3LIBC_INLINE;
extern int sys_isolated_spu_start(sys_raw_spu_t id) PS3LIBC_INLINE;
extern int sys_isolated_spu_create_interrupt_tag(sys_raw_spu_t id, uint32_t class_id, uint32_t hwthread, sys_interrupt_tag_t *intrtag) PS3LIBC_INLINE;
extern int sys_isolated_spu_set_int_mask(sys_raw_spu_t id, uint32_t class_id, uint64_t mask) PS3LIBC_INLINE;
extern int sys_isolated_spu_get_int_mask(sys_raw_spu_t id, uint32_t class_id, uint64_t *mask) PS3LIBC_INLINE;
extern int sys_isolated_spu_set_int_stat(sys_raw_spu_t id, uint32_t class_id, uint64_t stat) PS3LIBC_INLINE;
extern int sys_isolated_spu_get_int_stat(sys_raw_spu_t id, uint32_t class_id, uint64_t *stat) PS3LIBC_INLINE;
extern int sys_isolated_spu_set_spu_cfg(sys_spu_thread_t thread_id, uint64_t value) PS3LIBC_INLINE;
extern int sys_isolated_spu_get_spu_cfg(sys_spu_thread_t thread_id, uint64_t *value) PS3LIBC_INLINE;
extern int sys_isolated_spu_read_puint_mb(sys_raw_spu_t id, uint32_t * value) PS3LIBC_INLINE;
extern int sys_spu_thread_group_system_set_next_group() PS3LIBC_INLINE;
extern int sys_spu_thread_group_system_unset_next_group() PS3LIBC_INLINE;
extern int sys_spu_thread_group_system_set_switch_group() PS3LIBC_INLINE;
extern int sys_spu_thread_group_system_unset_switch_group() PS3LIBC_INLINE;
extern int sys_spu_thread_group_connect_event_all_threads(sys_spu_thread_group_t id, sys_event_queue_t eq, uint64_t req, uint8_t *spup) PS3LIBC_INLINE;
extern int sys_spu_thread_group_disconnect_event_all_threads(sys_spu_thread_group_t id, uint8_t spup) PS3LIBC_INLINE;
extern int sys_spu_thread_group_log(int command, int *stat) PS3LIBC_INLINE;
extern int sys_spu_image_open_by_fd(sys_spu_image_t *img, int fd, off64_t offset) PS3LIBC_INLINE;

extern int sys_vm_memory_map(size_t vsize, size_t psize, sys_memory_container_t container, uint64_t flag, uint64_t policy, sys_addr_t *addr) PS3LIBC_INLINE;
extern int sys_vm_unmap(sys_addr_t addr) PS3LIBC_INLINE;
extern int sys_vm_append_memory(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_return_memory(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_lock(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_unlock(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_touch(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_flush(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_invalidate(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_store(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_sync(sys_addr_t addr, size_t size) PS3LIBC_INLINE;
extern int sys_vm_test(sys_addr_t addr, size_t size, uint64_t *result) PS3LIBC_INLINE;
extern int sys_vm_get_statistics(sys_addr_t addr, sys_vm_statistics_t *stat) PS3LIBC_INLINE;

extern int sys_memory_container_create(sys_memory_container_t *cid, size_t yield_size) PS3LIBC_INLINE;
extern int sys_memory_container_destroy(sys_memory_container_t cid) PS3LIBC_INLINE;
extern int sys_mmapper_allocate_fixed_address() PS3LIBC_INLINE;
extern int sys_mmapper_enable_page_fault_notification(sys_addr_t start_addr, sys_event_queue_t queue_id) PS3LIBC_INLINE;
extern int sys_mmapper_allocate_shared_memory_from_container_ext(uint64_t shmem_key, uint32_t size, uint64_t pageSizeFlags, sys_memory_container_t memory_container_id, void *entries, uint32_t entry_count, sys_memory_t *mem_id) PS3LIBC_INLINE;
extern int sys_mmapper_free_shared_memory(sys_addr_t start_addr) PS3LIBC_INLINE;
extern int sys_mmapper_allocate_address(size_t size, uint64_t flags, size_t alignment, sys_addr_t *alloc_addr) PS3LIBC_INLINE;
extern int sys_mmapper_free_address(sys_addr_t start_addr) PS3LIBC_INLINE;
extern int sys_mmapper_allocate_shared_memory(uint64_t shmem_key, size_t size, size_t alignment, sys_memory_t *mem_id) PS3LIBC_INLINE;
extern int sys_mmapper_map_shared_memory(sys_addr_t start_addr, sys_memory_t mem_id, uint64_t flags) PS3LIBC_INLINE;
extern int sys_mmapper_unmap_shared_memory(sys_addr_t start_addr, sys_memory_t *mem_id) PS3LIBC_INLINE;
extern int sys_mmapper_change_address_access_right(sys_addr_t start_addr, uint64_t flags) PS3LIBC_INLINE;
extern int sys_mmapper_search_and_map(sys_addr_t start_addr, sys_memory_t mem_id, uint64_t flags, sys_addr_t *alloc_addr) PS3LIBC_INLINE;
extern int sys_mmapper_allocate_shared_memory_ext(uint64_t shmem_key, uint32_t size, uint64_t pageSizeFlags, void *entries, uint32_t entry_count, sys_memory_t *mem_id) PS3LIBC_INLINE;

extern int sys_memory_container_create(sys_memory_container_t *cid, size_t yield_size) PS3LIBC_INLINE;
extern int sys_memory_container_destroy(sys_memory_container_t cid) PS3LIBC_INLINE;
extern int sys_memory_container_get_size(sys_memory_info_t *mem_info, sys_memory_container_t cid) PS3LIBC_INLINE;

extern int sys_memory_allocate(size_t size, uint64_t flags, sys_addr_t *alloc_addr) PS3LIBC_INLINE;
extern int sys_memory_free(sys_addr_t start_addr) PS3LIBC_INLINE;
extern int sys_memory_allocate_from_container(size_t size, sys_memory_container_t container, uint64_t flags, sys_addr_t *alloc_addr) PS3LIBC_INLINE;
extern int sys_memory_get_page_attribute(sys_addr_t addr, sys_page_attr_t *attr) PS3LIBC_INLINE;
extern int sys_memory_get_user_memory_size(sys_memory_info_t *mem_info) PS3LIBC_INLINE;

extern sys_mmapper_allocate_memory_from_container(size_t size, sys_memory_container_t container, uint64_t flags, sys_memory_t *mem_id) PS3LIBC_INLINE;

extern sys_uart_send(const void *buf, uint64_t size, uint64_t flags) PS3LIBC_INLINE;

extern int sys_game_watchdog_stop() PS3LIBC_INLINE;
extern int sys_game_watchdog_clear() PS3LIBC_INLINE;
extern int sys_game_set_system_sw_version(uint64_t version) PS3LIBC_INLINE;
extern int sys_game_get_system_sw_version() PS3LIBC_INLINE;

extern int sys_tty_read(uint32_t ch, void *buf, uint32_t len, uint32_t *preadlen) PS3LIBC_INLINE;
extern int sys_tty_write(uint32_t ch, const void *buf, uint32_t len, uint32_t *pwritelen) PS3LIBC_INLINE;

extern int sys_overlay_load_module(sys_overlay_t *ovlmid, const char *path, uint64_t flags, sys_addr_t *entry) PS3LIBC_INLINE;
extern int sys_overlay_unload_module(sys_overlay_t ovlmid) PS3LIBC_INLINE;
extern int sys_overlay_get_module_list(sys_pid_t process_id, size_t ovlmids_num, sys_overlay_t *ovlmids, size_t *num_of_modules) PS3LIBC_INLINE;
extern int sys_overlay_get_module_info(sys_pid_t process_id, sys_overlay_t ovlmid, sys_overlay_module_info_t *info) PS3LIBC_INLINE;
extern int sys_overlay_load_module_by_fd(sys_overlay_t *ovlmid, int fd, off64_t offset, uint64_t flags, sys_addr_t *entry) PS3LIBC_INLINE;
extern int sys_overlay_get_module_info2(sys_pid_t process_id, sys_overlay_t ovlmid, sys_overlay_module_info2_t *info) PS3LIBC_INLINE;
extern int sys_overlay_get_sdk_version(sys_overlay_t ovlmid, uint32_t *sdk_ver) PS3LIBC_INLINE;

extern sys_prx_dbg_get_module_id_list(sys_pid_t process_id, sys_prx_dbg_get_module_list_t *pInfo) PS3LIBC_INLINE;
extern sys_prx_id_t sys_prx_get_module_id_by_address(void *addr) PS3LIBC_INLINE;
extern sys_prx_id_t sys_prx_load_module_by_fd(int fd, off64_t offset, sys_prx_flags_t flags, sys_prx_load_module_option_t pOpt) PS3LIBC_INLINE;
extern sys_prx_id_t sys_prx_load_module_on_memcontainer_by_fd(int fd, off64_t offset, sys_memory_container_t mem_container, sys_prx_flags_t flags, sys_prx_load_module_option_t pOpt) PS3LIBC_INLINE;
extern int sys_prx_load_module_list(int n, const char **path_list, uint64_t flags, sys_prx_load_module_list_option_t *pOpt, sys_prx_id_t *idlist) PS3LIBC_INLINE;
extern sys_addr_t sys_prx_get_ppu_guid(sys_prx_id_t id) PS3LIBC_INLINE;

extern sys_prx_id_t sys_prx_load_module(const char *path, sys_prx_flags_t flags, sys_prx_load_module_option_t *pOpt) PS3LIBC_INLINE;
extern int sys_prx_start_module(sys_prx_id_t id, sys_prx_flags_t flags, sys_prx_start_t *pOpt) PS3LIBC_INLINE;
extern int sys_prx_stop_module(sys_prx_id_t id, size_t args, void *argp, int *modres, sys_prx_flags_t flags, sys_prx_stop_module_option_t pOpt) PS3LIBC_INLINE;
extern int sys_prx_unload_module(sys_prx_id_t id, sys_prx_flags_t flags, sys_prx_unload_module_option_t pOpt) PS3LIBC_INLINE;
extern int sys_prx_register_module(char *name, const sys_prx_register_module_option_t *pOpt) PS3LIBC_INLINE;
extern int sys_prx_query_module() PS3LIBC_INLINE;
extern int sys_prx_register_library(void *library) PS3LIBC_INLINE;
extern int sys_prx_unregister_library(void *library) PS3LIBC_INLINE;
extern int sys_prx_link_library() PS3LIBC_INLINE;
extern int sys_prx_unlink_library() PS3LIBC_INLINE;
extern int sys_prx_query_library() PS3LIBC_INLINE;
extern int sys_prx_get_module_list(sys_prx_flags_t flags, sys_prx_get_module_list_t *pInfo) PS3LIBC_INLINE;
extern int sys_prx_get_module_info(sys_prx_id_t id, sys_prx_flags_t flags, sys_prx_module_info_t *pInfo) PS3LIBC_INLINE;
extern sys_prx_id_t sys_prx_get_module_id_by_name(const char *name, sys_prx_flags_t flags, sys_prx_get_module_id_by_name_option_t *pOpt) PS3LIBC_INLINE;
extern sys_prx_id_t sys_prx_load_module_on_memcontainer(const char *path, sys_memory_container_t mem_container, sys_prx_flags_t flags, sys_prx_load_module_option_t pOpt) PS3LIBC_INLINE;
extern int sys_prx_start() PS3LIBC_INLINE;
extern int sys_prx_stop() PS3LIBC_INLINE;

extern int sys_pad_ldd_unregister_controller(int32_t handle) PS3LIBC_INLINE;
extern int sys_pad_ldd_get_port_no(int32_t handle) PS3LIBC_INLINE;

extern bt_set_device_info() PS3LIBC_INLINE;

extern int sys_storage_open(uint64_t id, int mode, int *fd, int flags) PS3LIBC_INLINE;
extern int sys_storage_close(int fd) PS3LIBC_INLINE;
extern int sys_storage_read(int fd, int mode, uint32_t start_sector, uint32_t sectors, uint8_t *bounce_buf, uint32_t *sectors_read, uint64_t flags) PS3LIBC_INLINE;

extern int sys_storage_send_device_command(uint32_t device_handle, uint32_t command, void *indata, uint64_t inlen, void *outdata, uint64_t outlen) PS3LIBC_INLINE;
extern int sys_storage_async_configure(uint32_t fd, sys_io_buffer_t io_buffer, sys_event_queue_t equeue_id, int *unknown) PS3LIBC_INLINE;
extern int sys_storage_async_read(int fd, int unknown_1, uint32_t start_sector, uint32_t sectors, sys_io_block_t bounce_buf, uint64_t user_data, int unknown_2) PS3LIBC_INLINE;
extern int sys_storage_get_device_info(uint64_t device, uint8_t *buffer) PS3LIBC_INLINE;

extern int sys_storage_delete_region(uint32_t dev_id, uint64_t index) PS3LIBC_INLINE;
extern sys_storage_execute_device_command(uint32_t dev_handle, uint64_t cmd, const void *cmdbuf, uint64_t cmdbuf_size, void *databuf, uint64_t databuf_size, uint64_t *unknown) PS3LIBC_INLINE;
extern sys_storage_async_send_device_command(uint32_t dev_handle, uint64_t cmd, const void *cmdbuf, uint64_t cmdbuf_size, void *databuf, uint64_t databuf_size, uint64_t *unknown) PS3LIBC_INLINE;

extern int sys_io_buffer_create(int io_block_count, int block_size, int blocks, int unknown_3, sys_io_buffer_t *io_buffer) PS3LIBC_INLINE;
extern int sys_io_buffer_destroy(sys_io_buffer_t io_buffer) PS3LIBC_INLINE;
extern int sys_io_buffer_allocate(sys_io_buffer_t io_buffer, sys_io_block_t *block) PS3LIBC_INLINE;
extern int sys_io_buffer_free(sys_io_buffer_t io_buffer, sys_io_block_t block) PS3LIBC_INLINE;

extern int sys_gpio_set(uint64_t device_id, uint64_t mask, uint64_t value) PS3LIBC_INLINE;
extern int sys_gpio_get(uint64_t device_id, uint64_t *value) PS3LIBC_INLINE;

extern int sys_fsw_connect_event(sys_event_queue_t eq_id) PS3LIBC_INLINE;
extern int sys_fsw_disconnect_event() PS3LIBC_INLINE;

extern int sys_rsxaudio_initialize(uint32_t *out_handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_finalize(uint32_t handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_import_shared_memory(uint32_t handle, uint64_t *out_addr) PS3LIBC_INLINE;
extern int sys_rsxaudio_unimport_shared_memory(uint32_t handle, uint64_t *addr) PS3LIBC_INLINE;
extern int sys_rsxaudio_create_connection(uint32_t handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_close_connection(uint32_t handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_prepare_process(uint32_t handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_start_process(uint32_t handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_stop_process(uint32_t handle) PS3LIBC_INLINE;
extern int sys_rsxaudio_get_dma_param(uint32_t handle, uint32_t flag, uint64_t *param_out) PS3LIBC_INLINE;

extern int sys_net_bnet_accept(int s, struct sockaddr *addr, socklen_t *paddrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_bind(int s, const struct sockaddr *addr, socklen_t addrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_connect(int s, const struct sockaddr *addr, socklen_t addrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_getpeername(int s, struct sockaddr *addr, socklen_t *paddrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_getsockname(int s, struct sockaddr *addr, socklen_t *paddrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_getsockopt(int s, int level, int optname, void *optval, socklen_t *optlen) PS3LIBC_INLINE;
extern int sys_net_bnet_listen(int s, int backlog) PS3LIBC_INLINE;
extern int sys_net_bnet_recvfrom(int s, void *buf, size_t len, int flags, struct sockaddr *addr, socklen_t *paddrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_recvmsg(int s, struct msghdr *msg, int flags) PS3LIBC_INLINE;
extern int sys_net_bnet_sendmsg(int s, const struct msghdr *msg, int flags) PS3LIBC_INLINE;
extern int sys_net_bnet_sendto(int s, const void *buf, size_t len, int flags, const struct sockaddr *addr, socklen_t addrlen) PS3LIBC_INLINE;
extern int sys_net_bnet_setsockop(int s, int level, int optname, const void *optval, socklen_t optlen) PS3LIBC_INLINE;
extern int sys_net_bnet_shutdown(int s, int how) PS3LIBC_INLINE;
extern int sys_net_bnet_socket(int family, int type, int protocol) PS3LIBC_INLINE;
extern int sys_net_bnet_close(int fd) PS3LIBC_INLINE;
extern int sys_net_open_dump(int len, int flags) PS3LIBC_INLINE;
extern int sys_net_read_dump(int id, void *buf, int len, int *pflags) PS3LIBC_INLINE;
extern int sys_net_close_dump(int id, int *pflags) PS3LIBC_INLINE;
extern int sys_net_write_dump(char *buf) PS3LIBC_INLINE;
extern int sys_net_eurus_post_command(uint16_t cmd, uint8_t *cmdbuf, uint64_t cmdbuf_size) PS3LIBC_INLINE;

extern CellFsErrno sys_fs_open(const char *path, int flags, int *fd, uint64_t mode, const void *arg, uint64_t size) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_read(int fd, void *buf, uint64_t nbytes, uint64_t *nread) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_write(int fd, const void *buf, uint64_t nbytes, uint64_t *nwrite) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_close(int fd) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_opendir(const char *path, int *fd) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_readdir(int fd, CellFsDirent *dir, uint64_t *nread) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_closedir(int fd) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_stat(const char *path, CellFsStat *sb) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_fstat(int fd, CellFsStat *sb) PS3LIBC_INLINE;
extern int sys_fs_link(const char *path_from, const char *path_to) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_mkdir(const char *path, CellFsMode mode) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_rename(const char *from, const char *to) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_rmdir(const char *path) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_unlink(const char *path) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_utime(const char *path, const CellFsUtimbuf *timep) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_lseek(int fd, int64_t offset, int whence, uint64_t *pos) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_fsync(int fd) PS3LIBC_INLINE;
extern int sys_fs_fget_block_size(int fd, uint64_t *sector_size, uint64_t *block_size, uint64_t *arg4, int *out_flags) PS3LIBC_INLINE;
extern int sys_fs_get_block_size(const char *path, uint64_t *block_size, uint64_t *arg4) PS3LIBC_INLINE;
extern int sys_fs_lsn_lock(int fd) PS3LIBC_INLINE;
extern int sys_fs_lsn_unlock(int fd) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_truncate(const char *path, uint64_t size) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_ftruncate(int fd, uint64_t size) PS3LIBC_INLINE;
extern int sys_fs_symbolic_link(const char *target_path, const char *link_path) PS3LIBC_INLINE;
extern CellFsErrno sys_fs_chmod(const char *path, CellFsMode mode) PS3LIBC_INLINE;
extern int sys_fs_chown(const char *path, int uid, int gid) PS3LIBC_INLINE;
extern int sys_fs_sync(const char *dir) PS3LIBC_INLINE;
extern int sys_fs_disk_free(const char *path, uint64_t *total_free, uint64_t *avail_free) PS3LIBC_INLINE;
extern int sys_fs_get_mount_info_size(uint64_t *out_length) PS3LIBC_INLINE;
extern int sys_fs_get_mount_info(CellFsMountInformation *info, uint64_t buffer_length, uint64_t *written_length) PS3LIBC_INLINE;
extern int sys_fs_ftruncate2(int fd, uint64_t size) PS3LIBC_INLINE;

extern int sys_ss_get_console_id(uint8_t *buf) PS3LIBC_INLINE;
extern int sys_ss_get_open_psid(CellSsOpenPSID *ptr) PS3LIBC_INLINE;
extern int sys_ss_get_cache_of_product_mode(uint8_t *ptr[1]) PS3LIBC_INLINE;
extern int sys_ss_get_cache_of_flash_ext_flag(uint8_t *flag[1]) PS3LIBC_INLINE;
extern int sys_ss_get_boot_device(uint8_t *buf[8]) PS3LIBC_INLINE;

extern int sys_deci3_open(sys_deci3_protocol_t protocol, sys_deci3_port_t port, void *option, sys_deci3_session_t *session_id) PS3LIBC_INLINE;
extern int sys_deci3_create_event_path(sys_deci3_session_t session_id, size_t bufsize, sys_event_queue_t event_queue_id) PS3LIBC_INLINE;
extern int sys_deci3_close(sys_deci3_session_t session_id) PS3LIBC_INLINE;
extern int sys_deci3_send(sys_deci3_session_t session_id, uint8_t *buf, size_t size) PS3LIBC_INLINE;
extern int sys_deci3_receive(sys_deci3_session_t session_id, uint8_t *buf, size_t size) PS3LIBC_INLINE;

extern int sys_dbg_read_process_memory(sys_pid_t process_id, uint64_t process_ea, uint32_t size, void *data) PS3LIBC_INLINE;
extern int sys_dbg_write_process_memory(sys_pid_t process_id, uint64_t process_ea, uint32_t size, const void *data) PS3LIBC_INLINE;
extern int sys_dbg_get_process_list(sys_pid_t *process_ids, uint64_t *max, uint64_t *count) PS3LIBC_INLINE;
extern int sys_dbg_get_thread_list(sys_pid_t process_id, sys_ppu_thread_t *ids, uint64_t *ids_num, uint64_t *all_ids_num) PS3LIBC_INLINE;
extern int sys_dbg_kill_process(sys_pid_t process_id) PS3LIBC_INLINE;
extern int sys_dbg_get_process_info(sys_pid_t process_id, sys_process_info_t *info) PS3LIBC_INLINE;
extern int sys_dbg_get_mutex_information(sys_pid_t process_id, sys_mutex_t id, sys_dbg_mutex_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_get_cond_information(sys_pid_t process_id, sys_cond_t id, sys_dbg_cond_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_get_rwlock_information(sys_pid_t process_id,  sys_rwlock_t id, sys_dbg_rwlock_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_get_address_from_dabr(sys_pid_t process_id, uint64_t *addr, uint64_t *ctrl_flag) PS3LIBC_INLINE;
extern int sys_dbg_set_address_to_dabr(sys_pid_t process_id, uint64_t addr, uint64_t ctrl_flag) PS3LIBC_INLINE;
extern int sys_dbg_get_lwmutex_information(sys_pid_t process_id, sys_lwmutex_pseudo_id_t id, sys_dbg_lwmutex_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_get_event_queue_information(sys_pid_t process_id, sys_event_queue_t id, sys_dbg_event_queue_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_initialize_ppu_exception_handler(sys_event_queue_t *equeue_id) PS3LIBC_INLINE;
extern int sys_dbg_finalize_ppu_exception_handler(sys_event_queue_t equeue_id) PS3LIBC_INLINE;
extern int sys_dbg_get_semaphore_information(sys_pid_t process_id, sys_semaphore_t id, sys_dbg_semaphore_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_get_lwcond_information(sys_pid_t process_id, sys_lwcond_pseudo_id_t id, sys_dbg_lwcond_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_vm_get_page_information(sys_pid_t process_id, sys_addr_t addr, uint32_t num, sys_vm_page_information_t *pageinfo) PS3LIBC_INLINE;
extern int sys_dbg_enable_floating_point_enabled_exception(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_dbg_disable_floating_point_enabled_exception(sys_ppu_thread_t thread_id) PS3LIBC_INLINE;
extern int sys_dbg_get_event_flag_information(sys_pid_t process_id, sys_event_flag_t id, sys_dbg_event_flag_information_t *info) PS3LIBC_INLINE;
extern int sys_dbg_read_spu_thread_context2(sys_spu_thread_t thread_id, sys_dbg_spu_thread_context2_t *spu_context) PS3LIBC_INLINE;

extern int sys_crypto_engine_create(sys_pid_t *process_id)PS3LIBC_INLINE;
extern int sys_crypto_engine_destroy(sys_pid_t process_id)PS3LIBC_INLINE;
extern int sys_crypto_engine_hasher_prepare(sys_pid_t process_id, int32_t hash_key_index) PS3LIBC_INLINE;
extern int sys_crypto_engine_hasher_run(sys_pid_t process_id, const void *data, uint32_t data_size) PS3LIBC_INLINE;
extern int sys_crypto_engine_hasher_get_hash(sys_pid_t process_id, void *buffer, uint32_t max_buffer_size) PS3LIBC_INLINE;
extern int sys_crypto_engine_cipher_prepare(sys_pid_t process_id, int32_t hash_key_index, int32_t mode, int32_t cipher_key_index, const void *iv, uint32_t iv_size) PS3LIBC_INLINE;
extern int sys_crypto_engine_cipher_run(sys_pid_t process_id, const void *input, void *output, uint32_t data_size) PS3LIBC_INLINE;
extern int sys_crypto_engine_cipher_get_hash(sys_pid_t process_id, void *buffer, uint32_t max_buffer_size) PS3LIBC_INLINE;
extern int sys_crypto_engine_random_generate(void *buffer, uint32_t max_buffer_size) PS3LIBC_INLINE;

#endif // SYSCALLS_H