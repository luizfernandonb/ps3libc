#ifndef DEFINES_H
#define DEFINES_H

#define CELL_OK 0
#define CELL_STATUS_IS_FAILURE(status) ((status) & 0x80000000)
#define CELL_STATUS_IS_SUCCESS(status) (!(CELL_STATUS_IS_FAILURE))

#define SYS_PROCESS_GETPID                                  1
#define SYS_PROCESS_WAIT_FOR_CHILD                          2
#define SYS_PROCESS_GET_STATUS                              4
#define SYS_PROCESS_DETACH_CHILD                            5
#define SYS_PROCESS_GET_NUMBER_OF_OBJECT                   12
#define SYS_PROCESS_GET_ID                                 13
#define SYS_PROCESS_IS_SPU_LOCK_LINE_RESERVATION_ADDRESS   14
#define SYS_PROCESS_GETPPID                                18
#define SYS_PROCESS_KILL                                   19
#define SYS_PROCESS_WAIT_FOR_CHILD2                        23
#define SYS_PROCESS_GET_SDK_VERSION                        25
#define SYS_PROCESS_GET_PPU_GUID                           31
#define SYS_PROCESS_EXIT									3
#define SYS_PROCESS_SPAWN								   21
#define SYSCALL_PROCESS_GETPID                               SYS_PROCESS_GETPID
#define SYSCALL_PROCESS_WAIT_FOR_CHILD                       SYS_PROCESS_WAIT_FOR_CHILD
#define SYSCALL_PROCESS_GET_STATUS                           SYS_PROCESS_GET_STATUS
#define SYSCALL_PROCESS_DETACH_CHILD                         SYS_PROCESS_DETACH_CHILD
#define SYSCALL_PROCESS_GET_NUMBER_OF_OBJECT                 SYS_PROCESS_GET_NUMBER_OF_OBJECT
#define SYSCALL_PROCESS_GET_ID                               SYS_PROCESS_GET_ID
#define SYSCALL_PROCESS_IS_SPU_LOCK_LINE_RESERVATION_ADDRESS SYS_PROCESS_IS_SPU_LOCK_LINE_RESERVATION_ADDRESS
#define SYSCALL_PROCESS_GETPPID                              SYS_PROCESS_GETPPID
#define SYSCALL_PROCESS_KILL                                 SYS_PROCESS_KILL
#define SYSCALL_PROCESS_WAIT_FOR_CHILD2                      SYS_PROCESS_WAIT_FOR_CHILD2
#define SYSCALL_PROCESS_GET_SDK_VERSION                      SYS_PROCESS_GET_SDK_VERSION
#define SYSCALL_PROCESS_GET_PPU_GUID                         SYS_PROCESS_GET_PPU_GUID
#define SYSCALL_PROCESS_EXIT								 SYS_PROCESS_EXIT
#define SYSCALL_PROCESS_SPAWN								 SYS_PROCESS_SPAWN

#define SYS_PPU_THREAD_YIELD                               43
#define SYS_PPU_THREAD_JOIN                                44
#define SYS_PPU_THREAD_DETACH                              45
#define SYS_PPU_THREAD_GET_JOIN_STATE                      46
#define SYS_PPU_THREAD_SET_PRIORITY                        47
#define SYS_PPU_THREAD_GET_PRIORITY                        48
#define SYS_PPU_THREAD_GET_STACK_INFORMATION               49
#define SYS_PPU_THREAD_RENAME                              56
#define SYS_PPU_THREAD_RECOVER_PAGE_FAULT                  57
#define SYS_PPU_THREAD_GET_PAGE_FAULT_CONTEXT              58
#define SYS_PPU_THREAD_EXIT								   41
#define SYS_PPU_THREAD_STOP								   50
#define SYS_PPU_THREAD_RESTART							   51
#define SYS_PPU_THREAD_CREATE							   52
#define SYS_PPU_THREAD_START							   53
#define SYSCALL_PPU_THREAD_YIELD                  		   SYS_PPU_THREAD_YIELD
#define SYSCALL_PPU_THREAD_JOIN                   		   SYS_PPU_THREAD_JOIN
#define SYSCALL_PPU_THREAD_DETACH                 		   SYS_PPU_THREAD_DETACH
#define SYSCALL_PPU_THREAD_GET_JOIN_STATE         		   SYS_PPU_THREAD_GET_JOIN_STATE
#define SYSCALL_PPU_THREAD_SET_PRIORITY           		   SYS_PPU_THREAD_SET_PRIORITY
#define SYSCALL_PPU_THREAD_GET_PRIORITY           		   SYS_PPU_THREAD_GET_PRIORITY
#define SYSCALL_PPU_THREAD_GET_STACK_INFORMATION  		   SYS_PPU_THREAD_GET_STACK_INFORMATION
#define SYSCALL_PPU_THREAD_RENAME                 		   SYS_PPU_THREAD_RENAME
#define SYSCALL_PPU_THREAD_RECOVER_PAGE_FAULT     		   SYS_PPU_THREAD_RECOVER_PAGE_FAULT
#define SYSCALL_PPU_THREAD_GET_PAGE_FAULT_CONTEXT 		   SYS_PPU_THREAD_GET_PAGE_FAULT_CONTEXT
#define SYSCALL_PPU_THREAD_EXIT 		   				   SYS_PPU_THREAD_EXIT
#define SYSCALL_PPU_THREAD_STOP 		   				   SYS_PPU_THREAD_STOP
#define SYSCALL_PPU_THREAD_RESTART 		   				   SYS_PPU_THREAD_RESTART
#define SYSCALL_PPU_THREAD_CREATE 		   				   SYS_PPU_THREAD_CREATE
#define SYSCALL_PPU_THREAD_START 		   				   SYS_PPU_THREAD_START

#define SYS_TRACE_ALLOCATE_BUFFER                          67
#define SYS_TRACE_FREE_BUFFER                              68
#define SYS_TRACE_CREATE2                                  69
#define SYS_TRACE_CREATE2_IN_CBEPM                         77
#define SYSCALL_TRACE_ALLOCATE_BUFFER                      SYS_TRACE_ALLOCATE_BUFFER
#define SYSCALL_TRACE_FREE_BUFFER                          SYS_TRACE_FREE_BUFFER
#define SYSCALL_TRACE_CREATE2                              SYS_TRACE_CREATE2
#define SYSCALL_TRACE_CREATE2_IN_CBEPM                     SYS_TRACE_CREATE2_IN_CBEPM

