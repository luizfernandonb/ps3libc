#include <ps3/syscalls.h>
#include <ps3/defines.h>

static int call_syscall_0(int id)
{
	register uint64_t p1 asm("3");
	register uint64_t p2 asm("4");
	register uint64_t p3 asm("5");
	register uint64_t p4 asm("6");
	register uint64_t p5 asm("7");
	register uint64_t p6 asm("8");
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_1(int id, uint64_t arg1)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4");
	register uint64_t p3 asm("5");
	register uint64_t p4 asm("6");
	register uint64_t p5 asm("7");
	register uint64_t p6 asm("8");
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_2(int id, uint64_t arg1, uint64_t arg2)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5");
	register uint64_t p4 asm("6");
	register uint64_t p5 asm("7");
	register uint64_t p6 asm("8");
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_3(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5") = arg3;
	register uint64_t p4 asm("6");
	register uint64_t p5 asm("7");
	register uint64_t p6 asm("8");
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(p3), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_4(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5") = arg3;
	register uint64_t p4 asm("6") = arg4;
	register uint64_t p5 asm("7");
	register uint64_t p6 asm("8");
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(p3), "r"(p4),
				  	"r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_5(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5") = arg3;
	register uint64_t p4 asm("6") = arg4;
	register uint64_t p5 asm("7") = arg5;
	register uint64_t p6 asm("8");
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(p3), "r"(p4),
				  	"r"(p5), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_6(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5") = arg3;
	register uint64_t p4 asm("6") = arg4;
	register uint64_t p5 asm("7") = arg5;
	register uint64_t p6 asm("8") = arg6;
	register uint64_t p7 asm("9");
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(p3), "r"(p4),
				  	"r"(p5), "r"(p6), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_7(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5") = arg3;
	register uint64_t p4 asm("6") = arg4;
	register uint64_t p5 asm("7") = arg5;
	register uint64_t p6 asm("8") = arg6;
	register uint64_t p7 asm("9") = arg7;
	register uint64_t p8 asm("10");
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(p3), "r"(p4),
				  	"r"(p5), "r"(p6), "r"(p7), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}

static int call_syscall_8(int id, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8)
{
	register uint64_t p1 asm("3") = arg1;
	register uint64_t p2 asm("4") = arg2;
	register uint64_t p3 asm("5") = arg3;
	register uint64_t p4 asm("6") = arg4;
	register uint64_t p5 asm("7") = arg5;
	register uint64_t p6 asm("8") = arg6;
	register uint64_t p7 asm("9") = arg7;
	register uint64_t p8 asm("10") = arg8;
	register uint64_t syscall_id asm("11") = id;

	asm volatile ("sc"
				  : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),
				  	"=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(syscall_id)
				  : "r"(p1), "r"(p2), "r"(p3), "r"(p4),
				  	"r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(syscall_id)
				  : "0", "12", "lr", "ctr", "xer", "cr0", "cr1", "cr5", "cr6", "cr7", "memory");

	return p1;
}


extern sys_pid_t sys_process_getpid()
{
	return call_syscall_0(SYSCALL_PROCESS_GETPID);
}

extern int sys_process_wait_for_child(sys_pid_t process_id, uint32_t *status, int unk)
{
	return call_syscall_3(SYSCALL_PROCESS_WAIT_FOR_CHILD, process_id, status, unk);
}

extern void sys_process_exit(int status)
{
	return call_syscall_1(SYSCALL_PROCESS_EXIT, status);
}

extern int sys_process_get_status(sys_pid_t process_id)
{
	return call_syscall_1(SYSCALL_PROCESS_GET_STATUS, process_id);
}

extern int sys_process_detach_child(sys_pid_t process_id)
{
	return call_syscall_1(SYSCALL_PROCESS_DETACH_CHILD, process_id);
}

extern int sys_process_get_number_of_object(uint32_t object, size_t *nump)
{
	return call_syscall_2(SYSCALL_PROCESS_GET_NUMBER_OF_OBJECT, object, nump);
}

extern int sys_process_get_id(uint32_t object, uint32_t *buff, size_t size, size_t *set_size)
{
	return call_syscall_4(SYSCALL_PROCESS_GET_ID, object, buff, size, set_size);
}

extern int sys_process_get_id2(uint32_t object, uint32_t *buff, size_t size, size_t *set_size)
{
	// TODO: root check

	return call_syscall_4(SYSCALL_PROCESS_GET_ID, object, buff, size, set_size);
}

extern int sys_process_is_spu_lock_line_reservation_address(sys_addr_t addr, uint64_t flags)
{
	return call_syscall_2(SYSCALL_PROCESS_IS_SPU_LOCK_LINE_RESERVATION_ADDRESS, addr, flags);
}

extern sys_pid_t sys_process_getppid()
{
	return call_syscall_0(SYSCALL_PROCESS_GETPPID);
}

extern int sys_process_kill(sys_pid_t process_id)
{
	return call_syscall_1(SYSCALL_PROCESS_KILL, process_id);
}

extern int sys_process_get_paramsfo(uint8_t *buffer[0x40])
{
	// TODO:

	/*
	RPCS3 code:
	if (!Emu.GetTitleID().length())
	{
		return CELL_ENOENT;
	}

	memset(buffer.get_ptr(), 0, 0x40);
	memcpy(buffer.get_ptr() + 1, Emu.GetTitleID().c_str(), std::min<usz>(Emu.GetTitleID().length(), 9));
	*/

	return call_syscall_1(SYSCALL_PROCESS_GET_PARAMSFO, buffer);
}

extern int sys_process_get_sdk_version(sys_pid_t process_id, uint32_t* sdk_version)
{
	// return 475; ?????
	return call_syscall_2(SYSCALL_PROCESS_GET_SDK_VERSION, process_id, sdk_version);
}

extern sys_addr_t sys_process_get_ppu_guid()
{
	return call_syscall_0(SYSCALL_PROCESS_GET_PPU_GUID);
}


extern int sys_ppu_thread_exit(uint64_t status)
{
	// TODO:
	/*
		call atexit
		mutex unlock?
	 */
	return call_syscall_1(SYSCALL_PPU_THREAD_EXIT, status);
}

extern int sys_ppu_thread_get_id(sys_ppu_thread_t *thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_GET_ID, thread_id);
}

extern void sys_ppu_thread_yield()
{
	call_syscall_0(SYSCALL_PPU_THREAD_YIELD);
}

extern int sys_ppu_thread_detach(sys_ppu_thread_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_DETACH, thread_id);
}

