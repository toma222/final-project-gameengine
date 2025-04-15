
#include <kon/core/Engine.hpp>
#include <kon/core/Logging.hpp>

int main(void) {
	kon::Engine e;
	kon::Logger log("log/engine.log", "engine");
	log.getLog()->trace("whup gang");
	log.getLog()->info("whup gang");
	log.getLog()->warn("whup gang");
	log.getLog()->error("whup gang");
}

