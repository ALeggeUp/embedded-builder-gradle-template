/*
 * main.h
 *
 * Created by Stephen Legge <stephen@aleggeup.com>, October 2016
 *
 * Copyright (C) 2016-2017 [ A Legge Up ], Stephen Legge <stephen@aleggeup.com>
 * All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of [ A Legge Up ], [ A Legge Up Consulting] nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MAIN_H

#define MAIN_H

// #ifdef UTEST
extern "C" {
    void _exit( int ) { while (1); }
    unsigned int _getpid() { return 0; }
    int _kill( int, int ) { return 0; }
    void _sbrk( int ) {}
    int _fstat (int, void*) { return 0; }
    int _write( int, char, int ) { return 0; }
    int _read( int, char, int ) { return 0; }
    int _lseek( int, int ) { return 0; }
    int _close( int ) { return 0; }
    int _isatty( int ) { return 0; }
    int _open( const char *path, int access ) { return 0; }

    void _exit_r( int ) { while (1); }
    unsigned int _getpid_r() { return 0; }
    int _kill_r( int, int ) { return 0; }
    void _sbrk_r( int ) {}
    int _fstat_r (int, void*) { return 0; }
    int _write_r( int, char, int ) { return 0; }
    int _read_r( int, char, int ) { return 0; }
    int _lseek_r( int, int ) { return 0; }
    int _close_r( int ) { return 0; }
    int _isatty_r( int ) { return 0; }
    int _open_r( const char *path, int access ) { return 0; }
}
// #endif

#endif
