#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"
///现在的log只支持控制台打印！！！！！！！！！！！
namespace Hazel {
	std::shared_ptr<spdlog::logger> Log::m_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::m_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");

		Log::m_CoreLogger = spdlog::stdout_color_mt("Hazel");
		Log::m_CoreLogger->set_level(spdlog::level::trace);

		Log::m_ClientLogger = spdlog::stdout_color_mt("Client");
		Log::m_ClientLogger->set_level(spdlog::level::trace);
	}
}