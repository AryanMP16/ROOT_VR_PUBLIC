// @(#)root/hist:$Id$
// Author: Aryan M-Pour   05/10/25

#include "VR.h"
#include "VRHist.h"
#include <iostream>
#include <string>
#include "RtypesCore.h"
#include <fstream>

/* This way of using the mem initialization list tells the derived class's
  constructor how to construct the base class (by calling its copy constructor on hist) */
template <class T>
ROOT::VR::VRHist<T>::VRHist(T& hist) : T(hist) {}

template <class T>
void ROOT::VR::VRHist<T>::Draw(Option_t* option) {
    //"ROOT VR.exe" must be added to PATH environment variable
    ROOT::VR::send_to_VR(*this);
}

template<class T> 
void ROOT::VR::VRHist1<T>::generate_data_bytes(T& hist, std::string& data) {
    data = "TH1\n"/*communicate that this is 1D*/;

    //Sanitize title strings of any \n or \r, as that will mess up the receiving software's reading of the data
    std::string title_x = (std::string) hist.GetXaxis()->GetTitle();
    std::string title_y = (std::string) hist.GetYaxis()->GetTitle();
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\n'), title_x.end());
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\r'), title_x.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\n'), title_y.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\r'), title_y.end());

    data += (std::string) title_x + "\n";
    data += (std::string) title_y + "\n";
    data += std::to_string(hist.GetNbinsX()) + "\n";
    data += std::to_string(hist.GetXaxis()->GetXmin()) + "\n";
    data += std::to_string(hist.GetXaxis()->GetXmax()) + "\n";
    for (int i = 1; i <= hist.GetNbinsX(); i++)
        data += std::to_string(hist.GetBinContent(i)) + "\n";
}

template<class T>
void ROOT::VR::VRHist2<T>::generate_data_bytes(T& hist, std::string& data) {
    data = "TH2\n"/*communicate that this is 2D*/;
    
    //Sanitize title strings of any \n or \r, as that will mess up the receiving software's reading of the data
    std::string title_x = (std::string) hist.GetXaxis()->GetTitle();
    std::string title_y = (std::string) hist.GetYaxis()->GetTitle();
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\n'), title_x.end());
    title_x.erase(std::remove(title_x.begin(), title_x.end(), '\r'), title_x.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\n'), title_y.end());
    title_y.erase(std::remove(title_y.begin(), title_y.end(), '\r'), title_y.end());

    data += (std::string) title_x + "\n";
    data += (std::string) title_y + "\n";
    data += std::to_string(hist.GetNbinsX()) + "\n";
    data += std::to_string(hist.GetXaxis()->GetXmin()) + "\n";
    data += std::to_string(hist.GetXaxis()->GetXmax()) + "\n";
    data += std::to_string(hist.GetNbinsY()) + "\n";
    data += std::to_string(hist.GetYaxis()->GetXmin()) + "\n";
    data += std::to_string(hist.GetYaxis()->GetXmax()) + "\n";

    for (int ix = 1; ix <= hist.GetNbinsX(); ix++) {
        for (int iy = 1; iy <= hist.GetNbinsY(); iy++) {
            data += std::to_string(hist.GetBinContent(ix, iy)) + "\n";
            data += "err:" + std::to_string(hist.GetBinErrorLow(ix, iy)) + "l" + std::to_string(hist.GetBinErrorUp(ix, iy)) + "u\n";
        }
    }
}

ClassImp(ROOT::VR::VRHist<TH1F>);
ClassImp(ROOT::VR::VRHist<TH1I>);
ClassImp(ROOT::VR::VRHist<TH1D>);
ClassImp(ROOT::VR::VRHist<TH1L>);
ClassImp(ROOT::VR::VRHist<TH1C>);
ClassImp(ROOT::VR::VRHist<TH1S>);

ClassImp(ROOT::VR::VRHist<TH2F>);
ClassImp(ROOT::VR::VRHist<TH2I>);
ClassImp(ROOT::VR::VRHist<TH2D>);
ClassImp(ROOT::VR::VRHist<TH2L>);
ClassImp(ROOT::VR::VRHist<TH2C>);
ClassImp(ROOT::VR::VRHist<TH2S>);

ClassImp(ROOT::VR::VRHist1<TH1F>);
ClassImp(ROOT::VR::VRHist1<TH1I>);
ClassImp(ROOT::VR::VRHist1<TH1D>);
ClassImp(ROOT::VR::VRHist1<TH1L>);
ClassImp(ROOT::VR::VRHist1<TH1C>);
ClassImp(ROOT::VR::VRHist1<TH1S>);

ClassImp(ROOT::VR::VRHist2<TH2F>);
ClassImp(ROOT::VR::VRHist2<TH2I>);
ClassImp(ROOT::VR::VRHist2<TH2D>);
ClassImp(ROOT::VR::VRHist2<TH2L>);
ClassImp(ROOT::VR::VRHist2<TH2C>);
ClassImp(ROOT::VR::VRHist2<TH2S>);

//explicit template instantiation
template class ROOT::VR::VRHist<TH1F>;
template class ROOT::VR::VRHist<TH1I>;
template class ROOT::VR::VRHist<TH1D>;
template class ROOT::VR::VRHist<TH1L>;
template class ROOT::VR::VRHist<TH1C>;
template class ROOT::VR::VRHist<TH1S>;

template class ROOT::VR::VRHist<TH2F>;
template class ROOT::VR::VRHist<TH2I>;
template class ROOT::VR::VRHist<TH2D>;
template class ROOT::VR::VRHist<TH2L>;
template class ROOT::VR::VRHist<TH2C>;
template class ROOT::VR::VRHist<TH2S>;

template class ROOT::VR::VRHist1<TH1F>;
template class ROOT::VR::VRHist1<TH1I>;
template class ROOT::VR::VRHist1<TH1D>;
template class ROOT::VR::VRHist1<TH1L>;
template class ROOT::VR::VRHist1<TH1C>;
template class ROOT::VR::VRHist1<TH1S>;

template class ROOT::VR::VRHist2<TH2F>;
template class ROOT::VR::VRHist2<TH2I>;
template class ROOT::VR::VRHist2<TH2D>;
template class ROOT::VR::VRHist2<TH2L>;
template class ROOT::VR::VRHist2<TH2C>;
template class ROOT::VR::VRHist2<TH2S>;