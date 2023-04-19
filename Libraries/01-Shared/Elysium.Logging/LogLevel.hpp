/*
===========================================================================

Copyright (c) waYne (CAM). All rights reserved.

===========================================================================
*/
#ifndef ELYSIUM_LOGGING_LOGLEVEL
#define ELYSIUM_LOGGING_LOGLEVEL

#ifdef _MSC_VER
#pragma once
#endif

#ifndef ELYSIUM_CORE_INTEGER
#endif

#ifndef ELYSIUM_CORE_PRIMITIVES
#include "../../../../Elysium-Core/Libraries/01-Shared/Elysium.Core/Primitives.hpp"
#endif

#ifndef ELYSIUM_CORE_SYSTEM
#include "../../../../Elysium-Core/Libraries/01-Shared/Elysium.Core/System.hpp"
#endif

namespace Elysium::LOGGING
{
#if defined ELYSIUM_CORE_OS_WINDOWS
	enum class LogLevel : Elysium::Core::uint8_t
#elif defined ELYSIUM_CORE_OS_ANDROID
	enum class LogLevel
#else
#error "undefined os"
#endif
	{
        Trace = 1,

        Info = 2,

        Debug = 3,

        Warning = 4,

        Error = 5,

        Critical = 6
	};
}
#endif