#define SYS_TIMER_CREATE                                   70
#define SYS_TIMER_DESTROY                                  71
#define SYS_TIMER_GET_INFORMATION                          72
#define SYS_TIMER_STOP                                     74
#define SYS_TIMER_CONNECT_EVENT_QUEUE                      75
#define SYS_TIMER_DISCONNECT_EVENT_QUEUE                   76
#define SYS_TIMER_USLEEP                                  141
#define SYS_TIMER_SLEEP                                   142
#define SYS_TIMER_START									   73
#define SYSCALL_TIMER_CREATE                              SYS_TIMER_CREATE
#define SYSCALL_TIMER_DESTROY                             SYS_TIMER_DESTROY
#define SYSCALL_TIMER_GET_INFORMATION                     SYS_TIMER_GET_INFORMATION
#define SYSCALL_TIMER_STOP                                SYS_TIMER_STOP
#define SYSCALL_TIMER_CONNECT_EVENT_QUEUE                 SYS_TIMER_CONNECT_EVENT_QUEUE
#define SYSCALL_TIMER_DISCONNECT_EVENT_QUEUE              SYS_TIMER_DISCONNECT_EVENT_QUEUE
#define SYSCALL_TIMER_USLEEP                              SYS_TIMER_USLEEP
#define SYSCALL_TIMER_SLEEP                               SYS_TIMER_SLEEP
#define SYSCALL_TIMER_START								  SYS_TIMER_START

#define SYS_INTERRUPT_TAG_CREATE                           80
#define SYS_INTERRUPT_TAG_DESTROY                          81
#define SYS_INTERRUPT_THREAD_EOI                           88
#define SYS_INTERRUPT_THREAD_ESTABLISH                     84
#define SYS_INTERRUPT_THREAD_DISESTABLISH                  89
#define SYSCALL_INTERRUPT_THREAD_ESTABLISH                 SYS_INTERRUPT_THREAD_ESTABLISH
#define SYSCALL_INTERRUPT_THREAD_DISESTABLISH              SYS_INTERRUPT_THREAD_DISESTABLISH
#define SYSCALL_INTERRUPT_TAG_CREATE                       SYS_INTERRUPT_TAG_CREATE
#define SYSCALL_INTERRUPT_TAG_DESTROY                      SYS_INTERRUPT_TAG_DESTROY
#define SYSCALL_INTERRUPT_THREAD_EOI                       SYS_INTERRUPT_THREAD_EOI

#define SYS_SEMAPHORE_CREATE                               90
#define SYS_SEMAPHORE_DESTROY                              91
#define SYS_SEMAPHORE_WAIT                                 92
#define SYS_SEMAPHORE_TRYWAIT                              93
#define SYS_SEMAPHORE_POST                                 94
#define SYS_SEMAPHORE_GET_VALUE                           114
#define SYSCALL_SEMAPHORE_CREATE                          SYS_SEMAPHORE_CREATE
#define SYSCALL_SEMAPHORE_DESTROY                         SYS_SEMAPHORE_DESTROY
#define SYSCALL_SEMAPHORE_WAIT                            SYS_SEMAPHORE_WAIT
#define SYSCALL_SEMAPHORE_TRYWAIT                         SYS_SEMAPHORE_TRYWAIT
#define SYSCALL_SEMAPHORE_POST                            SYS_SEMAPHORE_POST
#define SYSCALL_SEMAPHORE_GET_VALUE                       SYS_SEMAPHORE_GET_VALUE

#define SYS_MUTEX_CREATE                                  100
#define SYS_MUTEX_DESTROY                                 101
#define SYS_MUTEX_LOCK                                    102
#define SYS_MUTEX_TRYLOCK                                 103
#define SYS_MUTEX_UNLOCK                                  104
#define SYSCALL_MUTEX_CREATE                              SYS_MUTEX_CREATE
#define SYSCALL_MUTEX_DESTROY                             SYS_MUTEX_DESTROY
#define SYSCALL_MUTEX_LOCK                                SYS_MUTEX_LOCK
#define SYSCALL_MUTEX_TRYLOCK                             SYS_MUTEX_TRYLOCK
#define SYSCALL_MUTEX_UNLOCK                              SYS_MUTEX_UNLOCK

#define SYS_COND_CREATE                                   105
#define SYS_COND_DESTROY                                  106
#define SYS_COND_WAIT                                     107
#define SYS_COND_SIGNAL                                   108
#define SYS_COND_SIGNAL_ALL                               109
#define SYS_COND_SIGNAL_TO                                110
#define SYSCALL_COND_CREATE                               SYS_COND_CREATE
#define SYSCALL_COND_DESTROY                              SYS_COND_DESTROY
#define SYSCALL_COND_WAIT                                 SYS_COND_WAIT
#define SYSCALL_COND_SIGNAL                               SYS_COND_SIGNAL
#define SYSCALL_COND_SIGNAL_ALL                           SYS_COND_SIGNAL_ALL
#define SYSCALL_COND_SIGNAL_TO                            SYS_COND_SIGNAL_TO

#define SYS_RWLOCK_CREATE                                 120
#define SYS_RWLOCK_DESTROY                                121
#define SYS_RWLOCK_RLOCK                                  122
#define SYS_RWLOCK_TRYRLOCK                               123
#define SYS_RWLOCK_RUNLOCK                                124
#define SYS_RWLOCK_WLOCK                                  125
#define SYS_RWLOCK_WUNLOCK                                127
#define SYS_RWLOCK_TRYWLOCK                               148
#define SYSCALL_RWLOCK_CREATE                             SYS_RWLOCK_CREATE
#define SYSCALL_RWLOCK_DESTROY                            SYS_RWLOCK_DESTROY
#define SYSCALL_RWLOCK_RLOCK                              SYS_RWLOCK_RLOCK
#define SYSCALL_RWLOCK_TRYRLOCK                           SYS_RWLOCK_TRYRLOCK
#define SYSCALL_RWLOCK_RUNLOCK                            SYS_RWLOCK_RUNLOCK
#define SYSCALL_RWLOCK_WLOCK                              SYS_RWLOCK_WLOCK
#define SYSCALL_RWLOCK_WUNLOCK                            SYS_RWLOCK_WUNLOCK
#define SYSCALL_RWLOCK_TRYWLOCK                           SYS_RWLOCK_TRYWLOCK

