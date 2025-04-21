
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
	Logger log;
	SystemManager *systemsManager;
};

#define KN_ENGINE_TRACE(...) engine->log.getLog()->trace(__VA_ARGS__);
#define KN_ENGINE_INFO(...) engine->log.getLog()->info(__VA_ARGS__);
#define KN_ENGINE_WARN(...) engine->log.getLog()->warn(__VA_ARGS__);
#define KN_ENGINE_ERROR(...) engine->log.getLog()->error(__VA_ARGS__);

}