extern void sys_ppu_thread_get_join_state(uint32_t *isjoinable)
{
	call_syscall_1(SYSCALL_PPU_THREAD_GET_JOIN_STATE, isjoinable);
}

extern int sys_ppu_thread_set_priority(sys_ppu_thread_t thread_id, int prio)
{
	return call_syscall_2(SYSCALL_PPU_THREAD_SET_PRIORITY, thread_id, prio);
}

extern int sys_ppu_thread_get_stack_information(sys_ppu_thread_stack_t *sp)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_GET_STACK_INFORMATION, (uint32_t)sp);
}

extern int sys_ppu_thread_stop(sys_ppu_thread_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_STOP, thread_id);
}

extern int sys_ppu_thread_restart()
{
	return call_syscall_0(SYSCALL_PPU_THREAD_RESTART);
}

extern int sys_ppu_thread_create(sys_ppu_thread_t *thread_id, void(*entry)(uint64_t), uint64_t arg, int prio, size_t stacksize, uint64_t flags, const char *threadname)
{
	// https://github.com/RPCS3/rpcs3/blob/73dba6d6e0a10147d821231869ee33b59eac8aa8/rpcs3/Emu/Cell/Modules/sys_ppu_thread_.cpp#L126
	return CELL_OK;
}

extern int sys_ppu_thread_start(sys_ppu_thread_t thread_id)
{
	// https://github.com/RPCS3/rpcs3/blob/73dba6d6e0a10147d821231869ee33b59eac8aa8/rpcs3/Emu/Cell/lv2/sys_ppu_thread.cpp#L498
	return CELL_OK;
}

extern int sys_ppu_thread_rename(sys_ppu_thread_t thread_id, const char *name)
{
	return call_syscall_2(SYSCALL_PPU_THREAD_RENAME, thread_id, (uint32_t)name);
}

extern int sys_ppu_thread_recover_page_fault(sys_ppu_thread_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_RECOVER_PAGE_FAULT, thread_id);
}

extern int sys_ppu_thread_get_page_fault_context(sys_ppu_thread_t thread_id, sys_ppu_thread_icontext_t *ctxp)
{
	return call_syscall_2(SYSCALL_PPU_THREAD_GET_PAGE_FAULT_CONTEXT, thread_id, (uint32_t)ctxp);
}


extern int sys_trace_create()
{
	return CELL_OK;
}

extern int sys_trace_start()
{
	return CELL_OK;
}

extern int sys_trace_stop()
{
	return CELL_OK;
}

extern int sys_trace_update_top_index()
{
	return CELL_OK;
}

extern int sys_trace_destroy()
{
	return CELL_OK;
}

extern int sys_trace_drain()
{
	return CELL_OK;
}

extern int sys_trace_attach_process()
{
	return CELL_OK;
}

extern int sys_trace_allocate_buffer()
{
	return CELL_OK;
}

extern int sys_trace_free_buffer()
{
	return CELL_OK;
}

extern int sys_trace_create2()
{
	return CELL_OK;
}

extern int sys_trace_create2_in_cbepm()
{
	return CELL_OK;
}

extern int sys_trace_()
{
	return CELL_OK;
}


extern int sys_timer_create(sys_timer_t *timer_id)
{
	return call_syscall_1(SYSCALL_TIMER_CREATE, (uint32_t)timer_id);
}

extern int sys_timer_destroy(sys_timer_t timer_id)
{
	return call_syscall_1(SYSCALL_TIMER_DESTROY, timer_id);
}