#define SYS_EVENT_QUEUE_CREATE                            128
#define SYS_EVENT_QUEUE_DESTROY                           129
#define SYS_EVENT_QUEUE_RECEIVE                           130
#define SYS_EVENT_QUEUE_TRYRECEIVE                        131
#define SYS_EVENT_FLAG_CANCEL                             132
#define SYS_EVENT_QUEUE_DRAIN                             133
#define SYS_EVENT_PORT_CREATE                             134
#define SYS_EVENT_PORT_DESTROY                            135
#define SYS_EVENT_PORT_CONNECT_LOCAL                      136
#define SYS_EVENT_PORT_DISCONNECT                         137
#define SYS_EVENT_PORT_SEND                               138
#define SYS_EVENT_FLAG_GET                                139
#define SYS_EVENT_PORT_CONNECT_IPC                        140
#define SYS_EVENT_FLAG_SET_BIT                            8
#define SYS_EVENT_FLAG_SET_BIT_IMPATIENT                  9
#define SYS_EVENT_FLAG_CREATE                             82
#define SYS_EVENT_FLAG_DESTROY                            83
#define SYS_EVENT_FLAG_WAIT                               85
#define SYS_EVENT_FLAG_TRYWAIT                            86
#define SYS_EVENT_FLAG_SET                                87
#define SYS_EVENT_FLAG_CLEAR                              118
#define SYSCALL_EVENT_QUEUE_CREATE                        SYS_EVENT_QUEUE_CREATE
#define SYSCALL_EVENT_QUEUE_DESTROY                       SYS_EVENT_QUEUE_DESTROY
#define SYSCALL_EVENT_QUEUE_RECEIVE                       SYS_EVENT_QUEUE_RECEIVE
#define SYSCALL_EVENT_QUEUE_TRYRECEIVE                    SYS_EVENT_QUEUE_TRYRECEIVE
#define SYSCALL_EVENT_FLAG_CANCEL                         SYS_EVENT_FLAG_CANCEL
#define SYSCALL_EVENT_QUEUE_DRAIN                         SYS_EVENT_QUEUE_DRAIN
#define SYSCALL_EVENT_PORT_CREATE                         SYS_EVENT_PORT_CREATE
#define SYSCALL_EVENT_PORT_DESTROY                        SYS_EVENT_PORT_DESTROY
#define SYSCALL_EVENT_PORT_CONNECT_LOCAL                  SYS_EVENT_PORT_CONNECT_LOCAL
#define SYSCALL_EVENT_PORT_DISCONNECT                     SYS_EVENT_PORT_DISCONNECT
#define SYSCALL_EVENT_PORT_SEND                           SYS_EVENT_PORT_SEND
#define SYSCALL_EVENT_FLAG_GET                            SYS_EVENT_FLAG_GET
#define SYSCALL_EVENT_PORT_CONNECT_IPC                    SYS_EVENT_PORT_CONNECT_IPC
#define SYSCALL_EVENT_FLAG_SET_BIT                        SYS_EVENT_FLAG_SET_BIT
#define SYSCALL_EVENT_FLAG_SET_BIT_IMPATIENT              SYS_EVENT_FLAG_SET_BIT_IMPATIENT
#define SYSCALL_EVENT_FLAG_CREATE                         SYS_EVENT_FLAG_CREATE
#define SYSCALL_EVENT_FLAG_DESTROY                        SYS_EVENT_FLAG_DESTROY
#define SYSCALL_EVENT_FLAG_WAIT                           SYS_EVENT_FLAG_WAIT
#define SYSCALL_EVENT_FLAG_TRYWAIT                        SYS_EVENT_FLAG_TRYWAIT
#define SYSCALL_EVENT_FLAG_SET                            SYS_EVENT_FLAG_SET
#define SYSCALL_EVENT_FLAG_CLEAR                          SYS_EVENT_FLAG_CLEAR

#define SYS_TIME_GET_CURRENT_TIME                         145
#define SYS_TIME_GET_TIMEBASE_FREQUENCY                   147
#define SYSCALL_TIME_GET_CURRENT_TIME                     SYS_TIME_GET_CURRENT_TIME
#define SYSCALL_TIME_GET_TIMEBASE_FREQUENCY               SYS_TIME_GET_TIMEBASE_FREQUENCY

#define SYS_RAW_SPU_CREATE_INTERRUPT_TAG                  150
#define SYS_RAW_SPU_SET_INT_MASK                          151
#define SYS_RAW_SPU_GET_INT_MASK                          152
#define SYS_RAW_SPU_SET_INT_STAT                          153
#define SYS_RAW_SPU_GET_INT_STAT                          154
#define SYS_RAW_SPU_CREATE                                160
#define SYS_RAW_SPU_DESTROY                               161
#define SYS_RAW_SPU_READ_PUINT_MB                         163
#define SYS_RAW_SPU_SET_SPU_CFG                           196
#define SYS_RAW_SPU_GET_SPU_CFG                           197
#define SYS_RAW_SPU_RECOVER_PAGE_FAULT                    199
#define SYSCALL_RAW_SPU_CREATE_INTERRUPT_TAG              SYS_RAW_SPU_CREATE_INTERRUPT_TAG
#define SYSCALL_RAW_SPU_SET_INT_MASK                      SYS_RAW_SPU_SET_INT_MASK
#define SYSCALL_RAW_SPU_GET_INT_MASK                      SYS_RAW_SPU_GET_INT_MASK
#define SYSCALL_RAW_SPU_SET_INT_STAT                      SYS_RAW_SPU_SET_INT_STAT
#define SYSCALL_RAW_SPU_GET_INT_STAT                      SYS_RAW_SPU_GET_INT_STAT
#define SYSCALL_RAW_SPU_CREATE                            SYS_RAW_SPU_CREATE
#define SYSCALL_RAW_SPU_DESTROY                           SYS_RAW_SPU_DESTROY
#define SYSCALL_RAW_SPU_READ_PUINT_MB                     SYS_RAW_SPU_READ_PUINT_MB
#define SYSCALL_RAW_SPU_SET_SPU_CFG                       SYS_RAW_SPU_SET_SPU_CFG
#define SYSCALL_RAW_SPU_GET_SPU_CFG                       SYS_RAW_SPU_GET_SPU_CFG
#define SYSCALL_RAW_SPU_RECOVER_PAGE_FAULT                SYS_RAW_SPU_RECOVER_PAGE_FAULT

