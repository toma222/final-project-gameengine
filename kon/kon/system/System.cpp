
#include "System.hpp"

namespace kon {

SystemManager::SystemManager() {

}

SystemManager::~SystemManager() {

}

void SystemManager::addSystem(Shared<System> system) {

}

void SystemManager::iterate(std::function<void(Shared<System>)> f) {
	for(Shared<System> system : m_systems) {
		f(system);
	}
}

}

