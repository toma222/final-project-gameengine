
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

void SystemManager::addSystem(System *system) {
	m_systems.push_back(system);
}

void SystemManager::initSystems() {
	for(System *s : m_systems) {

		s->init();
	}
}

void SystemManager::updateSystems() {
	for(System *s : m_systems) {
		s->update();
	}
}

void SystemManager::resetSystem() {
	for(System *s : m_systems) {
		s->reset();
	}
}

}

