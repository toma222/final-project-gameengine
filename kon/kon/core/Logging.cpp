
#include "Logging.hpp"

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

namespace kon {

Logger::Logger(std::string outPath, std::string name) {
	std::vector<spdlog::sink_ptr> logSinks;
	logSinks.emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
	logSinks.emplace_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(outPath.c_str(), true));

	logSinks[0]->set_pattern("%^[%T %n] %v%$");
	logSinks[1]->set_pattern("[%T] [%l] %n: %v");

	m_log = std::make_shared<spdlog::logger>(name, begin(logSinks), end(logSinks));
	spdlog::register_logger(m_log);
	m_log->set_level(spdlog::level::trace);
	m_log->flush_on(spdlog::level::trace);
}

Logger::~Logger() {

}

void Logger::InitEngineLog() {
	konGlobalLog = new Logger("log/globallog.log", "GLOBAL");
}

void Logger::DestroyEngineLog() {
	delete konGlobalLog;
}

}

