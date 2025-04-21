
#include "kon/core/EngineObject.hpp"
#include "kon/core/Util.hpp"
#include <cstdio>
#include <kon/core/Engine.hpp>
#include <kon/core/Logging.hpp>
#include <kon/system/System.hpp>

using namespace kon;

class TestSystem : public kon::System {
KN_OBJECT(System, TestSystem)

public:
	TestSystem(kon::Engine *engine) 
			: kon::System(engine) {
		KN_ENGINE_TRACE("Test system created im here");
	}

	~TestSystem() = default;

public:
	void init() override {}
	void update() override {}
	void reset() override {}

	void printsomething() const {

		engine->log.getLog()->trace("yoo");

	}
};

int main(void) {
	Engine *engine = new Engine();

	engine->systemsManager->addSystem(new TestSystem(engine));
}

