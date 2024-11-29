#pragma once

#ifndef NOMINMAX
    #define NOMINMAX  // prevent windows redefining min/max
#endif

#ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN
#endif


// Fix for spdlog / winuser.h / Arduino.h defining INPUT
#ifdef INPUT
#undef INPUT
#endif


#include <windows.h>
