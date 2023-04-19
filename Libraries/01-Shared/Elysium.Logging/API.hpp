/*
===========================================================================

Copyright (c) waYne (CAM). All rights reserved.

===========================================================================
*/
#ifndef ELYSIUM_LOGGING_API

#ifdef _MSC_VER
#pragma once
#endif

#ifndef ELYSIUM_CORE_TEMPLATE_SYSTEM_OPERATINGSYSTEM
#include "../../../../Elysium-Core/Libraries/01-Shared/Elysium.Core.Template/OperatingSystem.hpp"
#endif

#if defined ELYSIUM_CORE_OS_WINDOWS
#if defined ELYSIUMLOGGING_EXPORTS
#define ELYSIUM_LOGGING_API __declspec(dllexport)
#else
#define ELYSIUM_LOGGING_API __declspec(dllimport)
#endif
#else
#error "unsupported os"
#endif

#endif