#define SYS_SPU_IMAGE_OPEN                                156
#define SYS_SPU_INITIALIZE                                169
#define SYS_SPU_SYSTEM_MODULE_ID_INVALID 				  0xFFFFFFFFU
#define SYSCALL_SPU_IMAGE_OPEN                            SYS_SPU_IMAGE_OPEN
#define SYSCALL_SPU_INITIALIZE                            SYS_SPU_INITIALIZE
#define SYSCALL_SPU_SYSTEM_MODULE_ID_INVALID			  SYS_SPU_SYSTEM_MODULE_ID_INVALID

#define SYS_SPU_THREAD_GET_EXIT_STATUS                    165
#define SYS_SPU_THREAD_SET_ARGUMENT                       166
#define SYS_SPU_THREAD_GROUP_START_ON_EXIT                167
#define SYS_SPU_THREAD_GROUP_CREATE                       170
#define SYS_SPU_THREAD_GROUP_DESTROY                      171
#define SYS_SPU_THREAD_INITIALIZE                         172
#define SYS_SPU_THREAD_GROUP_START                        173
#define SYS_SPU_THREAD_GROUP_SUSPEND                      174
#define SYS_SPU_THREAD_GROUP_RESUME                       175
#define SYS_SPU_THREAD_GROUP_YIELD                        176
#define SYS_SPU_THREAD_GROUP_TERMINATE                    177
#define SYS_SPU_THREAD_GROUP_JOIN                         178
#define SYS_SPU_THREAD_GROUP_SET_PRIORITY                 179
#define SYS_SPU_THREAD_GROUP_GET_PRIORITY                 180
#define SYS_SPU_THREAD_WRITE_LS                           181
#define SYS_SPU_THREAD_READ_LS                            182
#define SYS_SPU_THREAD_WRITE_SNR                          184
#define SYS_SPU_THREAD_GROUP_CONNECT_EVENT                185
#define SYS_SPU_THREAD_GROUP_DISCONNECT_EVENT             186
#define SYS_SPU_THREAD_SET_SPU_CFG                        187
#define SYS_SPU_THREAD_GET_SPU_CFG                        188
#define SYS_SPU_THREAD_WRITE_SPU_MB                       190
#define SYS_SPU_THREAD_CONNECT_EVENT                      191
#define SYS_SPU_THREAD_DISCONNECT_EVENT                   192
#define SYS_SPU_THREAD_BIND_QUEUE                         193
#define SYS_SPU_THREAD_UNBIND_QUEUE                       194
#define SYS_SPU_THREAD_GROUP_ID_INVALID  				  0xFFFFFFFFU
#define SYS_SPU_THREAD_ID_INVALID        				  0xFFFFFFFFU
#define SYS_SPU_THREAD_RECOVER_PAGE_FAULT                 198
#define SYS_SPU_THREAD_GROUP_SET_COOPERATIVE_VICTIMS      250
#define SYS_SPU_THREAD_GROUP_CONNECT_EVENT_ALL_THREADS    251
#define SYS_SPU_THREAD_GROUP_DISCONNECT_EVENT_ALL_THREADS 252
#define SYS_SPU_THREAD_GROUP_LOG                          254
#define SYS_SPU_IMAGE_OPEN_BY_FD                          260
#define SYS_SPU_THREAD_EXIT                               1
#define SYS_SPU_THREAD_GROUP_EXIT                         2
#define SYS_SPU_THREAD_YIELD                              3
#define SYS_SPU_THREAD_RECEIVE_EVENT                      4
#define SYS_SPU_THREAD_TRYRECEIVE_EVENT                   5
#define SYS_SPU_THREAD_SEND_EVENT                         6
#define SYS_SPU_THREAD_THROW_EVENT                        7
#define SYS_SPU_THREAD_SWITCH_TO_SYSTEM_MODULE			  10
#define SYSCALL_SPU_THREAD_GET_EXIT_STATUS                    SYS_SPU_THREAD_GET_EXIT_STATUS
#define SYSCALL_SPU_THREAD_SET_ARGUMENT                       SYS_SPU_THREAD_SET_ARGUMENT
#define SYSCALL_SPU_THREAD_GROUP_START_ON_EXIT                SYS_SPU_THREAD_GROUP_START_ON_EXIT
#define SYSCALL_SPU_THREAD_GROUP_CREATE                       SYS_SPU_THREAD_GROUP_CREATE
#define SYSCALL_SPU_THREAD_GROUP_DESTROY                      SYS_SPU_THREAD_GROUP_DESTROY
#define SYSCALL_SPU_THREAD_INITIALIZE                         SYS_SPU_THREAD_INITIALIZE
#define SYSCALL_SPU_THREAD_GROUP_START                        SYS_SPU_THREAD_GROUP_START
#define SYSCALL_SPU_THREAD_GROUP_SUSPEND                      SYS_SPU_THREAD_GROUP_SUSPEND
#define SYSCALL_SPU_THREAD_GROUP_RESUME                       SYS_SPU_THREAD_GROUP_RESUME
#define SYSCALL_SPU_THREAD_GROUP_YIELD                        SYS_SPU_THREAD_GROUP_YIELD
#define SYSCALL_SPU_THREAD_GROUP_TERMINATE                    SYS_SPU_THREAD_GROUP_TERMINATE
#define SYSCALL_SPU_THREAD_GROUP_JOIN                         SYS_SPU_THREAD_GROUP_JOIN
#define SYSCALL_SPU_THREAD_GROUP_SET_PRIORITY                 SYS_SPU_THREAD_GROUP_JOIN
#define SYSCALL_SPU_THREAD_GROUP_GET_PRIORITY                 SYS_SPU_THREAD_GROUP_GET_PRIORITY
#define SYSCALL_SPU_THREAD_WRITE_LS                           SYS_SPU_THREAD_WRITE_LS
#define SYSCALL_SPU_THREAD_READ_LS                            SYS_SPU_THREAD_READ_LS
#define SYSCALL_SPU_THREAD_WRITE_SNR                          SYS_SPU_THREAD_WRITE_SNR
#define SYSCALL_SPU_THREAD_GROUP_CONNECT_EVENT                SYS_SPU_THREAD_GROUP_CONNECT_EVENT
#define SYSCALL_SPU_THREAD_GROUP_DISCONNECT_EVENT             SYS_SPU_THREAD_GROUP_DISCONNECT_EVENT
#define SYSCALL_SPU_THREAD_SET_SPU_CFG                        SYS_SPU_THREAD_SET_SPU_CFG
#define SYSCALL_SPU_THREAD_GET_SPU_CFG                        SYS_SPU_THREAD_GET_SPU_CFG
#define SYSCALL_SPU_THREAD_WRITE_SPU_MB                       SYS_SPU_THREAD_WRITE_SPU_MB
#define SYSCALL_SPU_THREAD_CONNECT_EVENT                      SYS_SPU_THREAD_CONNECT_EVENT
#define SYSCALL_SPU_THREAD_DISCONNECT_EVENT                   SYS_SPU_THREAD_DISCONNECT_EVENT
#define SYSCALL_SPU_THREAD_BIND_QUEUE                         SYS_SPU_THREAD_BIND_QUEUE
#define SYSCALL_SPU_THREAD_UNBIND_QUEUE                       SYS_SPU_THREAD_UNBIND_QUEUE
#define SYSCALL_SPU_THREAD_GROUP_ID_INVALID  				  SYS_SPU_THREAD_GROUP_ID_INVALID
#define SYSCALL_SPU_THREAD_ID_INVALID        				  SYS_SPU_THREAD_ID_INVALID
#define SYSCALL_SPU_THREAD_RECOVER_PAGE_FAULT                 SYS_SPU_THREAD_RECOVER_PAGE_FAULT
#define SYSCALL_SPU_THREAD_GROUP_SET_COOPERATIVE_VICTIMS      SYS_SPU_THREAD_GROUP_SET_COOPERATIVE_VICTIMS
#define SYSCALL_SPU_THREAD_GROUP_CONNECT_EVENT_ALL_THREADS    SYS_SPU_THREAD_GROUP_CONNECT_EVENT_ALL_THREADS
#define SYSCALL_SPU_THREAD_GROUP_DISCONNECT_EVENT_ALL_THREADS SYS_SPU_THREAD_GROUP_DISCONNECT_EVENT_ALL_THREADS
#define SYSCALL_SPU_THREAD_GROUP_LOG                          SYS_SPU_THREAD_GROUP_LOG
#define SYSCALL_SPU_IMAGE_OPEN_BY_FD                          SYS_SPU_IMAGE_OPEN_BY_FD
#define SYSCALL_SPU_THREAD_EXIT                               SYS_SPU_THREAD_EXIT
#define SYSCALL_SPU_THREAD_GROUP_EXIT                         SYS_SPU_THREAD_GROUP_EXIT
#define SYSCALL_SPU_THREAD_YIELD                              SYS_SPU_THREAD_YIELD
#define SYSCALL_SPU_THREAD_RECEIVE_EVENT                      SYS_SPU_THREAD_RECEIVE_EVENT
#define SYSCALL_SPU_THREAD_TRYRECEIVE_EVENT                   SYS_SPU_THREAD_TRYRECEIVE_EVENT
#define SYSCALL_SPU_THREAD_SEND_EVENT                         SYS_SPU_THREAD_SEND_EVENT
#define SYSCALL_SPU_THREAD_THROW_EVENT                        SYS_SPU_THREAD_THROW_EVENT
#define SYSCALL_SPU_THREAD_SWITCH_TO_SYSTEM_MODULE			  SYS_SPU_THREAD_SWITCH_TO_SYSTEM_MODULE

