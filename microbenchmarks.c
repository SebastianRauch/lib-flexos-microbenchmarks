/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021, Hugo Lefeuvre <hugo.lefeuvre@manchester.ac.uk>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdint.h>
#include <stddef.h>
#include <flexos/isolation.h>
#include <flexos/microbenchmarks/isolated.h>
#include <uk/thread.h>

/* shared for communication test */
int __attribute__((section(".data_shared"))) comm;

void *comm_test_func(void *arg) {
	volatile int *state = (volatile int *) (&comm);
	while (1) {
		if (*state = STATE_SENT) {
			*state = STATE_RET;
		}
	}
	return NULL;
}

__attribute__ ((noinline)) void start_comm_test(void *arg) {
	struct uk_thread *thread = uk_thread_current();
    uk_sched_thread_create(thread->sched, NULL, NULL, (void*) &comm_test_func, arg);
	uk_pr_info("created communication thread\n");
	return;
}


/*
 * make sure function does not get inlined
 */
__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_0(void) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_0r(void) {
    asm volatile ("");
    return 42;
}

__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_1(
    uint64_t arg1) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_1r(
    uint64_t arg1) {
    asm volatile ("");
    return arg1;
}

__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_2(
    uint64_t arg1, uint64_t arg2) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_2r(
    uint64_t arg1, uint64_t arg2) {
    asm volatile ("");
    return arg2;
}

__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_3(
    uint64_t arg1, uint64_t arg2, uint64_t arg3) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_3r(
    uint64_t arg1, uint64_t arg2, uint64_t arg3) {
    asm volatile ("");
    return arg3;
}

__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_4(
    uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_4r(
    uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4) {
    asm volatile ("");
    return arg4;
}

__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_5(
    uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_5r(
    uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5) {
    asm volatile ("");
    return arg5;
}

__attribute__ ((noinline)) void flexos_microbenchmarks_fcall_6(
    uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6) {
    asm volatile ("");
}

__attribute__ ((noinline)) uint64_t flexos_microbenchmarks_fcall_6r(
    uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6) {
    asm volatile ("");
    return arg6;
}
