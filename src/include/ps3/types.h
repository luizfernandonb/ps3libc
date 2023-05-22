#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>
#include <ps3/defines.h>

// Typedefs:

typedef unsigned char sa_family_t;

typedef char sys_overlay_module_filename_t[SYS_OVERLAY_MODULE_FILENAME_SIZE];
typedef char sys_overlay_module_name_t[SYS_OVERLAY_MODULE_NAME_SIZE];

typedef void sys_raw_spu_attribute_t;

typedef uint8_t sys_deci3_port_t;

typedef int32_t mode_t;
typedef int32_t sys_semaphore_value_t;
typedef int32_t sys_time_min_t;
typedef int32_t sys_prx_id_t;
typedef int32_t sys_raw_spu_t;
typedef int32_t CellFsErrno;
typedef int32_t CellFsMode;
typedef int32_t sys_deci3_session_t;
typedef int32_t sys_io_buffer_t;
typedef int32_t sys_io_block_t;

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
typedef uint32_t sys_lwcond_queue_t;
typedef uint32_t sys_sleep_queue_t;
typedef uint32_t sys_hw_thread_t;
typedef uint32_t sys_interrupt_thread_handle_t;
typedef uint32_t sys_interrupt_handler_handle_t;
typedef uint32_t sys_class_id_t;
typedef uint32_t sys_prx_user_pchar_t;
typedef uint32_t sys_prx_user_segment_vector_t;
typedef uint32_t sys_prx_user_libent_addr_t;
typedef uint32_t sys_prx_user_libstub_addr_t;
typedef uint32_t sys_prx_user_p_prx_id_t;
typedef uint32_t sys_prx_user_p_const_void_t;
typedef uint32_t sys_prx_user_p_stop_level_t;
typedef uint32_t socklen_t;
typedef uint32_t sys_deci3_protocol_t;

typedef int64_t off_t;
typedef int64_t off64_t;
typedef int64_t time_t;
typedef int64_t ssize_t;
typedef int64_t useconds_t;
typedef int64_t key_t;
typedef int64_t blkcnt_t;
typedef int64_t blksize_t;
typedef int64_t system_time_t;
typedef int64_t sys_time_sec_t;
typedef int64_t sys_time_nsec_t;

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
typedef uint64_t sys_prx_flags_t;

typedef uintptr_t lparaddr_t;
typedef uintptr_t sys_addr_t;

typedef sys_sleep_queue_t sys_lwmutex_pseudo_id_t;
typedef sys_lwcond_queue_t sys_lwcond_pseudo_id_t;

typedef sys_time_min_t sys_time_timezone_t;
typedef sys_time_min_t sys_time_summertime_t;


// Structs:

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

typedef struct mutex_attr {
	sys_protocol_t attr_protocol;
	sys_recursive_t attr_recursive;
	sys_process_shared_t attr_pshared;

	sys_adaptive_t attr_adaptive;
	sys_ipc_key_t key;
	int flags;
	uint32_t pad;
	char name[SYS_SYNC_NAME_SIZE];
} sys_mutex_attribute_t;

typedef struct cond_attr {
	sys_process_shared_t attr_pshared;

	int flags;
	sys_ipc_key_t key;
	char name[SYS_SYNC_NAME_SIZE];
} sys_cond_attribute_t;

typedef struct rwlock_attr {
	sys_protocol_t attr_protocol;
	sys_process_shared_t attr_pshared;

	sys_ipc_key_t key;
	int flags;
	uint32_t pad;
	char name[SYS_SYNC_NAME_SIZE];
} sys_rwlock_attribute_t;

typedef struct {
	sys_protocol_t attr_protocol;
	sys_process_shared_t attr_pshared;
	sys_ipc_key_t key;
	int flags;
	uint32_t pad;
	char name[SYS_SYNC_NAME_SIZE];
} sys_semaphore_attribute_t;

typedef struct {
	sys_protocol_t attr_protocol;
	sys_process_shared_t attr_pshared;
	sys_ipc_key_t key;
	int flags;
	int type;
	char name[SYS_SYNC_NAME_SIZE];
} sys_event_flag_attribute_t;

typedef struct lwmutex_attr {
	sys_protocol_t attr_protocol;
	sys_recursive_t attr_recursive;
	char name[SYS_SYNC_NAME_SIZE];
} sys_lwmutex_attribute_t;

typedef struct {
	volatile uint32_t owner;
	volatile uint32_t waiter;
} sys_lwmutex_lock_info_t;

typedef union {
	sys_lwmutex_lock_info_t info;
	volatile uint64_t all_info;
} sys_lwmutex_variable_t;

