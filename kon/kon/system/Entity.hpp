
#pragma once

#include "entt/entity/fwd.hpp"
#include "kon/system/World.hpp"

namespace kon {

/*
 * This struct is a wrapper that allows us to interface
 * with the world registry and manipulate the components
 */
struct Entity {
public:
	Entity(entt::entity t_entity, World *t_world);
	~Entity() = default;

private:
	entt::entity entity;
	World *world;
};

}
