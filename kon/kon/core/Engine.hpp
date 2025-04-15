
#pragma once

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
};

}

