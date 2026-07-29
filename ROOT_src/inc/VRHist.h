// @(#)root/hist:$Id$
// Author: Aryan M-Pour   10/05/25

#ifndef VRHist_H
#define VRHist_H

#include "TString.h"

//Previously tried forward declaration, but that did not work
#include "TH1.h"
#include "TH1F.h"
#include "TH1I.h"
#include "TH1D.h"
#include "TH1L.h"
#include "TH1C.h"
#include "TH1S.h"

#include "TH2.h"
#include "TH2F.h"
#include "TH2I.h"
#include "TH2D.h"
#include "TH2L.h"
#include "TH2C.h"
#include "TH2S.h"

namespace ROOT { 
namespace VR {

/* VRHist class will derive from whatever T is specified. For example, if VRHist<TH1F>
is declared, then T = TH1F and we have VRHist<TH1F> : public TH1F.*/
template <class T>
/* Abstract base class from which all VRHist1, VRHist2 will derive */
class dll_export VRHist : public T{
    public:
        virtual void generate_data_bytes(T& hist, std::string& data) = 0;
        using T::T; //inherit T's constructors
        VRHist(T& hist);
        virtual void Draw(Option_t* option = "") override;

    ClassDefOverride(VRHist, 1); //ROOT manual, section 17.2.1
};

template <class T>
class dll_export VRHist1 : public VRHist<T> {
    public:
        virtual void generate_data_bytes(T& hist, std::string& data) override;
        using VRHist<T>::VRHist;

    ClassDefOverride(VRHist1, 1); //ROOT manual, section 17.2.1
};

template <class T>
class dll_export VRHist2 : public VRHist<T> {
    public:
        virtual void generate_data_bytes(T& hist, std::string& data) override;
        using VRHist<T>::VRHist;

    ClassDefOverride(VRHist2, 1); //ROOT manual, section 17.2.1
};

using VRHist1F = VRHist1<TH1F>;
using VRHist1I = VRHist1<TH1I>;
using VRHist1D = VRHist1<TH1D>;
using VRHist1L = VRHist1<TH1L>;
using VRHist1C = VRHist1<TH1C>;
using VRHist1S = VRHist1<TH1S>;

using VRHist2F = VRHist2<TH2F>;
using VRHist2I = VRHist2<TH2I>;
using VRHist2D = VRHist2<TH2D>;
using VRHist2L = VRHist2<TH2L>;
using VRHist2C = VRHist2<TH2C>;
using VRHist2S = VRHist2<TH2S>;

} //namespace VR
} //namespace ROOT

#endif