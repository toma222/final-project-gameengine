
#pragma once

#include "kon/core/Engine.hpp"
#include "kon/core/EngineObject.hpp"
#include <kon/core/Util.hpp>
#include <vector>

namespace kon {

/* 
 * Defines a system that acts like an API that can update
 * a world with entites and components
 */
class System : public EngineObject {
KN_OBJECT(EngineObject, System)

public:
	System(Engine *engine);

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
class SystemManager : public EngineObject {
public:
	SystemManager(Engine *engine);
	~SystemManager();

public:
	void addSystem(System *system);

	/*
	 * This function finds the system with a given type
	 * Returns nullptr if it cant find anything
	 */
	template<typename T>
	const T *getSystem() {
		for(System *s : m_systems) {
			if(s->getTypeInfo()->name.compare(T::GetStaticTypeInfo()->name) == 0) {
				return dynamic_cast<const T*>(s);
			}
		}

		return nullptr;
	}

	void initSystems();
	void updateSystems();
	void resetSystem();

public:
	size_t getSystemCount() const { return m_systems.size(); }

private:
	std::vector<System*> m_systems;
};

}

