
#include "Engine.hpp"
#include "kon/core/Util.hpp"
#include <algorithm>
#include <kon/system/System.hpp>
#include <memory>

namespace kon {

Engine::Engine()
	: log("log/engine.log", "ENGINE") {
	
	// Shared<Engine> engine = shared_from_this();
	systemsManager = std::make_unique<SystemManager>(nullptr);
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

