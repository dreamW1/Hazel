#pragma once

#ifdef HZ_PLATFORM_WINDOWS
      #ifdef HAZEL_BUILD_DLL
            #define HAZEL_API _declspec(dllexport) 
      #else
            #define HAZEL_API _declspec(dllimport)
      #endif 
#else
      #error  This API only supports windows
#endif