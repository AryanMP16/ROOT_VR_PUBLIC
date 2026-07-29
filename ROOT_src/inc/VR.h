// @(#)root/hist:$Id$
// Author: Aryan M-Pour   05/10/25

#ifndef VR_H
#define VR_H

#ifdef _WIN32 //Windows-specific headers and declarations
  #define WIN32_LEAN_AND_MEAN
  #define NOMINMAX
  #define _WINSOCKAPI_
  #include <winsock2.h>
  #include <ws2tcpip.h>
  #ifdef VR_EXPORTS
    #define dll_export __declspec(dllexport)
  #else
    #define dll_export __declspec(dllimport)
  #endif
#else
  #define dll_export
#endif

#include <string>

namespace ROOT {
namespace VR {

    #define DEBUGGING 0

    void VRDebug (const char* msg);
    void send_to_VR_helper(std::string data_m);
    
    template <class A> //has to be defined in header file directly since templated function
    void send_to_VR(A& object) {
        std::string data_m;
        object.generate_data_bytes(object, data_m);
        send_to_VR_helper(data_m);
    }

} //namespace VR
} //namespace ROOT

#endif