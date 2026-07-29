// @(#)root/hist:$Id$
// Author: Aryan M-Pour   01/10/26

#include "TAxis.h"
#include "VR.h"
#include "VRGraph2D.h"
#include <string>
#include "RtypesCore.h"
#include "TGraph2D.h"
#include <algorithm>
#include <iostream>

ROOT::VR::VRGraph2D::VRGraph2D(TGraph2D& graph) : TGraph2D(graph) {}

void ROOT::VR::VRGraph2D::Draw(Option_t* option) {
    ROOT::VR::send_to_VR(*this);
}

void ROOT::VR::VRGraph2D::generate_data_bytes(TGraph2D& graph, std::string& data) {
    data = "TGraph\n"/*communicate that this is a TGraph*/;

    //Sanitize title strings of any \n or \r, as that will mess up the receiving software's reading of the data
    std::string title_x = (std::string) graph.GetXaxis()->GetTitle();
    std::string title_y = (std::string) graph.GetYaxis()->GetTitle();
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\n'), title_x.end());
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\r'), title_x.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\n'), title_y.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\r'), title_y.end());

    data += (std::string) title_x + "\n";
    data += (std::string) title_y + "\n";
    data += std::to_string(graph.GetN()) + "\n";
    data += std::to_string(graph.GetXaxis()->GetXmin()) + "\n";
    data += std::to_string(graph.GetXaxis()->GetXmax()) + "\n";
    data += std::to_string(graph.GetYaxis()->GetXmin()) + "\n";
    data += std::to_string(graph.GetYaxis()->GetXmax()) + "\n";

    for (int i = 1; i <= graph.GetN(); i++) {
        double x, y, z;
        graph.GetPoint(i, x, y, z);
        data += std::to_string(x) + "\n";
        data += std::to_string(y) + "\n";
        data += std::to_string(z) + "\n";
    }
}

ClassImp(ROOT::VR::VRGraph2D);