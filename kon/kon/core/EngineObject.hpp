
#pragma once

#include "kon/core/Engine.hpp"
#include "kon/core/UUID.hpp"
#include <string>

namespace kon {

/*
 * Defines a type for the engine with a name and a unique hash
 */
struct TypeInfo {
	const std::string name;
	const UUID id;
	const TypeInfo *parent; // this is just a raw pointer because its stack stuff
};

/* 
 * Defines an instantiatable object that is used by the kon game engine
 * This is mainly used to help with sending events to objects
 */
class EngineObject {
public:
	EngineObject(Shared<Engine> t_engine);
	~EngineObject();

	static const TypeInfo *GetStaticTypeInfo();
	virtual const TypeInfo *getTypeInfo() const;

	virtual std::string toString() const;

protected:
	Shared<Engine> engine;
};

#define KN_OBJECT(Parent, TypeName) public: \
										static const TypeInfo *GetStaticTypeInfo()   { static TypeInfo info{#TypeName, UUID(), Parent::GetStaticTypeInfo()->parent}; return &info; } \
										virtual const TypeInfo *getTypeInfo() const	 { return TypeName::GetStaticTypeInfo(); };

}

