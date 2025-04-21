
#include "Engine.hpp"

#include "kon/core/Util.hpp"
#include <algorithm>
#include <kon/system/System.hpp>
#include <memory>


namespace kon {

Engine::Engine()
	: log("log/engine.log", "ENGINE") {

	systemsManager = new SystemManager(this);
}

Engine::~Engine() {
	delete systemsManager;
}

void Engine::start() {

}

void Engine::update() {

}

void Engine::clear() {

}

}

