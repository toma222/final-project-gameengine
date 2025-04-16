
#pragma once

#include <kon/core/Util.hpp>
#include <vector>
#include <functional>

namespace kon {

/* 
 * Defines a system that acts like an API that can update
 * a world with entites and components
 */
class System {
public:
	System() = default;
	virtual ~System() = default;

public:
	virtual void init() = 0;
	virtual void update() = 0;
	virtual void reset() = 0;
};

/* 
 * Manages the systems and their update cycle
 * mainly just stores them in an redily accessable way
 */
class SystemManager final {
public:
	SystemManager();
	~SystemManager();

public:
	void addSystem(Shared<System> system);
	// void destroySystem();
	
	template<typename T>
	Shared<System> getSystem() {

	}

	template<typename T>
	const System &getSystem() {

	}

	void iterate(std::function<void(Shared<System>)> f);

private:
	std::vector<Shared<System>> m_systems;
};

}

