
#pragma once

#include "kon/core/Logging.hpp"

namespace kon {

class SystemManager;

class Engine {
public:
	Engine();
	~Engine();

	/*
	 * Call this function when the engine has been set up
	 * Accordingly and you are ready to intilize the systems
	 */
	void start();

	/*
	 * Updates the game world and all the systems 
	 */
	void update();

	/*
	 * Clears away the entire engine
	 */
	void clear();



public:
	SystemManager *systemsManager;
};

#define KN_ENGINE_TRACE(...) Logger::GetGlobalLog()->getLog()->trace(__VA_ARGS__);
#define KN_ENGINE_INFO(...) Logger::GetGlobalLog()->getLog()->info(__VA_ARGS__);
#define KN_ENGINE_WARN(...) Logger::GetGlobalLog()->getLog()->warn(__VA_ARGS__);
#define KN_ENGINE_ERROR(...) Logger::GetGlobalLog()->getLog()->werror(__VA_ARGS__);

}

