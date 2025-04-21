
#include "System.hpp"
#include "kon/core/Engine.hpp"
#include "kon/core/EngineObject.hpp"

namespace kon {

System::System(Engine *engine) 
	: EngineObject(engine) {
	
}

SystemManager::SystemManager(Engine *engine)
	: EngineObject(engine), m_systems() {

}

SystemManager::~SystemManager() {

}

void SystemManager::addSystem(Shared<System> system) {
	m_systems.push_back(system);
}

void SystemManager::initSystems() {
	for(Shared<System> &s : m_systems) {
		// KN_ENGINE_TRACE("Initing system");
		s->init();
	}
}

void SystemManager::updateSystems() {
	for(Shared<System> &s : m_systems) {
		s->update();
	}
}

void SystemManager::resetSystem() {
	for(Shared<System> &s : m_systems) {
		s.reset();
	}
}

}

