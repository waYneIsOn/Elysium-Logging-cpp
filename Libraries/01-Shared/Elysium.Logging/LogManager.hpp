/*
===========================================================================

Copyright (c) waYne (CAM). All rights reserved.

===========================================================================
*/
#ifndef ELYSIUM_LOGGING_LOGMANAGER
#define ELYSIUM_LOGGING_LOGMANAGER

#ifdef _MSC_VER
#pragma once
#endif

#ifndef ELYSIUM_LOGGING_API
#include "API.hpp"
#endif

namespace Elysium::Logging
{
	class ELYSIUM_LOGGING_API LogManager final
	{
	public:
		LogManager() = delete;

		LogManager(const LogManager& Source) = delete;

		LogManager(LogManager&& Right) noexcept = delete;

		~LogManager() = delete;
	public:
		LogManager& operator=(const LogManager& Source) = delete;

		LogManager& operator=(LogManager&& Right) noexcept = delete;
	public:
		static void Initialize();

		static void Shutdown();
	};
}
#endif