#define SYS_VM_MEMORY_MAP                                 300
#define SYS_VM_UNMAP                                      301
#define SYS_VM_APPEND_MEMORY                              302
#define SYS_VM_RETURN_MEMORY                              303
#define SYS_VM_LOCK                                       304
#define SYS_VM_UNLOCK                                     305
#define SYS_VM_TOUCH                                      306
#define SYS_VM_FLUSH                                      307
#define SYS_VM_INVALIDATE                                 308
#define SYS_VM_STORE                                      309
#define SYS_VM_SYNC                                       310
#define SYS_VM_TEST                                       311
#define SYS_VM_GET_STATISTICS                             312
#define SYSCALL_VM_MEMORY_MAP                             SYS_VM_MEMORY_MAP
#define SYSCALL_VM_UNMAP                                  SYS_VM_UNMAP
#define SYSCALL_VM_APPEND_MEMORY                          SYS_VM_APPEND_MEMORY
#define SYSCALL_VM_RETURN_MEMORY                          SYS_VM_RETURN_MEMORY
#define SYSCALL_VM_LOCK                                   SYS_VM_LOCK
#define SYSCALL_VM_UNLOCK                                 SYS_VM_UNLOCK
#define SYSCALL_VM_TOUCH                                  SYS_VM_TOUCH
#define SYSCALL_VM_FLUSH                                  SYS_VM_FLUSH
#define SYSCALL_VM_INVALIDATE                             SYS_VM_INVALIDATE
#define SYSCALL_VM_STORE                                  SYS_VM_STORE
#define SYSCALL_VM_SYNC                                   SYS_VM_SYNC
#define SYSCALL_VM_TEST                                   SYS_VM_TEST
#define SYSCALL_VM_GET_STATISTICS                         SYS_VM_GET_STATISTICS

