
#pragma once

#include <memory>

#include "Platform.hpp"

#define KN kon

namespace kon {

using u8 = unsigned char;
using i8 = signed char;

using u16 = unsigned short int; // "oh no it wont run correctly on windows 16 bit machines!!!" shut the hell up.
using i16 = signed short int;

#ifdef KN_PLATFORM_64
	using u32 = unsigned int;
	using i32 = int;
#elif KN_PLATFORM_32
	using u32 = unsigned short int;
	using i32 = short int;
#endif

using u64 = unsigned long long int;
using i64 = long long int;

template<typename T>
using Shared = std::shared_ptr<T>;
template<typename T, typename ...Args>
constexpr Shared<T> CreateShared(Args& ...args)
{
	return std::make_shared<T>(std::forward<Args>(args)...);
}

template<typename T>
using Unique = std::unique_ptr<T>;
template<typename T, typename ...Args>
constexpr Unique<T> CreateUnique(Args& ...args)
{
	return std::make_unique<T>(std::forward<Args>(args)...);
}

}

