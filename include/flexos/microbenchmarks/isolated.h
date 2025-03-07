/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021, Hugo Lefeuvre <hugo.lefeuvre@manchester.ac.uk>
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

#ifndef LIBFLEXOSMICROBENCHMARKS_H
#define LIBFLEXOSMICROBENCHMARKS_H

#define STATE_IDLE 0
#define STATE_SENT 1
#define STATE_RET 2

extern int comm;

void start_comm_test(void *arg);

void flexos_microbenchmarks_fcall_0(void);
uint64_t flexos_microbenchmarks_fcall_0r(void);

void flexos_microbenchmarks_fcall_1(uint64_t arg1);
uint64_t flexos_microbenchmarks_fcall_1r(uint64_t arg1);

void flexos_microbenchmarks_fcall_2(uint64_t arg1, uint64_t arg2);
uint64_t flexos_microbenchmarks_fcall_2r(uint64_t arg1, uint64_t arg2);

void flexos_microbenchmarks_fcall_3(uint64_t arg1, uint64_t arg2, uint64_t arg3);
uint64_t flexos_microbenchmarks_fcall_3r(uint64_t arg1, uint64_t arg2, uint64_t arg3);

void flexos_microbenchmarks_fcall_4(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);
uint64_t flexos_microbenchmarks_fcall_4r(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);

void flexos_microbenchmarks_fcall_5(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5);
uint64_t flexos_microbenchmarks_fcall_5r(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5);

void flexos_microbenchmarks_fcall_6(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6);
uint64_t flexos_microbenchmarks_fcall_6r(uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6);
#endif /* LIBFLEXOSMICROBENCHMARKS_H */