#define SYS_MEMORY_CONTAINER_CREATE                       324
#define SYS_MEMORY_CONTAINER_DESTROY                      325
#define SYS_MEMORY_CONTAINER_GET_SIZE                     343
#define SYS_MEMORY_ALLOCATE                               348
#define SYS_MEMORY_FREE                                   349
#define SYS_MEMORY_ALLOCATE_FROM_CONTAINER                350
#define SYS_MEMORY_GET_PAGE_ATTRIBUTE                     351
#define SYS_MEMORY_GET_USER_MEMORY_SIZE                   352
#define SYSCALL_MEMORY_CONTAINER_CREATE                   SYS_MEMORY_CONTAINER_CREATE
#define SYSCALL_MEMORY_CONTAINER_DESTROY                  SYS_MEMORY_CONTAINER_DESTROY
#define SYSCALL_MEMORY_CONTAINER_GET_SIZE                 SYS_MEMORY_CONTAINER_GET_SIZE
#define SYSCALL_MEMORY_ALLOCATE                           SYS_MEMORY_ALLOCATE
#define SYSCALL_MEMORY_FREE                               SYS_MEMORY_FREE
#define SYSCALL_MEMORY_ALLOCATE_FROM_CONTAINER            SYS_MEMORY_ALLOCATE_FROM_CONTAINER
#define SYSCALL_MEMORY_GET_PAGE_ATTRIBUTE                 SYS_MEMORY_GET_PAGE_ATTRIBUTE
#define SYSCALL_MEMORY_GET_USER_MEMORY_SIZE               SYS_MEMORY_GET_USER_MEMORY_SIZE

#define SYS_MMAPPER_ALLOCATE_FIXED_ADDRESS                326
#define SYS_MMAPPER_ENABLE_PAGE_FAULT_NOTIFICATION        327
#define SYS_MMAPPER_ALLOCATE_ADDRESS                      330
#define SYS_MMAPPER_FREE_ADDRESS                          331
#define SYS_MMAPPER_CHANGE_ADDRESS_ACCESS_RIGHT           336
#define SYS_MMAPPER_SEARCH_AND_MAP                        337
#define SYSCALL_MMAPPER_ALLOCATE_FIXED_ADDRESS            SYS_MMAPPER_ALLOCATE_FIXED_ADDRESS
#define SYSCALL_MMAPPER_ENABLE_PAGE_FAULT_NOTIFICATION    SYS_MMAPPER_ENABLE_PAGE_FAULT_NOTIFICATION
#define SYSCALL_MMAPPER_ALLOCATE_ADDRESS                  SYS_MMAPPER_ALLOCATE_ADDRESS
#define SYSCALL_MMAPPER_FREE_ADDRESS                      SYS_MMAPPER_FREE_ADDRESS
#define SYSCALL_MMAPPER_CHANGE_ADDRESS_ACCESS_RIGHT       SYS_MMAPPER_CHANGE_ADDRESS_ACCESS_RIGHT
#define SYSCALL_MMAPPER_SEARCH_AND_MAP                    SYS_MMAPPER_SEARCH_AND_MAP

#define SYS_TTY_READ                                      402
#define SYS_TTY_WRITE                                     403
#define SYSCALL_TTY_READ                                  SYS_TTY_READ
#define SYSCALL_TTY_WRITE                                 SYS_TTY_WRITE

#define SYS_PRX_GET_PPU_GUID                              467
#define SYSCALL_PRX_GET_PPU_GUID                          SYS_PRX_GET_PPU_GUID

#define SYS_OVERLAY_LOAD_MODULE                           450
#define SYS_OVERLAY_UNLOAD_MODULE                         451
#define SYS_OVERLAY_GET_MODULE_LIST                       452
#define SYS_OVERLAY_GET_MODULE_INFO                       453
#define SYS_OVERLAY_LOAD_MODULE_BY_FD                     454
#define SYS_OVERLAY_GET_MODULE_INFO2                      455
#define SYS_OVERLAY_GET_SDK_VERSION                       456
#define SYSCALL_OVERLAY_LOAD_MODULE                       SYS_OVERLAY_LOAD_MODULE
#define SYSCALL_OVERLAY_UNLOAD_MODULE                     SYS_OVERLAY_UNLOAD_MODULE
#define SYSCALL_OVERLAY_GET_MODULE_LIST                   SYS_OVERLAY_GET_MODULE_LIST
#define SYSCALL_OVERLAY_GET_MODULE_INFO                   SYS_OVERLAY_GET_MODULE_INFO
#define SYSCALL_OVERLAY_LOAD_MODULE_BY_FD                 SYS_OVERLAY_LOAD_MODULE_BY_FD
#define SYSCALL_OVERLAY_GET_MODULE_INFO2                  SYS_OVERLAY_GET_MODULE_INFO2
#define SYSCALL_OVERLAY_GET_SDK_VERSION                   SYS_OVERLAY_GET_SDK_VERSION