typedef struct sys_lwmutex {
	sys_lwmutex_variable_t lock_var;
	uint32_t attribute;
	uint32_t recursive_count;
	sys_sleep_queue_t sleep_queue;
	uint32_t pad;
} sys_lwmutex_t;

typedef struct sys_lwcond {
	sys_lwmutex_t *lwmutex;
	sys_lwcond_queue_t lwcond_queue;
} sys_lwcond_t;

typedef struct sys_lwcond_attribute {
	char name[SYS_SYNC_NAME_SIZE];
} sys_lwcond_attribute_t;

typedef union {
  uint8_t byte[PPU_VR_WIDTH];
  uint16_t halfword[PPU_VR_WIDTH / sizeof(uint16_t)];
  uint32_t word[PPU_VR_WIDTH / sizeof(uint32_t)];
  uint64_t dw[PPU_VR_WIDTH / sizeof(uint64_t)];
} sys_dbg_vr_t;

typedef struct {
  uint64_t gpr[PPU_GPR_NUM];
  uint32_t cr;
  uint64_t xer;
  uint64_t lr;
  uint64_t ctr;
  uint64_t pc;
  uint64_t fpr[PPU_FPR_NUM];
  uint32_t fpscr;
  sys_dbg_vr_t vr[PPU_VR_NUM];
  sys_dbg_vr_t vscr;
} sys_dbg_ppu_thread_context_t;

typedef union {
  uint8_t byte[SPU_GPR_WIDTH];
  uint16_t halfword[SPU_GPR_WIDTH / sizeof(uint16_t)];
  uint32_t word[SPU_GPR_WIDTH / sizeof(uint32_t)];
  uint64_t dw[SPU_GPR_WIDTH / sizeof(uint64_t)];
} sys_dbg_spu_gpr_t;

typedef union {
  uint8_t byte[SPU_FPSCR_WIDTH];
  uint16_t halfword[SPU_FPSCR_WIDTH / sizeof(uint16_t)];
  uint32_t word[SPU_FPSCR_WIDTH / sizeof(uint32_t)];
  uint64_t dw[SPU_FPSCR_WIDTH / sizeof(uint64_t)];
} sys_dbg_spu_fpscr_t;

typedef struct {
  sys_dbg_spu_gpr_t	gpr[SPU_GPR_NUM];
  uint32_t npc;
  uint32_t fpscr;
  uint32_t srr0;
  uint32_t spu_status;
  uint64_t spu_cfg;
  uint32_t mb_stat;
  uint32_t ppu_mb;
  uint32_t spu_mb[SPU_MB_NUM];
  uint32_t decrementer;
  uint64_t mfc_cq_sr[SPU_MFC_CQ_SR_NUM];
} sys_dbg_spu_thread_context_t;

typedef struct {
  sys_dbg_spu_gpr_t	gpr[SPU_GPR_NUM];
  uint32_t npc;
  sys_dbg_spu_fpscr_t fpscr;
  uint32_t srr0;
  uint32_t spu_status;
  uint64_t spu_cfg;
  uint32_t mb_stat;
  uint32_t ppu_mb;
  uint32_t spu_mb[SPU_MB_NUM];
  uint32_t decrementer;
  uint64_t mfc_cq_sr[SPU_MFC_CQ_SR_NUM];
} sys_dbg_spu_thread_context2_t;

typedef struct {
  sys_mutex_attribute_t	attr;
  sys_ppu_thread_t owner;
  int lock_counter;
  int cond_ref_counter;
  sys_cond_t cond_id;
  sys_ppu_thread_t *wait_id_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
} sys_dbg_mutex_information_t;

typedef struct {
  sys_cond_attribute_t attr;
  sys_mutex_t mutex_id;
  sys_ppu_thread_t*	wait_id_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
} sys_dbg_cond_information_t;

typedef struct {
  sys_rwlock_attribute_t attr;
  sys_ppu_thread_t owner;
  sys_ppu_thread_t *r_wait_id_list;
  uint32_t r_wait_threads_num;
  uint32_t r_wait_all_threads_num;
  sys_ppu_thread_t *w_wait_id_list;
  uint32_t w_wait_threads_num;
  uint32_t w_wait_all_threads_num;
} sys_dbg_rwlock_information_t;

typedef struct {
  sys_event_queue_attribute_t attr;
  sys_ipc_key_t event_queue_key;
  int queue_size;
  sys_ppu_thread_t *wait_id_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
  sys_event_t *equeue_list;
  uint32_t readable_equeue_num;
  uint32_t readable_all_equeue_num;
} sys_dbg_event_queue_information_t;

