
#include "UUID.hpp"

#include <random>

namespace kon {

static std::random_device s_randomDevice;
static std::mt19937_64 s_engine(s_randomDevice());
static std::uniform_int_distribution<u64> s_uniformDistribution;

UUID::UUID()
    : uuid(s_uniformDistribution(s_engine)) {}
}


