/**************************************************************************************
 *   Copyright (C) 2023,2024 by Martin Merck                                          *
 *   martin.merck@gmx.de                                                              *
 *                                                                                    *
 *   Permission is hereby granted, free of charge, to any person obtaining a copy     *
 *   of this software and associated documentation files (the "Software"), to deal    *
 *   in the Software without restriction, including without limitation the rights     *
 *   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell        *
 *   copies of the Software, and to permit persons to whom the Software is            *
 *   furnished to do so, subject to the following conditions:                         *
 *                                                                                    *
 *   The above copyright notice and this permission notice shall be included in all   *
 *   copies or substantial portions of the Software.                                  *
 *                                                                                    *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR       *
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,         * 
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE      *
 *   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER           *
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,    *
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE    *
 *   SOFTWARE.                                                                        *
 *                                                                                    *
 **************************************************************************************/

#ifndef HEADER__SER
#define HEADER__SER
#include <termios.h>
#include "nkc.h"

typedef struct {
    speed_t brate;
} ser;

#ifdef __cplusplus
extern "C"
{
#endif

    BYTE ser_pF0_in();
    void ser_pF0_out(BYTE data);
    BYTE ser_pF1_in();
    void ser_pF1_out(BYTE data);
    BYTE ser_pF2_in();
    void ser_pF2_out(BYTE data);
    BYTE ser_pF3_in();
    void ser_pF3_out(BYTE data);
    void ser_reset();

#ifdef __cplusplus
}
#endif

#endif /* HEADER__SER */