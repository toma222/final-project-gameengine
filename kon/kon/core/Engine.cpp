
#include "Engine.hpp"
<<<<<<< HEAD
=======
#include "kon/core/Util.hpp"
#include <algorithm>
#include <kon/system/System.hpp>
#include <memory>
>>>>>>> parent of 4154548 (updated git ignore)

namespace kon {

Engine::Engine()
	: log("log/engine.log", "ENGINE") {
	
<<<<<<< HEAD
	
=======
	// Shared<Engine> engine = shared_from_this();
	systemsManager = std::make_unique<SystemManager>(nullptr);
>>>>>>> parent of 4154548 (updated git ignore)
}

Engine::~Engine() {

}

void Engine::start() {

}

void Engine::update() {

}

void Engine::clear() {

}

}