extern int sys_timer_get_information(sys_timer_t timer_id, sys_timer_information_t *info)
{
	return call_syscall_2(SYSCALL_TIMER_GET_INFORMATION, timer_id, (uint32_t)info);
}

extern int sys_timer_start(sys_timer_t timer_id, system_time_t base_time, usecond_t period)
{
	return call_syscall_3(SYSCALL_TIMER_START, timer_id, base_time, period);
}

extern int sys_timer_stop(sys_timer_t timer_id)
{
	return call_syscall_1(SYSCALL_TIMER_STOP, timer_id);
}

extern int sys_timer_connect_event_queue(sys_timer_t timer_id, sys_event_queue_t queue_id, uint64_t name, uint64_t data1, uint64_t data2)
{
	return call_syscall_5(SYSCALL_TIMER_CONNECT_EVENT_QUEUE, timer_id, queue_id, name, data1, data2);
}

extern int sys_timer_disconnect_event_queue(sys_timer_t timer_id)
{
	return call_syscall_1(SYSCALL_TIMER_DISCONNECT_EVENT_QUEUE, timer_id);
}

extern int sys_timer_usleep(usecond_t sleep_time)
{
	return call_syscall_1(SYSCALL_TIMER_USLEEP, sleep_time);
}

extern int sys_timer_sleep(second_t sleep_time)
{
	return call_syscall_1(SYSCALL_TIMER_SLEEP, sleep_time);
}


extern int sys_interrupt_tag_create(sys_interrupt_tag_t *intrtag, sys_irqoutlet_id_t irq, sys_hw_thread_t hwthread)
{
	return call_syscall_3(SYSCALL_INTERRUPT_TAG_CREATE, (uint32_t)intrtag, irq, hwthread);
}

extern int sys_interrupt_tag_destroy(sys_interrupt_tag_t intrtag)
{
	return call_syscall_1(SYSCALL_INTERRUPT_TAG_DESTROY, intrtag);
}

extern int sys_interrupt_thread_establish(sys_interrupt_thread_handle_t *ih, sys_interrupt_tag_t intrtag, uint64_t intrthread, uint64_t arg1, uint64_t arg2)
{
	return call_syscall_5(SYSCALL_INTERRUPT_THREAD_DISESTABLISH, (uint32_t)ih, intrtag, intrthread, arg1, arg2);
}

extern void sys_interrupt_thread_eoi()
{
	call_syscall_0(SYSCALL_INTERRUPT_THREAD_EOI);
}

extern int sys_interrupt_thread_disestablish(sys_interrupt_thread_handle_t ih, uint64_t *tsl_mem)
{
	return call_syscall_2(SYSCALL_INTERRUPT_THREAD_DISESTABLISH, ih, (uint32_t)tsl_mem);
}


extern int sys_event_flag_create(sys_event_flag_t *id, sys_event_flag_attribute_t *attr, uint64_t init)
{
	return call_syscall_3(SYSCALL_EVENT_FLAG_CREATE, id, attr, init);
}

extern int sys_event_flag_destroy(sys_event_flag_t id)
{
	return call_syscall_1(SYSCALL_EVENT_FLAG_DESTROY, id);
}

extern int sys_event_flag_wait(sys_event_flag_t id, uint64_t bitptn, uint32_t mode, uint64_t *result, usecond_t timeout)
{
	return call_syscall_5(SYSCALL_EVENT_FLAG_WAIT, id, bitptn, mode, result, timeout);
}

extern int sys_event_flag_trywait(sys_event_flag_t id, uint64_t bitptn, uint32_t mode, uint64_t *result)
{
	return call_syscall_4(SYSCALL_EVENT_FLAG_TRYWAIT, id, bitptn, mode, result);
}

extern int sys_event_flag_set(sys_event_flag_t id, uint64_t bitptn)
{
	return call_syscall_2(SYSCALL_EVENT_FLAG_SET, id, bitptn);
}


extern int sys_semaphore_create(sys_semaphore_t *sem, sys_semaphore_attribute_t *attr, sys_semaphore_value_t initial_val, sys_semaphore_value_t max_val)
{
	return call_syscall_4(SYSCALL_SEMAPHORE_CREATE, sem, attr, initial_val, max_val);
}

extern int sys_semaphore_destroy(sys_semaphore_t sem)
{
	return call_syscall_1(SYSCALL_SEMAPHORE_DESTROY, sem);
}

extern int sys_semaphore_wait(sys_semaphore_t sem, usecond_t timeout)
{
	return call_syscall_2(SYSCALL_SEMAPHORE_WAIT, sem, timeout);
}

extern int sys_semaphore_trywait(sys_semaphore_t sem)
{
	return call_syscall_1(SYSCALL_SEMAPHORE_TRYWAIT, sem);
}

extern int sys_semaphore_post(sys_semaphore_t sem, sys_semaphore_value_t val)
{
	return call_syscall_2(SYSCALL_SEMAPHORE_POST, sem, val);
}






