
#pragma once

#include <kon/core/Util.hpp>

namespace kon
{

struct UUID{
public:
    UUID();
    UUID(const UUID&) = default;
    explicit UUID(u64 id)
        : uuid(id) {}
    operator u64() { return uuid; }

    constexpr bool operator ==(const UUID &id) const { return uuid == id.uuid; };
    constexpr bool operator !=(const UUID &id) const { return uuid != id.uuid; };

public:
    const u64 uuid;
};

}

