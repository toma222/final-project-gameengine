
#pragma once

#include "kon/core/Logging.hpp"
<<<<<<< HEAD
namespace kon {

=======
// #include "kon/system/System.hpp"

namespace kon {

class SystemManager;

>>>>>>> parent of 4154548 (updated git ignore)
/* 
 * This class is holds the context of the entire engine
 * So instead of having some sort of Context class we have the
 * Engine class that a user application can do whatever they want with
 */
<<<<<<< HEAD
class Engine {
=======
class Engine : std::enable_shared_from_this<Engine> {
>>>>>>> parent of 4154548 (updated git ignore)
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

<<<<<<< HEAD
public:
	kon::Logger log;
=======
	std::shared_ptr<Engine> getptr()
    {
        return shared_from_this();
    }

public:
	kon::Logger log;
	Unique<SystemManager> systemsManager;
>>>>>>> parent of 4154548 (updated git ignore)
};

#define KN_ENGINE_TRACE(...) engine->log.getLog()->trace(__VA_ARGS__);
#define KN_ENGINE_INFO(...) engine->log.getLog()->info(__VA_ARGS__);
#define KN_ENGINE_WARN(...) engine->log.getLog()->warn(__VA_ARGS__);
#define KN_ENGINE_ERROR(...) engine->log.getLog()->error(__VA_ARGS__);

}

