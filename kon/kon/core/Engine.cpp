
#include "Engine.hpp"

#include "kon/core/Logging.hpp"
#include "kon/core/Util.hpp"
#include <algorithm>
#include <kon/system/System.hpp>
#include <memory>


namespace kon {

Engine::Engine() {
	Logger::GetGlobalLog()->getLog()->trace("");
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

