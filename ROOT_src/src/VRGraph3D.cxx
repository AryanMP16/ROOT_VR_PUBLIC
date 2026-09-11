// @(#)root/hist:$Id$
// Author: Aryan M-Pour   01/10/26

#include "TNamed.h"
#include "VR.h"
#include "VRGraph3D.h"
#include <string>
#include "RtypesCore.h"
#include "TH1.h"
#include <iostream>
#include <limits>

//Constructors, copy constructor, destructor, and assignment + comparison operators

void ROOT::VR::VRGraph3D::build_blank() {
    fSize = 0;
    fNpoints = 0;
    fX = nullptr;
    fY = nullptr;
    fZ = nullptr;
    fW = nullptr;
    fDirectory = nullptr;
    fXaxis.SetName("X Axis");
    fYaxis.SetName("Y Axis");
    fZaxis.SetName("Z Axis");
}

void ROOT::VR::VRGraph3D::build_axes(Int_t n, Double_t* x, Double_t* y, Double_t* z, Double_t* w) {
    Double_t x_min, y_min, z_min, w_min;
    Double_t x_max, y_max, z_max, w_max;
    x_min = y_min = z_min = w_min = std::numeric_limits<double>::max();
    x_max = y_max = z_max = w_max = -1 * std::numeric_limits<double>::max();
    //Find mins and maxes
    for (Int_t i = 0; i < n; i++) {
        //X axis
        if (x[i] > x_max)
            x_max = x[i];
        if (x[i] < x_min)
            x_min = x[i];
        //Y axis
        if (y[i] > y_max)
            y_max = y[i];
        if (y[i] < y_min)
            y_min = y[i];
        //Z axis
        if (z[i] > z_max)
            z_max = z[i];
        if (z[i] < z_min)
            z_min = z[i];
        //W axis
        if (w[i] > w_max)
            w_max = w[i];
        if (w[i] < w_min)
            w_min = w[i];
    }

    TAxis Xaxis(n, x_min, x_max);
    TAxis Yaxis(n, y_min, y_max);
    TAxis Zaxis(n, z_min, z_max);
    
    fXaxis = Xaxis;
    fYaxis = Yaxis;
    fZaxis = Zaxis;
    fMax = w_max;
    fMin = w_min;

    fXaxis.SetName("X Axis");
    fYaxis.SetName("Y Axis");
    fZaxis.SetName("Z Axis");
}

ROOT::VR::VRGraph3D::VRGraph3D() : TNamed("Graph3D", "Graph3D") {
    build_blank();
}

ROOT::VR::VRGraph3D::VRGraph3D(Int_t n, Double_t* x, Double_t* y, Double_t* z, Double_t* w) : TNamed("Graph3D", "Graph3D") {
    if (n < 0) {
        Error("VRGraph3D", "Invalid number of points (%d)", n);
        build_blank();
    }
    else if (n > 0 && (x == nullptr || y == nullptr || z == nullptr || w == nullptr)) {
        Error("VRGraph3D", "One of the x, y, z, w arrays is not a valid array");
        build_blank();
    }
    else {
        fSize = n;
        fNpoints = n;
    
        fX = new Double_t[n];
        fY = new Double_t[n];
        fZ = new Double_t[n];
        fW = new Double_t[n];

        for (Int_t i = 0; i < n; i++) {
            fX[i] = x[i];
            fY[i] = y[i];
            fZ[i] = z[i];
            fW[i] = w[i];
        }

        if (TH1::AddDirectoryStatus()) {
            fDirectory = gDirectory;
            if (fDirectory) {
                fDirectory->Append(this, kTRUE);
            }
        }

        //Handle axes
        build_axes(n, x, y, z, w);
    }
}

ROOT::VR::VRGraph3D::VRGraph3D(const VRGraph3D &other) : TNamed(other) {
    fSize = other.fSize;
    fNpoints = other.fNpoints;

    fX = new Double_t[fSize];
    fY = new Double_t[fSize];
    fZ = new Double_t[fSize];
    fW = new Double_t[fSize];

    for (Int_t i = 0; i < fSize; i++) {
        fX[i] = other.fX[i];
        fY[i] = other.fY[i];
        fZ[i] = other.fZ[i];
        fW[i] = other.fW[i];
    }

    fDirectory = nullptr; //Do not copy fDirectory

    fXaxis = other.fXaxis;
    fYaxis = other.fYaxis;
    fZaxis = other.fZaxis;
    fMax = other.fMax;
    fMin = other.fMin;
}

ROOT::VR::VRGraph3D::~VRGraph3D() {
    if (fDirectory) {
        fDirectory->Remove(this);
        fDirectory = nullptr;
    }

    delete[] fX;
    delete[] fY;
    delete[] fZ;
    delete[] fW;
}

