#pragma once

#ifdef NE_PLATFORM_WINDOWS
	#ifdef NE_BUILD_DLL
		#define NE_API __declspec(dllexport)
	#else 
		#define NE_API __declspec(dllimport)
	#endif
#else
	#error 你不道吗？这个b程序只能在64位的windows上跑起来
#endif