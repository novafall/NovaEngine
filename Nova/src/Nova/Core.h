#pragma once

#ifdef NE_PLATFORM_WINDOWS
	#ifdef NE_BUILD_DLL
		#define NE_API __declspec(dllexport)
	#else 
		#define NE_API __declspec(dllimport)
	#endif
#else
	#error Nova Engine only supports Windows_x64!
#endif