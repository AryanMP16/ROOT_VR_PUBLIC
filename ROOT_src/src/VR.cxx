// @(#)root/hist:$Id$
// Author: Aryan M-Pour   05/10/25

#include "VR.h"
#include <iostream>
#include <string>
#include "RtypesCore.h"
#include <fstream>
#include <cstdlib>
#include "httplib.h"

void ROOT::VR::VRDebug (const char* msg) {
    if (DEBUGGING) {
        std::ofstream file("ROOTVRlog.txt", std::ios::app);
        if (file) {
            file << msg << std::endl;
            file.flush();
        }
    }
}

void ROOT::VR::send_to_VR_helper(std::string data_m) {
    httplib::Server svr;
    std::cout << "Starting 'ROOT VR' server.\n\tServer can be stopped from within 'ROOT VR' or by\n\tmanually running 'curl http://localhost:7668/stop' in another terminal." << std::endl;
    std::cout << "Please connect to this IP address from within 'ROOT VR' on your headset (if you see more than one, any should work):\n";
    
    #ifdef _WIN32
        system("ipconfig | findstr /r /c:\"IPv4 Address\"");
    #elif defined(__linux__)
        system("hostname -I");
    #endif

    svr.Get("/get_data", [&data_m](const httplib::Request&, httplib::Response& res) {
        std::cout << "Transmitting requested data via 'ROOT VR' server..." << std::endl;
        res.set_content(data_m, "text/plain");
    });

    svr.Get("/stop", [&svr](const httplib::Request&, httplib::Response& res) {
        std::cout << "Stopping 'ROOT VR' server." << std::endl;
        svr.stop();
    });

    svr.listen("0.0.0.0", 7668 /*7668 <--> R-O-O-T :)*/);
}