#define SYS_STORAGE_OPEN                                  600
#define SYS_STORAGE_CLOSE                                 601
#define SYS_STORAGE_READ                                  602
#define SYS_STORAGE_WRITE                                 603
#define SYS_STORAGE_SEND_DEVICE_COMMAND                   604
#define SYS_STORAGE_ASYNC_CONFIGURE                       605
#define SYS_STORAGE_ASYNC_READ                            606
#define SYS_STORAGE_ASYNC_WRITE                           607
#define SYS_STORAGE_ASYNC_CANCEL                          608
#define SYS_STORAGE_GET_DEVICE_INFO                       609
#define SYS_STORAGE_GET_DEVICE_CONFIG                     610
#define SYS_STORAGE_REPORT_DEVICES                        611
#define SYS_STORAGE_CONFIGURE_MEDIUM_EVENT                612
#define SYS_STORAGE_SET_MEDIUM_POLLING_INTERVAL           613
#define SYS_STORAGE_CREATE_REGION                         614
#define SYS_STORAGE_DELETE_REGION                         615
#define SYS_STORAGE_EXECUTE_DEVICE_COMMAND                616
#define SYS_STORAGE_GET_REGION_ACL                        617
#define SYS_STORAGE_SET_REGION_ACL                        618
#define SYS_STORAGE_ASYNC_SEND_DEVICE_COMMAND             619
#define SYS_STORAGE_GET_REGION_OFFSET                     622
#define SYS_STORAGE_SET_EMULATED_SPEED                    623
#define SYSCALL_STORAGE_OPEN                              SYS_STORAGE_OPEN
#define SYSCALL_STORAGE_CLOSE                             SYS_STORAGE_CLOSE
#define SYSCALL_STORAGE_READ                              SYS_STORAGE_READ
#define SYSCALL_STORAGE_WRITE                             SYS_STORAGE_WRITE
#define SYSCALL_STORAGE_SEND_DEVICE_COMMAND               SYS_STORAGE_SEND_DEVICE_COMMAND
#define SYSCALL_STORAGE_ASYNC_CONFIGURE                   SYS_STORAGE_ASYNC_CONFIGURE
#define SYSCALL_STORAGE_ASYNC_READ                        SYS_STORAGE_ASYNC_READ
#define SYSCALL_STORAGE_ASYNC_WRITE                       SYS_STORAGE_ASYNC_WRITE
#define SYSCALL_STORAGE_ASYNC_CANCEL                      SYS_STORAGE_ASYNC_CANCEL
#define SYSCALL_STORAGE_GET_DEVICE_INFO                   SYS_STORAGE_GET_DEVICE_INFO
#define SYSCALL_STORAGE_GET_DEVICE_CONFIG                 SYS_STORAGE_GET_DEVICE_CONFIG
#define SYSCALL_STORAGE_REPORT_DEVICES                    SYS_STORAGE_REPORT_DEVICES
#define SYSCALL_STORAGE_CONFIGURE_MEDIUM_EVENT            SYS_STORAGE_CONFIGURE_MEDIUM_EVENT
#define SYSCALL_STORAGE_SET_MEDIUM_POLLING_INTERVAL       SYS_STORAGE_SET_MEDIUM_POLLING_INTERVAL
#define SYSCALL_STORAGE_CREATE_REGION                     SYS_STORAGE_CREATE_REGION
#define SYSCALL_STORAGE_DELETE_REGION                     SYS_STORAGE_DELETE_REGION
#define SYSCALL_STORAGE_EXECUTE_DEVICE_COMMAND            SYS_STORAGE_EXECUTE_DEVICE_COMMAND
#define SYSCALL_STORAGE_GET_REGION_ACL                    SYS_STORAGE_GET_REGION_ACL
#define SYSCALL_STORAGE_SET_REGION_ACL                    SYS_STORAGE_SET_REGION_ACL
#define SYSCALL_STORAGE_ASYNC_SEND_DEVICE_COMMAND         SYS_STORAGE_ASYNC_SEND_DEVICE_COMMAND
#define SYSCALL_STORAGE_GET_REGION_OFFSET                 SYS_STORAGE_GET_REGION_OFFSET
#define SYSCALL_STORAGE_SET_EMULATED_SPEED                SYS_STORAGE_SET_EMULATED_SPEED

#define SYS_IO_BUFFER_CREATE                              624
#define SYS_IO_BUFFER_DESTROY                             625
#define SYS_IO_BUFFER_ALLOCATE                            626
#define SYS_IO_BUFFER_FREE                                627
#define SYSCALL_IO_BUFFER_CREATE                          SYS_IO_BUFFER_CREATE
#define SYSCALL_IO_BUFFER_DESTROY                         SYS_IO_BUFFER_DESTROY
#define SYSCALL_IO_BUFFER_ALLOCATE                        SYS_IO_BUFFER_ALLOCATE
#define SYSCALL_IO_BUFFER_FREE                            SYS_IO_BUFFER_FREE

#define SYS_GPIO_SET                                      630
#define SYS_GPIO_GET                                      631
#define SYSCALL_GPIO_SET                                  SYS_GPIO_SET
#define SYSCALL_GPIO_GET                                  SYS_GPIO_GET

#define SYS_FSW_CONNECT_EVENT                             633
#define SYS_FSW_DISCONNECT_EVENT                          634
#define SYSCALL_FSW_CONNECT_EVENT                         SYS_FSW_CONNECT_EVENT
#define SYSCALL_FSW_DISCONNECT_EVENT                      SYS_FSW_DISCONNECT_EVENT

#define SYS_RSX_DEVICE_OPEN                               666
#define SYS_RSX_DEVICE_CLOSE                              667
#define SYS_RSX_MEMORY_ALLOCATE                           668
#define SYS_RSX_MEMORY_FREE                               669
#define SYS_RSX_CONTEXT_ALLOCATE                          670
#define SYS_RSX_CONTEXT_FREE                              671
#define SYS_RSX_CONTEXT_IOMAP                             672
#define SYS_RSX_CONTEXT_IOUNMAP                           673
#define SYS_RSX_CONTEXT_ATTRIBUTE                         674
#define SYS_RSX_DEVICE_MAP                                675
#define SYS_RSX_DEVICE_UNMAP                              676
#define SYS_RSX_ATTRIBUTE                                 677
#define SYSCALL_RSX_DEVICE_OPEN                           SYS_RSX_DEVICE_OPEN
#define SYSCALL_RSX_DEVICE_CLOSE                          SYS_RSX_DEVICE_CLOSE
#define SYSCALL_RSX_MEMORY_ALLOCATE                       SYS_RSX_MEMORY_ALLOCATE
#define SYSCALL_RSX_MEMORY_FREE                           SYS_RSX_MEMORY_FREE
#define SYSCALL_RSX_CONTEXT_ALLOCATE                      SYS_RSX_CONTEXT_ALLOCATE
#define SYSCALL_RSX_CONTEXT_FREE                          SYS_RSX_CONTEXT_FREE
#define SYSCALL_RSX_CONTEXT_IOMAP                         SYS_RSX_CONTEXT_IOMAP
#define SYSCALL_RSX_CONTEXT_IOUNMAP                       SYS_RSX_CONTEXT_IOUNMAP
#define SYSCALL_RSX_CONTEXT_ATTRIBUTE                     SYS_RSX_CONTEXT_ATTRIBUTE
#define SYSCALL_RSX_DEVICE_MAP                            SYS_RSX_DEVICE_MAP
#define SYSCALL_RSX_DEVICE_UNMAP                          SYS_RSX_DEVICE_UNMAP
#define SYSCALL_RSX_ATTRIBUTE                             SYS_RSX_ATTRIBUTE

