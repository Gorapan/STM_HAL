/* Copyright (C) 2015  Nils Weiss
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef _TRACE_H_
#define _TRACE_H_

#define ZONE_ERROR 0x00000001
#define ZONE_WARNING 0x00000002
#define ZONE_INFO 0x00000004
#define ZONE_VERBOSE 0x00000008

#if defined(DEBUG)
#include "DebugInterface.h"

static const dev::DebugInterface terminal;

#define Trace(ZONE, ...) do { \
        if (g_DebugZones & (ZONE)) { \
            terminal.print("%s:%u: ", __FILE__, __LINE__); \
            terminal.print(__VA_ARGS__); \
        } \
} while (0)

#define TraceInit() do { \
        terminal.clearTerminal(); \
        terminal.printStartupMessage(); \
} while (0)

#else
#define Trace(ZONE, ...)
#define TraceInit()
#endif
#endif /* #ifndef _TRACE_H_ */