typedef struct {
  sys_semaphore_attribute_t	attr;
  sys_semaphore_value_t max_val;
  sys_semaphore_value_t cur_val;
  sys_ppu_thread_t *wait_id_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
} sys_dbg_semaphore_information_t;

typedef struct {
  sys_lwmutex_attribute_t attr;
  sys_ppu_thread_t owner;
  int lock_counter;
  sys_ppu_thread_t *wait_id_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
} sys_dbg_lwmutex_information_t;

typedef struct {
  sys_lwcond_attribute_t attr;
  sys_lwmutex_t *lwmutex;
  sys_ppu_thread_t *wait_id_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
} sys_dbg_lwcond_information_t;

typedef struct {
  uint64_t bitptn;
  uint32_t mode;
} sys_dbg_event_flag_wait_information_t;

typedef struct {
  sys_event_flag_attribute_t attr;
  uint64_t cur_bitptn;
  sys_ppu_thread_t *wait_id_list;
  sys_dbg_event_flag_wait_information_t *wait_info_list;
  uint32_t wait_threads_num;
  uint32_t wait_all_threads_num;
} sys_dbg_event_flag_information_t;

typedef struct sys_overlay_segment_info {
	uint32_t base;
	uint32_t memsz;
	uint32_t index;
	uint32_t reserved;
} sys_overlay_segment_info_t;

typedef struct sys_overlay_module_info {
	uint64_t size;
	sys_overlay_module_filename_t *filename;
	size_t filename_size;
	size_t segments_num;
	sys_overlay_segment_info_t *segments;
} sys_overlay_module_info_t;

typedef struct sys_overlay_module_info2 {
	uint64_t size;
	sys_overlay_module_filename_t *filename;
	size_t filename_size;
	size_t segments_num;
	sys_overlay_segment_info_t *segments;
	sys_overlay_module_name_t *modulename;
	size_t modulename_size;
} sys_overlay_module_info2_t;

typedef struct {
	uint32_t size;
	uint32_t magic;
	uint32_t version;
	uint32_t sdk_version;
	char module_name[SYS_OVERLAY_MODULE_NAME_SIZE];
} sys_overlay_param_t;

typedef struct {
	uint64_t base;
	uint64_t filesz;
	uint64_t memsz;
	uint64_t index;
	uint64_t type;
} sys_prx_segment_info_t;

typedef struct sys_prx_libent32_t {
	unsigned char structsize;
	unsigned char reserved1[1];
	unsigned short version;
	unsigned short attribute;
	unsigned short nfunc;
	unsigned short nvar;
	unsigned short ntls;
	unsigned char hashinfo;
	unsigned char hashinfo2;
	unsigned char reserved2[1];
	unsigned char nidaltsets;
	uint32_t libname;
	uint32_t nidtable;
	uint32_t addtable;
} sys_prx_libent32_t;

typedef struct sys_prx_libstub32_t {
	unsigned char structsize;
	unsigned char reserved1[1];
	unsigned short version;
	unsigned short attribute;
	unsigned short nfunc;
	unsigned short nvar;
	unsigned short ntls;
	unsigned char reserved2[4];
	uint32_t libname;
	uint32_t func_nidtable;
	uint32_t func_table;
	uint32_t var_nidtable;
	uint32_t var_table;
	uint32_t tls_nidtable;
	uint32_t tls_table;
} sys_prx_libstub32_t;

typedef struct sys_prx_link32_t {
	uint32_t type;
	uint32_t address;
	uint32_t addend;
} sys_prx_link32_t;

typedef int (*sys_prx_entry_t) (size_t args, void *argv);
typedef int (*sys_prx_entry_pe_t) (uint64_t entry, size_t args, void *argv);

typedef struct sys_prx_start_option_t {
	uint64_t size;
} sys_prx_start_option_t;

typedef struct sys_prx_stop_option_t {
	uint64_t size;
} sys_prx_stop_option_t;

typedef struct sys_prx_load_module_option_t {
	uint64_t size;
} sys_prx_load_module_option_t;

typedef struct sys_prx_load_module_list_option_t {
	uint64_t size;
} sys_prx_load_module_list_option_t;

typedef struct sys_prx_start_module_option_t {
	uint64_t size;
} sys_prx_start_module_option_t;

typedef struct sys_prx_stop_module_option_t {
	uint64_t size;
} sys_prx_stop_module_option_t;

typedef struct sys_prx_unload_module_option_t {
	uint64_t size;
} sys_prx_unload_module_option_t;

typedef struct sys_prx_register_module_option_t {
	uint64_t size;
} sys_prx_register_module_option_t;

typedef struct sys_prx_get_module_id_by_name_option_t {
	uint64_t size;
} sys_prx_get_module_id_by_name_option_t;

