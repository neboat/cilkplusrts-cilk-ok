#include "cilktool.h"
#include "reducertool.h"

#ifdef __cplusplus
#define EXTERN_C extern "C" {
#define EXTERN_C_END }
#else
#define EXTERN_C
#define EXTERN_C_END
#endif

EXTERN_C

typedef struct __cilkrts_stack_frame __cilkrts_stack_frame;

void cilk_tool_init(void) { }
void cilk_tool_destroy(void) { }
void cilk_tool_print(void) { }

void cilk_tool_c_function_enter(void* rip) { }
void cilk_tool_c_function_leave(void* rip) { }
                                               
void cilk_enter_begin(__cilkrts_stack_frame* sf, void* rip) { }
void cilk_enter_helper_begin(__cilkrts_stack_frame* sf, void* rip) { }
void cilk_enter_end (__cilkrts_stack_frame* sf, void* rsp) { }
void cilk_spawn_prepare (__cilkrts_stack_frame* sf) { }
void cilk_spawn_or_continue (int in_continuation) { }
void cilk_detach_begin (__cilkrts_stack_frame* parent) { }
void cilk_detach_end (void) { }
void cilk_sync_begin (__cilkrts_stack_frame* sf) { }
void cilk_sync_end (__cilkrts_stack_frame* sf) { }
void cilk_leave_begin (__cilkrts_stack_frame *sf) { }
void cilk_leave_end (void) { }

void cilk_begin_reduce_strand(void) { }
void cilk_end_reduce_strand(void) { }
void cilk_begin_update_strand(void) { }
void cilk_end_update_strand(void) { }

void cilk_set_reducer(void *reducer, void *rip, const char *function, int line) { }
void cilk_read_reducer(void *reducer, void *rip, const char *function, int line) { }

EXTERN_C_END
