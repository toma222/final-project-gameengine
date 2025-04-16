
#include <kon/core/Engine.hpp>
#include <kon/core/Logging.hpp>
#include <kon/system/System.hpp>

class TestSystem : public kon::System {
public:
	TestSystem() = default;
	~TestSystem() = default;

public:
	void init() override {}
	void update() override {}
	void reset() override {}
};

int main(void) {
	kon::Engine e;
	kon::Logger log("log/engine.log", "engine");
	log.getLog()->trace("whup gang");
	log.getLog()->info("whup gang");
	log.getLog()->warn("whup gang");
	log.getLog()->error("whup gang");

	kon::SystemManager manager;
	manager.addSystem(CreateShared<TestSystem>());
	manager.iterate([](Shared<kon::System> system){ });
}

