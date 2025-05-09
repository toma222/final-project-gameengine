
#include "EngineObject.hpp"
#include <string>

namespace kon {

EngineObject::EngineObject(Engine *t_engine)
	: engine(t_engine) {}

EngineObject::~EngineObject() {

}

const TypeInfo *EngineObject::GetStaticTypeInfo() {
	static const TypeInfo info {"EngineObject", UUID(), nullptr};
	return &info;
}

const TypeInfo *EngineObject::getTypeInfo() const {
	return EngineObject::GetStaticTypeInfo();
}

std::string EngineObject::toString() const {
	std::string r = "[";
	r += getTypeInfo()->name;
	r += ", ";
	r += std::to_string(getTypeInfo()->id.uuid);
	r += "]";
	return r;
}

}

