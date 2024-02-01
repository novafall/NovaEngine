#pragma once


#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace ne
{

	class NE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		 
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};


}

//内部日志宏
#define NE_CORE_TRACE(...)   ::ne::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NE_CORE_INFO(...)    ::ne::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NE_CORE_WARN(...)    ::ne::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NE_CORE_ERROR(...)   ::ne::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NE_CORE_FATAL(...)   ::ne::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//客户端日志宏
#define NE_TRACE(...)        ::ne::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NE_INFO(...)         ::ne::Log::GetClientLogger()->info(__VA_ARGS__)
#define NE_WARN(...)         ::ne::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NE_ERROR(...)        ::ne::Log::GetClientLogger()->error(__VA_ARGS__)
#define NE_FATAL(...)        ::ne::Log::GetClientLogger()->fatal(__VA_ARGS__)