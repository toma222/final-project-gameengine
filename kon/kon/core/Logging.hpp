
#pragma once

#include <string>
#include <kon/core/Util.hpp>

#include <spdlog/logger.h>

namespace kon {

using Log = spdlog::logger;

/*
 * This defines logger that does what it says on the tin
 * it also holds the global engine log
 * TODO : better
 */
class Logger {
public:
	Logger(std::string outPath, std::string name);
	~Logger();

	static void InitEngineLog();
	static void DestroyEngineLog();

	const Shared<Log> getLog() { return m_log; }

	static Logger *GetGlobalLog() { return konGlobalLog; }

private:
	Shared<Log> m_log;

	static Logger *konGlobalLog;
};



}