#define SYS_BDEMU_SEND_COMMAND                            699
#define SYSCALL_BDEMU_SEND_COMMAND                        SYS_BDEMU_SEND_COMMAND

#define SYS_SS_GET_OPEN_PSID                              872
#define SYSCALL_SS_GET_OPEN_PSID                          SYS_SS_GET_OPEN_PSID

#define SYS_DECI3_OPEN                                    880
#define SYS_DECI3_CREATE_EVENT_PATH                       881
#define SYS_DECI3_CLOSE                                   882
#define SYS_DECI3_SEND                                    883
#define SYS_DECI3_RECEIVE                                 884
#define SYSCALL_DECI3_OPEN                                SYS_DECI3_OPEN
#define SYSCALL_DECI3_CREATE_EVENT_PATH                   SYS_DECI3_CREATE_EVENT_PATH
#define SYSCALL_DECI3_CLOSE                               SYS_DECI3_CLOSE
#define SYSCALL_DECI3_SEND                                SYS_DECI3_SEND
#define SYSCALL_DECI3_RECEIVE                             SYS_DECI3_RECEIVE

#define _SYS_PRX_LOAD_MODULE                              480
#define _SYS_PRX_START_MODULE                             481
#define _SYS_PRX_STOP_MODULE                              482
#define _SYS_PRX_UNLOAD_MODULE                            483
#define _SYS_PRX_REGISTER_MODULE                          484
#define _SYS_PRX_QUERY_MODULE                             485
#define _SYS_PRX_REGISTER_LIBRARY                         486
#define _SYS_PRX_UNREGISTER_LIBRARY                       487
#define _SYS_PRX_LINK_LIBRARY                             488
#define _SYS_PRX_UNLINK_LIBRARY                           489
#define _SYS_PRX_QUERY_LIBRARY                            490
#define _SYS_PRX_GET_MODULE_LIST                          494
#define _SYS_PRX_GET_MODULE_INFO                          495
#define _SYS_PRX_GET_MODULE_ID_BY_NAME                    496
#define _SYS_PRX_LOAD_MODULE_ON_MEMCONTAINER              497
#define _SYS_PRX_START                                    498
#define _SYS_PRX_STOP                                     499
#define _SYS_PRX_GET_MODULE_ID_BY_ADDRESS                 461
#define _SYS_PRX_LOAD_MODULE_BY_FD                        463
#define _SYS_PRX_LOAD_MODULE_ON_MEMCONTAINER_BY_FD        464
#define _SYS_PRX_LOAD_MODULE_LIST                         465
#define _SYS_PRX_LOAD_MODULE_LIST_ON_MEMCONTAINER         466
#define _SYSCALL_PRX_LOAD_MODULE                              _SYS_PRX_LOAD_MODULE
#define _SYSCALL_PRX_START_MODULE                             _SYS_PRX_START_MODULE
#define _SYSCALL_PRX_STOP_MODULE                              _SYS_PRX_STOP_MODULE
#define _SYSCALL_PRX_UNLOAD_MODULE                            _SYS_PRX_UNLOAD_MODULE
#define _SYSCALL_PRX_REGISTER_MODULE                          _SYS_PRX_REGISTER_MODULE
#define _SYSCALL_PRX_QUERY_MODULE                             _SYS_PRX_QUERY_MODULE
#define _SYSCALL_PRX_REGISTER_LIBRARY                         _SYS_PRX_REGISTER_LIBRARY
#define _SYSCALL_PRX_UNREGISTER_LIBRARY                       _SYS_PRX_UNREGISTER_LIBRARY
#define _SYSCALL_PRX_LINK_LIBRARY                             _SYS_PRX_LINK_LIBRARY
#define _SYSCALL_PRX_UNLINK_LIBRARY                           _SYS_PRX_UNLINK_LIBRARY
#define _SYSCALL_PRX_QUERY_LIBRARY                            _SYS_PRX_QUERY_LIBRARY
#define _SYSCALL_PRX_GET_MODULE_LIST                          _SYS_PRX_GET_MODULE_LIST
#define _SYSCALL_PRX_GET_MODULE_INFO                          _SYS_PRX_GET_MODULE_INFO
#define _SYSCALL_PRX_GET_MODULE_ID_BY_NAME                    _SYS_PRX_GET_MODULE_ID_BY_NAME
#define _SYSCALL_PRX_LOAD_MODULE_ON_MEMCONTAINER              _SYS_PRX_LOAD_MODULE_ON_MEMCONTAINER
#define _SYSCALL_PRX_START                                    _SYS_PRX_START
#define _SYSCALL_PRX_STOP                                     _SYS_PRX_STOP
#define _SYSCALL_PRX_GET_MODULE_ID_BY_ADDRESS                 _SYS_PRX_GET_MODULE_ID_BY_ADDRESS
#define _SYSCALL_PRX_LOAD_MODULE_BY_FD                        _SYS_PRX_LOAD_MODULE_BY_FD
#define _SYSCALL_PRX_LOAD_MODULE_ON_MEMCONTAINER_BY_FD        _SYS_PRX_LOAD_MODULE_ON_MEMCONTAINER_BY_FD
#define _SYSCALL_PRX_LOAD_MODULE_LIST                         _SYS_PRX_LOAD_MODULE_LIST
#define _SYSCALL_PRX_LOAD_MODULE_LIST_ON_MEMCONTAINER         _SYS_PRX_LOAD_MODULE_LIST_ON_MEMCONTAINER

#define MAX_NUM_OF_SYSTEM_CALLS                                    1024

#endif // DEFINES_H