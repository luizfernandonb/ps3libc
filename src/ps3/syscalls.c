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


extern int sys_process_getpid()
{
	return call_syscall_0(SYSCALL_PROCESS_GETPID);
}

extern int sys_process_wait_for_child(int process_id, uint32_t *status, int unk)
{
	return call_syscall_3(SYSCALL_PROCESS_WAIT_FOR_CHILD, process_id, status, unk);
}

extern int sys_process_exit(int status)
{
	return call_syscall_1(SYSCALL_PROCESS_EXIT);
}

extern int sys_process_get_status(int process_id)
{
	return call_syscall_1(SYSCALL_PROCESS_GET_STATUS, process_id);
}

extern int sys_process_get_number_of_object(uint32_t object_type, uint32_t *count)
{
	return call_syscall_2(SYSCALL_PROCESS_GET_NUMBER_OF_OBJECT, object_type, count);
}

extern int sys_process_get_id(uint32_t object, uint32_t *buff, size_t size, size_t *set_size)
{
	return call_syscall_4(SYSCALL_PROCESS_GET_ID, object, buff, size, set_size);
}

extern int sys_process_is_spu_lock_line_reservation_address(uintptr_t addr, uint64_t flags)
{
	return call_syscall_2(SYSCALL_PROCESS_IS_SPU_LOCK_LINE_RESERVATION_ADDRESS, addr, flags);
}

extern int sys_process_getppid()
{
	return call_syscall_0(SYSCALL_PROCESS_GETPPID);
}

extern int sys_process_kill(int process_id)
{
	return call_syscall_1(SYSCALL_PROCESS_KILL, process_id);
}

extern int sys_process_spawn(int *process_id, int prio, uint64_t flags, void *stack, int stack_size, int unk1, int unk2)
{
	return call_syscall_8(SYSCALL_PROCESS_SPAWN, process_id, prio, flags, stack, stack_size, unk1, unk2);
}

extern int sys_process_get_sdk_version(int process_id, uint32_t* sdk_version)
{
	return call_syscall_2(SYSCALL_PROCESS_GET_SDK_VERSION, process_id, sdk_version);
}

extern uintptr_t sys_process_get_ppu_guid()
{
	return call_syscall_0(SYSCALL_PROCESS_GET_PPU_GUID);
}

extern int sys_ppu_thread_exit(int status)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_EXIT, status);
}

extern void sys_ppu_thread_yield()
{
	call_syscall_0(SYSCALL_PPU_THREAD_YIELD);
}

extern int sys_ppu_thread_detach(uint64_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_DETACH, thread_id);
}

extern void sys_ppu_thread_get_join_state(int *isjoinable)
{
	call_syscall_1(SYSCALL_PPU_THREAD_GET_JOIN_STATE, isjoinable);
}

extern int sys_ppu_thread_set_priority(uint64_t thread_id, int prio)
{
	// Flags are checked when 3071 > prio < 3199

	return call_syscall_2(SYSCALL_PPU_THREAD_SET_PRIORITY, thread_id, prio);
}

extern int sys_ppu_thread_get_stack_information(sys_ppu_thread_stack_t *info)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_GET_STACK_INFORMATION, info)
}

extern int sys_ppu_thread_stop(sys_ppu_thread_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_STOP, thread_id);
}

extern int sys_ppu_thread_restart()
{
	return call_syscall_0(SYSCALL_PPU_THREAD_RESTART);
}

extern int sys_ppu_thread_start(sys_ppu_thread_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_START, thread_id);
}

extern int sys_ppu_thread_rename(sys_ppu_thread_t thread_id, const char *name)
{
	return call_syscall_2(SYSCALL_PPU_THREAD_RENAME, thread_id, name);
}

extern int sys_ppu_thread_recover_page_fault(sys_ppu_thread_t thread_id)
{
	return call_syscall_1(SYSCALL_PPU_THREAD_RECOVER_PAGE_FAULT, thread_id);
}

extern int sys_ppu_thread_get_page_fault_context(sys_ppu_thread_t thread_id, sys_ppu_thread_icontext_t *ctxp)
{
	return call_syscall_2(SYSCALL_PPU_THREAD_GET_PAGE_FAULT_CONTEXT, thread_id, ctxp);
}

extern int sys_timer_create(sys_timer_t *timer_id)
{
	return call_syscall_1(SYSCALL_TIMER_CREATE, timer_id);
}

extern int sys_timer_destroy(sys_timer_t timer_id)
{
	return call_syscall_1(SYSCALL_TIMER_DESTROY, timer_id);
}

extern int sys_timer_get_information(sys_timer_t timer_id, sys_timer_information_t *info)
{
	return call_syscall_2(SYSCALL_TIMER_GET_INFORMATION, timer_id, info);
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

extern int sys_interrupt_tag_create(sys_interrupt_tag_t *intrtag, sys_irqoutlet_id_t irq, sys_hw_thread_t hwthread)
{
	return call_syscall_3(SYSCALL_INTERRUPT_TAG_CREATE, intrtag, irq, hwthread);
}

extern int sys_interrupt_tag_destroy(sys_interrupt_tag_t intrtag)
{
	return call_syscall_1(SYSCALL_INTERRUPT_TAG_DESTROY, intrtag);
}

extern int sys_interrupt_thread_establish(sys_interrupt_thread_handle_t *ih, sys_interrupt_tag_t intrtag, uint64_t intrthread, uint64_t arg1, uint64_t arg2)
{
	return call_syscall_5(SYSCALL_INTERRUPT_THREAD_DISESTABLISH, ih, intrtag, intrthread, arg1, arg2);
}

extern int sys_event_flag_create(sys_event_flag_t *id, sys_event_flag_attribute_t *attr, uint64_t init)
{
	return call_syscall_3(SYSCALL_EVENT_FLAG_CREATE, id, attr, init);
}

extern int sys_event_flag_destroy(sys_event_flag_t id)
{
	return call_syscall_1(SYSCALL_EVENT_FLAG_DESTROY, id);
}


















