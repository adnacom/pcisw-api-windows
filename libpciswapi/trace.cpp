/*!
 * \file `trace.cpp`
 * Debug trace helpers implementation for the Adnacom API library.
 * \copyright Copyright 2026 Adnacom Inc.
 * SPDX-License-Identifier: MIT
 */
#include "trace.h"

#include <cstring>
#include <cstdarg>
#include <cstdio>

#include <windows.h>


void traceImpl_(const wchar_t* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	wchar_t buffer[256];
	vswprintf_s(buffer, fmt, args);

	va_end(args);

	::OutputDebugString(buffer);
}

