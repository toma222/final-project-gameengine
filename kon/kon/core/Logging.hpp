
#pragma once

#include <string>
#include <kon/core/Util.hpp>

#include <spdlog/logger.h>

namespace kon {

using Log = spdlog::logger;

class Logger {
public:
	Logger(std::string outPath, std::string name);
	~Logger();

	const Shared<Log> getLog() { return m_log; }

private:
	Shared<Log> m_log;
};

}

