#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"



namespace Hazel {
	class HAZEL_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() { return m_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger> GetClientLogger() { return m_ClientLogger; }
	private:
		Log();
	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogger;
		static std::shared_ptr<spdlog::logger> m_ClientLogger;
	};
}

#define HZ_CORE_INFO(...)   ::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__);
#define HZ_CORE_WARN(...)   ::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define HZ_CORE_ERROR(...)  ::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__);
#define HZ_CORE_TRACK(...)  ::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define HZ_CORE_FATAL(...)  ::Hazel::Log::GetCoreLogger()->fatal(__VA__ARGS__);

#define HZ_CLIENT_INFO(...)   ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__);
#define HZ_CLIENT_WARN(...)   ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__);
#define HZ_CLIENT_ERROR(...)  ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__);
#define HZ_CLIENT_TRACK(...)  ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__);
#define HZ_CLIENT_FATAL(...)  ::Hazel::Log::GetClientLogger()->fatal(__VA__ARGS__);