ROOT::VR::VRGraph3D& ROOT::VR::VRGraph3D::operator=(const VRGraph3D &rhs) {
    if (&rhs == this)
        return *this;
    
    delete[] fX;
    delete[] fY;
    delete[] fZ;
    delete[] fW;

    TNamed::operator=(rhs);
    fSize = rhs.fSize;
    fNpoints = rhs.fNpoints;

    fX = new Double_t[fSize];
    fY = new Double_t[fSize];
    fZ = new Double_t[fSize];
    fW = new Double_t[fSize];

    for (Int_t i = 0; i < fSize; i++) {
        fX[i] = rhs.fX[i];
        fY[i] = rhs.fY[i];
        fZ[i] = rhs.fZ[i];
        fW[i] = rhs.fW[i];
    }

    fXaxis = rhs.fXaxis;
    fYaxis = rhs.fYaxis;
    fZaxis = rhs.fZaxis;

    fMax = rhs.fMax;
    fMin = rhs.fMin;

    //Do not copy fDirectory
    return *this;
}

bool ROOT::VR::VRGraph3D::operator==(const VRGraph3D &rhs) const {
    //Decide that the two objects are "equivalent" if their data values are the same
    if (fNpoints != rhs.fNpoints)
        return false;
    for (Int_t i = 0; i < fNpoints; i++) {
        if(fX[i] != rhs.fX[i] || fY[i] != rhs.fY[i] || fZ[i] != rhs.fZ[i] || fW[i] != rhs.fW[i])
            return false;
    }
    return true;
}

//Mimicking functions from TGraph2D

void ROOT::VR::VRGraph3D::AddPoint(Double_t x, Double_t y, Double_t z, Double_t w) {
    if (fSize > fNpoints && fNpoints > 0) {
        fX[fNpoints] = x;
        fY[fNpoints] = y;
        fZ[fNpoints] = z;
        fW[fNpoints] = w;
        fNpoints++;
        return;
    }
    Int_t new_size = (fSize * 2 > fNpoints + 1) ? (fSize * 2) : (fNpoints + 1); //If fNpoints == 0, then fNpoints + 1 > fSize. Note: for some reason std::max just breaks everything
    Double_t* temp_x = new Double_t[new_size];
    Double_t* temp_y = new Double_t[new_size];
    Double_t* temp_z = new Double_t[new_size];
    Double_t* temp_w = new Double_t[new_size];

    //Following TGraph2D's logic
    if (fX != nullptr) {
        memcpy(temp_x, fX, fSize * sizeof(Double_t));
        memset(&temp_x[fSize], 0, (new_size - fSize) * sizeof(Double_t));
        delete[] fX;
    }
    if (fY != nullptr) {
        memcpy(temp_y, fY, fSize * sizeof(Double_t));
        memset(&temp_y[fSize], 0, (new_size - fSize) * sizeof(Double_t));
        delete[] fY;
    }
    if (fZ != nullptr) {
        memcpy(temp_z, fZ, fSize * sizeof(Double_t));
        memset(&temp_z[fSize], 0, (new_size - fSize) * sizeof(Double_t));
        delete[] fZ;
    }
    if (fW != nullptr) {
        memcpy(temp_w, fW, fSize * sizeof(Double_t));
        memset(&temp_w[fSize], 0, (new_size - fSize) * sizeof(Double_t));
        delete[] fW;
    }

    fX = temp_x;
    fY = temp_y;
    fZ = temp_z;
    fW = temp_w;
    fSize = new_size;

    fX[fNpoints] = x;
    fY[fNpoints] = y;
    fZ[fNpoints] = z;
    fW[fNpoints] = w;
    fNpoints++;
}

Int_t ROOT::VR::VRGraph3D::RemovePoint(Int_t ipoint) {
    //Essentially following TGraph2D's logic for consistency
    if (ipoint < 0)
        return -1;
    if (ipoint >= fNpoints)
        return -1;

    fNpoints --;
    Double_t* temp_x = new Double_t[fNpoints];
    Double_t* temp_y = new Double_t[fNpoints];
    Double_t* temp_z = new Double_t[fNpoints];
    Double_t* temp_w = new Double_t[fNpoints];

    Int_t j = -1;
    for (Int_t i = 0; i < fNpoints + 1; i++) {
        if (i == ipoint)
            continue;
        j++;
        temp_x[j] = fX[i];
        temp_y[j] = fY[i];
        temp_z[j] = fZ[i];
        temp_w[j] = fW[i];
    }

    delete[] fX;
    delete[] fY;
    delete[] fZ;
    delete[] fW;
    fX = temp_x;
    fY = temp_y;
    fZ = temp_z;
    fW = temp_w;
    fSize = fNpoints;

    return ipoint;
}

void ROOT::VR::VRGraph3D::Clear(Option_t* option) {
    fSize = 0;
    fNpoints = 0;
    if (fX) {
        delete[] fX;
        fX = nullptr;
    }
    if (fY) {
        delete[] fY;
        fY = nullptr;
    }
    if (fZ) {
        delete[] fZ;
        fZ = nullptr;
    }
    if (fW) {
        delete[] fW;
        fW = nullptr;
    }
    if (fDirectory) {
        fDirectory->Remove(this);
        fDirectory = nullptr;
    }
}