typedef struct sys_prx_get_module_list_t {
	uint64_t size;
	uint32_t max;
	uint32_t count;
	sys_prx_user_p_prx_id_t idlist;
	sys_prx_user_p_stop_level_t levellist;
} sys_prx_get_module_list_t;

typedef struct sys_prx_module_info_t {
	uint64_t size;
	char name[30];
	char version[2];
	uint32_t modattribute;
	uint32_t start_entry;
	uint32_t stop_entry;
	uint32_t all_segments_num;
	sys_prx_user_pchar_t filename;
	uint32_t filename_size;
	sys_prx_user_segment_vector_t segments;
	uint32_t segments_num;
} sys_prx_module_info_t;

typedef struct sys_prx_module_info_v2_t {
	uint64_t size;
	char name[30];
	char version[2];
	uint32_t modattribute;
	uint32_t start_entry;
	uint32_t stop_entry;
	uint32_t all_segments_num;
	sys_prx_user_pchar_t filename;
	uint32_t filename_size;
	sys_prx_user_segment_vector_t segments;
	uint32_t segments_num;

	sys_prx_user_libent_addr_t libent_addr;
	uint32_t libent_size;
	sys_prx_user_libstub_addr_t libstub_addr;
	uint32_t libstub_size;
} sys_prx_module_info_v2_t;

struct sockaddr {
	unsigned char sa_len;
	sa_family_t sa_family;
	char sa_data[14];
};

struct iovec {
	int zero1;
	void *iov_base;
	int zero2;
	size_t iov_len;
};

struct msghdr {
	int zero1;
	void *msg_name;
	socklen_t msg_namelen;
	int padding1;
	int zero2;
	struct iovec *msg_iov;
	int msg_iovlen;
	int padding2;
	int zero3;
	void *msg_control;
	socklen_t msg_controllen;
	int msg_flags;
};

typedef struct CellFsDirent {
	uint8_t d_type;
	uint8_t d_namlen;
	char d_name[CELL_FS_MAX_FS_FILE_NAME_LENGTH + 1];
} CellFsDirent;

typedef struct CellFsStat {
	CellFsMode st_mode;
	int st_uid;
	int st_gid;
	time_t st_atime;
	time_t st_mtime;
	time_t st_ctime;
	uint64_t st_size;
	uint64_t st_blksize;
} CellFsStat;

typedef struct CellFsUtimbuf {
	time_t actime;
	time_t modtime;
} CellFsUtimbuf;

typedef struct CellSsOpenPSID {
	uint64_t high;
	uint64_t low;
} CellSsOpenPSID;

typedef struct sys_vm_page_information {
    uint64_t state;
} sys_vm_page_information_t;

__attribute__ ((packed)) typedef struct sys_process_info {
	sys_pid_t pid;
	uint32_t status;
	uint32_t ppu_thread_count;
	uint32_t spu_thread_count;
	uint32_t raw_spu_count;
	sys_pid_t parent_pid;
	char* image_file_name;
	uint32_t memory_size;
	uint8_t osabi_type;
	uint8_t pad[3];
	uint64_t interrupt_bitmap_mask;
	uint32_t dbg_trace_id;
} sys_process_info_t;

typedef struct sys_prx_load_module_option {
	uint64_t size;
} sys_prx_load_module_option_t;

typedef struct sys_prx_dbg_get_module_list {
	uint64_t size;
	uint32_t unk0;
	uint32_t max;
	sys_prx_user_p_prx_id_t idlist;
	uint32_t count;	
	sys_prx_user_p_stop_level_t levellist;	
	uint32_t unk1;
} sys_prx_dbg_get_module_list_t;

typedef struct sys_prx_start {
	uint64_t flag;
	uint64_t mode;
	uint64_t entry;
	int64_t modres;
	uint64_t pe_func;
} sys_prx_start_t;

struct np_drm_info_t {
	uint32_t magic;
	uint32_t version;
	uint32_t drm_type;
	uint32_t type;
	uint8_t content_id[0x30];
	struct CellRtcTick validity_start;
	struct CellRtcTick validity_end;
	struct CellRtcTick current_tick;
	struct CellRtcTick current_secure_tick;
};

typedef struct CellRtcDateTime {
	unsigned short year;
	unsigned short month;
	unsigned short day;
	unsigned short hour;
	unsigned short minute;
	unsigned short second;
	unsigned int   microsecond;
} CellRtcDateTime;

typedef struct CellRtcTick {
	uint64_t tick;
} CellRtcTick;

typedef struct {
	char p_name[0x20];
	char p_type[0x20];
	char p_systype[0x20];
	char padding[0x33];
	unsigned char p_writable;
} CellFsMountInformation;

#endif