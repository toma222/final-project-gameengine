
#pragma once

// ! WARNING this can make our compile times just splendid so please be carefull with the includes
#include <entt/entity/fwd.hpp>
#include <entt/entity/registry.hpp>

#include "kon/core/Engine.hpp"
#include "kon/core/EngineObject.hpp"

namespace kon {

/*
 * Contains all the entities, curtiousie of the entt library
 * The world class is passed to the systems so that they can modify it and such
 */
class World : public EngineObject {
public:
	World(Engine *engine);
	~World();

	

private:
	entt::registry m_registry;
};

}

