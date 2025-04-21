
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
<<<<<<< HEAD
	TestSystem(kon::Shared<kon::Engine> engine) 
=======
	TestSystem(kon::Engine *engine) 
>>>>>>> parent of 4154548 (updated git ignore)
		: kon::System(engine) {
		
		KN_ENGINE_TRACE("Test system created im here");
	}

	~TestSystem() = default;

public:
	void init() override {}
	void update() override {}
	void reset() override {}

	void printsomething() const {
<<<<<<< HEAD
		KN_ENGINE_INFO("YOOO");
=======
		engine->log.getLog()->trace("yoo");
		// KN_ENGINE_INFO("YOOO");
>>>>>>> parent of 4154548 (updated git ignore)
	}
};

int main(void) {
<<<<<<< HEAD
	kon::Shared<kon::Engine> engine = kon::CreateShared<kon::Engine>();

	kon::SystemManager manager(engine);
	manager.addSystem(kon::CreateShared<TestSystem>(engine));

	const auto *ts = manager.getSystem<TestSystem>();
	
	if(ts == nullptr)
		KN_ENGINE_ERROR("you messed up lmao");

	ts->printsomething();
	std::string aa = ts->toString();
	// printf("%s\n", aa.c_str());
	KN_ENGINE_INFO("TestSystem toString: {}", ts->toString().c_str());
=======
	// kon::Shared<kon::Engine> engine = kon::CreateShared<kon::Engine>();
	Engine *engine = new Engine();

	// kon::SystemManager manager(engine);
	engine->systemsManager->addSystem(kon::CreateShared<TestSystem>(engine));
>>>>>>> parent of 4154548 (updated git ignore)
}