Int_t ROOT::VR::VRGraph3D::GetN() const {return fNpoints;}
Double_t* ROOT::VR::VRGraph3D::GetX() const {return fX;}
Double_t* ROOT::VR::VRGraph3D::GetY() const {return fY;}
Double_t* ROOT::VR::VRGraph3D::GetZ() const {return fZ;}
Double_t* ROOT::VR::VRGraph3D::GetW() const {return fW;}
TAxis* ROOT::VR::VRGraph3D::GetXaxis() {return &fXaxis;}
TAxis* ROOT::VR::VRGraph3D::GetYaxis() {return &fYaxis;}
TAxis* ROOT::VR::VRGraph3D::GetZaxis() {return &fZaxis;}
Double_t ROOT::VR::VRGraph3D::GetMax() const {return fMax;}
Double_t ROOT::VR::VRGraph3D::GetMin() const {return fMin;}

//For debugging
void ROOT::VR::VRGraph3D::print_all() {
    std::cout << "fSize: " << fSize << std::endl;
    std::cout << "fNpoints: " << fNpoints << std::endl;
    std::cout << "fX address: " << fX << std::endl;
    std::cout << "fY address: " << fY << std::endl;
    std::cout << "fZ address: " << fZ << std::endl;
    std::cout << "fW address: " << fW << std::endl;
    std::cout << "fDirectory address: " << fDirectory << std::endl;
    std::cout << "X axis max: " << fXaxis.GetXmax() << "\tmin: " << fXaxis.GetXmin() << std::endl;
    std::cout << "Y axis max: " << fYaxis.GetXmax() << "\tmin: " << fYaxis.GetXmin() << std::endl;
    std::cout << "Z axis max: " << fZaxis.GetXmax() << "\tmin: " << fZaxis.GetXmin() << std::endl;
    std::cout << "W axis max: " << fMax << "\tmin: " << fMin << std::endl;
    
    //Print arrays
    if (fSize > 0) {
        std::cout << "Points (x, y, z, w):\n";
        for (Int_t i = 0; i < fSize; i++) { //Use fSize so we can see full arrays, including blank entries
            std::cout << "\t(" << fX[i] << ", " << fY[i] << ", " << fZ[i] << ", " << fW[i] << ")\n";
        }
    }
    else {
        std::cout << "<fSize is 0; no array points to print>\n";
    }
}

//VR-specific functions

void ROOT::VR::VRGraph3D::Draw(Option_t* option) {
    ROOT::VR::send_to_VR(*this);
}

void ROOT::VR::VRGraph3D::generate_data_bytes(VRGraph3D& this_VRGraph3D, std::string& data) {
    data = "TGraph3\n";

    //Sanitize title strings of any \n or \r, as that will mess up the receiving software's reading of the data
    std::string title_x = (std::string) this_VRGraph3D.GetXaxis()->GetName();
    std::string title_y = (std::string) this_VRGraph3D.GetYaxis()->GetName();
    std::string title_z = (std::string) this_VRGraph3D.GetZaxis()->GetName();
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\n'), title_x.end());
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\r'), title_x.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\n'), title_y.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\r'), title_y.end());
    title_z.erase(std::remove(title_z.begin(), title_z.end(), '\n'), title_z.end());
    title_z.erase(std::remove(title_z.begin(), title_z.end(), '\r'), title_z.end());

    data += (std::string) title_x + "\n";
    data += (std::string) title_y + "\n";
    data += (std::string) title_z + "\n";
    data += std::to_string(this_VRGraph3D.GetN()) + "\n";
    data += std::to_string(this_VRGraph3D.GetXaxis()->GetXmin()) + "\n";
    data += std::to_string(this_VRGraph3D.GetXaxis()->GetXmax()) + "\n";
    data += std::to_string(this_VRGraph3D.GetYaxis()->GetXmin()) + "\n";
    data += std::to_string(this_VRGraph3D.GetYaxis()->GetXmax()) + "\n";
    data += std::to_string(this_VRGraph3D.GetZaxis()->GetXmin()) + "\n";
    data += std::to_string(this_VRGraph3D.GetZaxis()->GetXmax()) + "\n";
    data += std::to_string(this_VRGraph3D.GetMin()) + "\n";
    data += std::to_string(this_VRGraph3D.GetMax()) + "\n";

    for (int i = 0; i < this_VRGraph3D.GetN(); i++) {
        data += std::to_string(fX[i]) + "\n";
        data += std::to_string(fY[i]) + "\n";
        data += std::to_string(fZ[i]) + "\n";
        data += std::to_string(fW[i]) + "\n";
    }
}

ClassImp(ROOT::VR::VRGraph3D);