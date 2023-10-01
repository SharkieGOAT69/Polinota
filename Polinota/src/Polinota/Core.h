#pragma once
#ifdef PL_PLATFORM_WINDOWS
	#ifdef PL_BUILD_DLL
		#define POLINOTA_API __declspec(dllexport)
	#else
		#define POLINOTA_API __declspec(dllimport)
	#endif
#else
	#error Only Windows!
#endif