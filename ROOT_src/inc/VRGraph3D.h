// @(#)root/hist:$Id$
// Author: Aryan M-Pour   18/08/26

#ifndef VRGraph3_H
#define VRGraph3_H

#include "TNamed.h"
#include "TAxis.h"
#include "TString.h"
#include <string>

//Forward declarations
class TDirectory;

namespace ROOT {
namespace VR {
    //Unlike TH1 and TH2, TGraph2D does not inherit from TGraph
    class dll_export VRGraph3D : public TNamed {
        private:
            //To help with constructors
            void build_blank();
            void build_axes(Int_t n, Double_t* x, Double_t* y, Double_t* z, Double_t* w);
        protected:
            //Amount of allocated memory (in units of sizeof(Double_t)) for arrays
            Int_t fSize;
            //Number of data points (x, y, z, w)
            Int_t fNpoints;
            //x, y, z, w value arrays
            Double_t* fX;
            Double_t* fY;
            Double_t* fZ;
            Double_t* fW;
            //Pointer to directory holding this graph
            TDirectory *fDirectory;
            //Axis objects
            TAxis fXaxis;
            TAxis fYaxis;
            TAxis fZaxis;
            Double_t fMax; //W axis max
            Double_t fMin; //W axis min
        public:
            //Constructors, copy constructor, destructor, and assignment + comparison operators
            //Note: we tend to use snake case, but ROOT uses camel case so for consistency, methods that users will encounter will be named in camel case
            VRGraph3D();
            VRGraph3D(Int_t n, Double_t* x, Double_t* y, Double_t* z, Double_t* w);
            VRGraph3D(const VRGraph3D &other);
            ~VRGraph3D();
            VRGraph3D& operator=(const VRGraph3D &rhs);
            bool operator==(const VRGraph3D &rhs) const;

            //Mimicking functions from TGraph2D
            void AddPoint(Double_t x, Double_t y, Double_t z, Double_t w);
            Int_t RemovePoint(Int_t ipoint);
            virtual void Clear(Option_t* option = "") override;
            Int_t GetN() const;
            Double_t* GetX() const;
            Double_t* GetY() const;
            Double_t* GetZ() const;
            Double_t* GetW() const;
            TAxis* GetXaxis();
            TAxis* GetYaxis();
            TAxis* GetZaxis();
            Double_t GetMax() const;
            Double_t GetMin() const;

            //VR-specific functions
            void generate_data_bytes(VRGraph3D& this_VRGraph3D, std::string& data); //Signature must match that of other data types' generate_data_bytes function
            virtual void Draw(Option_t* option = "") override;

            //For debugging
            void print_all();
        
        ClassDefOverride(VRGraph3D, 1);
    };

} //namespace VR
} //namespace ROOT

#endif