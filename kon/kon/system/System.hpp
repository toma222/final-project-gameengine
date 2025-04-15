
#pragma once

#include <kon/core/Util.hpp>

namespace kon {

/* 
 * Defines a system that acts like an API that can update
 * a world with entites and components
 */
class System {
public:
	System();
	~System();

public:
	virtual void init() = 0;
	virtual void update() = 0;
	virtual void reset() = 0;
};

/* 
 *
class SystemManager {

};

}

