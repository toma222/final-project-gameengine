
#include "System.hpp"
<<<<<<< HEAD
=======
#include "kon/core/Engine.hpp"
>>>>>>> parent of 4154548 (updated git ignore)
#include "kon/core/EngineObject.hpp"

namespace kon {

<<<<<<< HEAD
System::System(Shared<Engine> engine) 
=======
System::System(Engine *engine) 
>>>>>>> parent of 4154548 (updated git ignore)
	: EngineObject(engine) {
	
}

<<<<<<< HEAD
SystemManager::SystemManager(Shared<Engine> engine)
=======
SystemManager::SystemManager(Engine *engine)
>>>>>>> parent of 4154548 (updated git ignore)
	: EngineObject(engine), m_systems() {

}

SystemManager::~SystemManager() {

}

void SystemManager::addSystem(Shared<System> system) {
	m_systems.push_back(system);
}

void SystemManager::initSystems() {
	for(Shared<System> &s : m_systems) {
<<<<<<< HEAD
=======
		// KN_ENGINE_TRACE("Initing system");
>>>>>>> parent of 4154548 (updated git ignore)
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

