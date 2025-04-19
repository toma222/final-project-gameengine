
#pragma once

#ifdef KN_DEBUG
	#define KN_BUILD_MODE "debug"
#elif SC_RELEASE
	#define KN_BUILD_MODE "release"
#else
	#define KN_BUILD_MODE "unknown"
#endif

// platform detection as defined here
// https://sourceforge.net/p/predef/wiki/OperatingSystems/
#ifdef __APPLE__
	#define KN_APPLE
	#error "We dont compile to that garbage"
#endif

#if __unix__ || __linux__
	#define KN_UNIX
	#define KN_BUILD_TARGET "unix"

	#ifdef __x86_64__
		#define KN_PLATFORM_64
	#else
		#define KN_PLATFORM_32
	#endif
#endif

#if _WIN16
	#define KN_BUILD_TARGET "win16"
	#define KN_WIN16
	#define KN_PLATFORM_32 // we are treating it like a 32 bit system
#endif

#if _WIN32
	#define KN_BUILD_TARGET "win32"
	#define KN_WIN32
	#define KN_PLATFORM_32
#endif

#if _WIN64
	#define KN_BUILD_TARGET "win64"
	#define KN_WIN64
	#define KN_PLATFORM_64
#endif

#ifdef SC_DEBUG
	#define KN_USE_ASSERT
#endif

