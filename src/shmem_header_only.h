#ifndef _shmem_header_only_h
#define _shmem_header_only_h

#include "__shmem_clear_lock.c"
#include "__shmem_lock_ptr.c"
#include "__shmem_set_lock.c"
#include "__shmem_set_lock_self.c"
#include "__shmem_test_lock.c"
#include "shmem_align.c"
#include "shmem_alltoall32.c"
#include "shmem_alltoall64.c"
#include "shmem_alltoalls32.c"
#include "shmem_alltoalls64.c"
#include "shmem_barrier.c"
#include "shmem_barrier_all.c"
#include "shmem_broadcast32.c"
#include "shmem_broadcast64.c"
#include "shmem_char_iget.c"
#include "shmem_char_iput.c"
#include "shmem_clear_lock.c"
#include "shmem_collect32.c"
#include "shmem_collect64.c"
#include "shmem_complexd_prod_to_all.c"
#include "shmem_complexd_sum_to_all.c"
#include "shmem_complexf_prod_to_all.c"
#include "shmem_complexf_sum_to_all.c"
#include "shmem_double_fetch.c"
#include "shmem_double_iget.c"
#include "shmem_double_iput.c"
#include "shmem_double_max_to_all.c"
#include "shmem_double_min_to_all.c"
#include "shmem_double_prod_to_all.c"
#include "shmem_double_set.c"
#include "shmem_double_sum_to_all.c"
#include "shmem_double_swap.c"
#include "shmem_fcollect32.c"
#include "shmem_fcollect64.c"
#include "shmem_finalize.c"
#include "shmem_float_fetch.c"
#include "shmem_float_iget.c"
#include "shmem_float_iput.c"
#include "shmem_float_max_to_all.c"
#include "shmem_float_min_to_all.c"
#include "shmem_float_prod_to_all.c"
#include "shmem_float_set.c"
#include "shmem_float_sum_to_all.c"
#include "shmem_float_swap.c"
#include "shmem_free.c"
#include "shmem_get128.c"
#include "shmem_get128_nbi.c"
#include "shmem_get16.c"
#include "shmem_get16_nbi.c"
#include "shmem_get32.c"
#include "shmem_get32_nbi.c"
#include "shmem_get64.c"
#include "shmem_get64_nbi.c"
#include "shmem_get8.c"
#include "shmem_get8_nbi.c"
#include "shmem_global_exit.c"
#include "shmem_info_get_name.c"
#include "shmem_info_get_version.c"
#include "shmem_init.c"
#include "shmem_int_add.c"
#include "shmem_int_and_to_all.c"
#include "shmem_int_cswap.c"
#include "shmem_int_fadd.c"
#include "shmem_int_fetch.c"
#include "shmem_int_finc.c"
#include "shmem_int_iget.c"
#include "shmem_int_inc.c"
#include "shmem_int_iput.c"
#include "shmem_int_max_to_all.c"
#include "shmem_int_min_to_all.c"
#include "shmem_int_or_to_all.c"
#include "shmem_int_prod_to_all.c"
#include "shmem_int_set.c"
#include "shmem_int_sum_to_all.c"
#include "shmem_int_swap.c"
#include "shmem_int_wait.c"
#include "shmem_int_wait_until.c"
#include "shmem_int_xor_to_all.c"
#include "shmem_long_add.c"
#include "shmem_long_and_to_all.c"
#include "shmem_long_cswap.c"
#include "shmem_long_fadd.c"
#include "shmem_long_fetch.c"
#include "shmem_long_finc.c"
#include "shmem_long_iget.c"
#include "shmem_long_inc.c"
#include "shmem_long_iput.c"
#include "shmem_long_max_to_all.c"
#include "shmem_long_min_to_all.c"
#include "shmem_long_or_to_all.c"
#include "shmem_long_prod_to_all.c"
#include "shmem_long_set.c"
#include "shmem_long_sum_to_all.c"
#include "shmem_long_swap.c"
#include "shmem_long_wait.c"
#include "shmem_long_wait_until.c"
#include "shmem_long_xor_to_all.c"
#include "shmem_longdouble_iget.c"
#include "shmem_longdouble_iput.c"
#include "shmem_longdouble_max_to_all.c"
#include "shmem_longdouble_min_to_all.c"
#include "shmem_longdouble_prod_to_all.c"
#include "shmem_longdouble_sum_to_all.c"
#include "shmem_longlong_add.c"
#include "shmem_longlong_and_to_all.c"
#include "shmem_longlong_cswap.c"
#include "shmem_longlong_fadd.c"
#include "shmem_longlong_fetch.c"
#include "shmem_longlong_finc.c"
#include "shmem_longlong_iget.c"
#include "shmem_longlong_inc.c"
#include "shmem_longlong_iput.c"
#include "shmem_longlong_max_to_all.c"
#include "shmem_longlong_min_to_all.c"
#include "shmem_longlong_or_to_all.c"
#include "shmem_longlong_prod_to_all.c"
#include "shmem_longlong_set.c"
#include "shmem_longlong_sum_to_all.c"
#include "shmem_longlong_swap.c"
#include "shmem_longlong_wait.c"
#include "shmem_longlong_wait_until.c"
#include "shmem_longlong_xor_to_all.c"
#include "shmem_malloc.c"
#include "shmem_mman.c"
#include "shmem_ptr.c"
#include "shmem_put128.c"
#include "shmem_put128_nbi.c"
#include "shmem_put16.c"
#include "shmem_put16_nbi.c"
#include "shmem_put32.c"
#include "shmem_put32_nbi.c"
#include "shmem_put64.c"
#include "shmem_put64_nbi.c"
#include "shmem_put8.c"
#include "shmem_put8_nbi.c"
#include "shmem_quiet.c"
#include "shmem_realloc.c"
#include "shmem_set_lock.c"
#include "shmem_short_and_to_all.c"
#include "shmem_short_iget.c"
#include "shmem_short_iput.c"
#include "shmem_short_max_to_all.c"
#include "shmem_short_min_to_all.c"
#include "shmem_short_or_to_all.c"
#include "shmem_short_prod_to_all.c"
#include "shmem_short_sum_to_all.c"
#include "shmem_short_wait.c"
#include "shmem_short_wait_until.c"
#include "shmem_short_xor_to_all.c"
#include "shmem_test_lock.c"
#include "shmemx_clear_lock_pe.c"
#include "shmemx_memcpy.c"
#include "shmemx_memcpy_nbi.c"
#include "shmemx_set_lock_pe.c"
#include "shmemx_test_lock_pe.c"

#endif
