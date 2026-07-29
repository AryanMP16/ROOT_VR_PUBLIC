// @(#)root/hist:$Id$
// Author: Aryan M-Pour   01/10/26

#ifndef VRGraph_H
#define VRGraph_H

#include "TString.h"
#include "TGraph2D.h" //forward declaration won't work here since we're inheriting the class directly, not as a template

namespace ROOT {
namespace VR {

    //Unlike TH1 and TH2, TGraph2D does not inherit from TGraph
    class dll_export VRGraph2D : public TGraph2D {
        public:
            void generate_data_bytes(TGraph2D& graph, std::string& data);
            using TGraph2D::TGraph2D;
            VRGraph2D(TGraph2D& graph);
            virtual void Draw(Option_t* option = "") override;
        
        ClassDefOverride(VRGraph2D, 1);
    };

} //namespace VR
} //namespace ROOT

#endif