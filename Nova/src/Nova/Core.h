#pragma once

#ifdef NE_PLATFORM_WINDOWS
	#ifdef NE_BUILD_DLL
		#define NE_API __declspec(dllexport)
	#else 
		#define NE_API __declspec(dllimport)
	#endif
#else
	#error Don't you know?Nova Engine only supports Windows!
#endif