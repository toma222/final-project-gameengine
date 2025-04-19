
#pragma once

#include "kon/core/Logging.hpp"
namespace kon {

/* 
 * This class is holds the context of the entire engine
 * So instead of having some sort of Context class we have the
 * Engine class that a user application can do whatever they want with
 */
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
	kon::Logger log;
};

#define KN_ENGINE_TRACE(...) engine->log.getLog()->trace(__VA_ARGS__);
#define KN_ENGINE_INFO(...) engine->log.getLog()->info(__VA_ARGS__);
#define KN_ENGINE_WARN(...) engine->log.getLog()->warn(__VA_ARGS__);
#define KN_ENGINE_ERROR(...) engine->log.getLog()->error(__VA_ARGS__);

}

