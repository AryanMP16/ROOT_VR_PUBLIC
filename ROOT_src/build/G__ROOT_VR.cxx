// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOT_VR
#define R__NO_DEPRECATION

/*******************************************************************/
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "C:/ROOT_VR/ROOT_src/inc/VR.h"
#include "C:/ROOT_VR/ROOT_src/inc/VRGraph2D.h"
#include "C:/ROOT_VR/ROOT_src/inc/VRHist.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   namespace VR {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLVR_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::VR", 0 /*version*/, "VR.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLVR_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLVR_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static void *new_ROOTcLcLVRcLcLVRGraph2D(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRGraph2D(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRGraph2D(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRGraph2D(void *p);
   static void destruct_ROOTcLcLVRcLcLVRGraph2D(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRGraph2D(void *obj, TDirectory *dir);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRGraph2D*)
   {
      ::ROOT::VR::VRGraph2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRGraph2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRGraph2D", ::ROOT::VR::VRGraph2D::Class_Version(), "VRGraph2D.h", 14,
                  typeid(::ROOT::VR::VRGraph2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::VR::VRGraph2D::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRGraph2D), alignof(::ROOT::VR::VRGraph2D) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRGraph2D);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRGraph2D);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRGraph2D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRGraph2D);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRGraph2D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRGraph2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRGraph2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRGraph2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRGraph2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH2SgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH2SgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2SgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH2SgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH2S>*)
   {
      ::ROOT::VR::VRHist<TH2S> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH2S> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH2S>", ::ROOT::VR::VRHist<TH2S>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH2S>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH2SgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH2S>), alignof(::ROOT::VR::VRHist<TH2S>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH2SgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH2SgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH2SgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2SgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH2SgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH2S>","ROOT::VR::VRHist<class TH2S>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH2S>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH2S>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2S>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH2SgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2S>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH2SgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH2SgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH2CgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH2CgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2CgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH2CgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH2C>*)
   {
      ::ROOT::VR::VRHist<TH2C> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH2C> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH2C>", ::ROOT::VR::VRHist<TH2C>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH2C>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH2CgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH2C>), alignof(::ROOT::VR::VRHist<TH2C>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH2CgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH2CgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH2CgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2CgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH2CgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH2C>","ROOT::VR::VRHist<class TH2C>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH2C>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH2C>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2C>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH2CgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2C>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH2CgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH2CgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH2LgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH2LgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2LgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH2LgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH2L>*)
   {
      ::ROOT::VR::VRHist<TH2L> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH2L> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH2L>", ::ROOT::VR::VRHist<TH2L>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH2L>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH2LgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH2L>), alignof(::ROOT::VR::VRHist<TH2L>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH2LgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH2LgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH2LgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2LgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH2LgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH2L>","ROOT::VR::VRHist<class TH2L>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH2L>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH2L>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2L>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH2LgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2L>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH2LgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH2LgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH2DgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH2DgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2DgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH2DgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH2D>*)
   {
      ::ROOT::VR::VRHist<TH2D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH2D> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH2D>", ::ROOT::VR::VRHist<TH2D>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH2D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH2DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH2D>), alignof(::ROOT::VR::VRHist<TH2D>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH2DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH2DgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH2DgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2DgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH2DgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH2D>","ROOT::VR::VRHist<class TH2D>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH2D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH2D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH2DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2D>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH2DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH2DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH2IgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH2IgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2IgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH2IgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH2I>*)
   {
      ::ROOT::VR::VRHist<TH2I> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH2I> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH2I>", ::ROOT::VR::VRHist<TH2I>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH2I>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH2IgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH2I>), alignof(::ROOT::VR::VRHist<TH2I>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH2IgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH2IgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH2IgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2IgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH2IgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH2I>","ROOT::VR::VRHist<class TH2I>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH2I>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH2I>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2I>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH2IgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2I>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH2IgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH2IgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH2FgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH2FgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2FgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH2FgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH2F>*)
   {
      ::ROOT::VR::VRHist<TH2F> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH2F> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH2F>", ::ROOT::VR::VRHist<TH2F>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH2F>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH2FgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH2F>), alignof(::ROOT::VR::VRHist<TH2F>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH2FgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH2FgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH2FgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2FgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH2FgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH2F>","ROOT::VR::VRHist<class TH2F>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH2F>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH2F>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2F>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH2FgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH2F>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH2FgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH2FgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH1SgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH1SgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1SgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH1SgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH1S>*)
   {
      ::ROOT::VR::VRHist<TH1S> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH1S> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH1S>", ::ROOT::VR::VRHist<TH1S>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH1S>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH1SgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH1S>), alignof(::ROOT::VR::VRHist<TH1S>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH1SgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH1SgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH1SgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1SgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH1SgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH1S>","ROOT::VR::VRHist<class TH1S>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH1S>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH1S>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1S>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH1SgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1S>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH1SgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH1SgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH1CgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH1CgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1CgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH1CgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH1C>*)
   {
      ::ROOT::VR::VRHist<TH1C> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH1C> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH1C>", ::ROOT::VR::VRHist<TH1C>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH1C>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH1CgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH1C>), alignof(::ROOT::VR::VRHist<TH1C>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH1CgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH1CgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH1CgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1CgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH1CgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH1C>","ROOT::VR::VRHist<class TH1C>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH1C>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH1C>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1C>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH1CgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1C>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH1CgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH1CgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH1LgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH1LgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1LgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH1LgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH1L>*)
   {
      ::ROOT::VR::VRHist<TH1L> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH1L> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH1L>", ::ROOT::VR::VRHist<TH1L>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH1L>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH1LgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH1L>), alignof(::ROOT::VR::VRHist<TH1L>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH1LgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH1LgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH1LgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1LgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH1LgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH1L>","ROOT::VR::VRHist<class TH1L>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH1L>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH1L>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1L>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH1LgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1L>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH1LgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH1LgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH1DgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH1DgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1DgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH1DgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH1D>*)
   {
      ::ROOT::VR::VRHist<TH1D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH1D> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH1D>", ::ROOT::VR::VRHist<TH1D>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH1D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH1DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH1D>), alignof(::ROOT::VR::VRHist<TH1D>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH1DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH1DgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH1DgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1DgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH1DgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH1D>","ROOT::VR::VRHist<class TH1D>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH1D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH1D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH1DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1D>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH1DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH1DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH1IgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH1IgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1IgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH1IgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH1I>*)
   {
      ::ROOT::VR::VRHist<TH1I> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH1I> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH1I>", ::ROOT::VR::VRHist<TH1I>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH1I>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH1IgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH1I>), alignof(::ROOT::VR::VRHist<TH1I>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH1IgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH1IgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH1IgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1IgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH1IgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH1I>","ROOT::VR::VRHist<class TH1I>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH1I>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH1I>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1I>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH1IgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1I>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH1IgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH1IgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHistlETH1FgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHistlETH1FgR_TClassManip(TClass*);
   static void delete_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1FgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHistlETH1FgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist<TH1F>*)
   {
      ::ROOT::VR::VRHist<TH1F> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist<TH1F> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist<TH1F>", ::ROOT::VR::VRHist<TH1F>::Class_Version(), "VRHist.h", 33,
                  typeid(::ROOT::VR::VRHist<TH1F>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHistlETH1FgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist<TH1F>), alignof(::ROOT::VR::VRHist<TH1F>) );
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHistlETH1FgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHistlETH1FgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHistlETH1FgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1FgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHistlETH1FgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist<TH1F>","ROOT::VR::VRHist<class TH1F>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist<TH1F>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist<TH1F>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1F>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHistlETH1FgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist<TH1F>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHistlETH1FgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHistlETH1FgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1FgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist1lETH1FgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1FgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist1<TH1F>*)
   {
      ::ROOT::VR::VRHist1<TH1F> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist1<TH1F> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist1<TH1F>", ::ROOT::VR::VRHist1<TH1F>::Class_Version(), "VRHist.h", 44,
                  typeid(::ROOT::VR::VRHist1<TH1F>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist1lETH1FgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist1<TH1F>), alignof(::ROOT::VR::VRHist1<TH1F>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist1lETH1FgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist1lETH1FgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist1lETH1FgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist1lETH1FgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist1lETH1FgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1FgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist1lETH1FgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist1<TH1F>","ROOT::VR::VRHist1<class TH1F>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist1<TH1F>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist1<TH1F>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1F>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1FgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1F>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist1lETH1FgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist1lETH1FgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1IgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist1lETH1IgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1IgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist1<TH1I>*)
   {
      ::ROOT::VR::VRHist1<TH1I> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist1<TH1I> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist1<TH1I>", ::ROOT::VR::VRHist1<TH1I>::Class_Version(), "VRHist.h", 44,
                  typeid(::ROOT::VR::VRHist1<TH1I>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist1lETH1IgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist1<TH1I>), alignof(::ROOT::VR::VRHist1<TH1I>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist1lETH1IgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist1lETH1IgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist1lETH1IgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist1lETH1IgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist1lETH1IgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1IgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist1lETH1IgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist1<TH1I>","ROOT::VR::VRHist1<class TH1I>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist1<TH1I>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist1<TH1I>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1I>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1IgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1I>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist1lETH1IgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist1lETH1IgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1DgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist1lETH1DgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1DgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist1<TH1D>*)
   {
      ::ROOT::VR::VRHist1<TH1D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist1<TH1D> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist1<TH1D>", ::ROOT::VR::VRHist1<TH1D>::Class_Version(), "VRHist.h", 44,
                  typeid(::ROOT::VR::VRHist1<TH1D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist1lETH1DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist1<TH1D>), alignof(::ROOT::VR::VRHist1<TH1D>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist1lETH1DgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist1lETH1DgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist1lETH1DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist1lETH1DgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist1lETH1DgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1DgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist1lETH1DgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist1<TH1D>","ROOT::VR::VRHist1<class TH1D>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist1<TH1D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist1<TH1D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1D>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist1lETH1DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist1lETH1DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1LgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist1lETH1LgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1LgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist1<TH1L>*)
   {
      ::ROOT::VR::VRHist1<TH1L> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist1<TH1L> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist1<TH1L>", ::ROOT::VR::VRHist1<TH1L>::Class_Version(), "VRHist.h", 44,
                  typeid(::ROOT::VR::VRHist1<TH1L>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist1lETH1LgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist1<TH1L>), alignof(::ROOT::VR::VRHist1<TH1L>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist1lETH1LgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist1lETH1LgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist1lETH1LgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist1lETH1LgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist1lETH1LgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1LgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist1lETH1LgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist1<TH1L>","ROOT::VR::VRHist1<class TH1L>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist1<TH1L>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist1<TH1L>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1L>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1LgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1L>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist1lETH1LgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist1lETH1LgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1CgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist1lETH1CgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1CgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist1<TH1C>*)
   {
      ::ROOT::VR::VRHist1<TH1C> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist1<TH1C> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist1<TH1C>", ::ROOT::VR::VRHist1<TH1C>::Class_Version(), "VRHist.h", 44,
                  typeid(::ROOT::VR::VRHist1<TH1C>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist1lETH1CgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist1<TH1C>), alignof(::ROOT::VR::VRHist1<TH1C>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist1lETH1CgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist1lETH1CgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist1lETH1CgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist1lETH1CgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist1lETH1CgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1CgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist1lETH1CgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist1<TH1C>","ROOT::VR::VRHist1<class TH1C>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist1<TH1C>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist1<TH1C>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1C>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1CgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1C>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist1lETH1CgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist1lETH1CgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1SgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist1lETH1SgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1SgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist1<TH1S>*)
   {
      ::ROOT::VR::VRHist1<TH1S> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist1<TH1S> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist1<TH1S>", ::ROOT::VR::VRHist1<TH1S>::Class_Version(), "VRHist.h", 44,
                  typeid(::ROOT::VR::VRHist1<TH1S>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist1lETH1SgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist1<TH1S>), alignof(::ROOT::VR::VRHist1<TH1S>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist1lETH1SgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist1lETH1SgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist1lETH1SgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist1lETH1SgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist1lETH1SgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1SgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist1lETH1SgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist1<TH1S>","ROOT::VR::VRHist1<class TH1S>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist1<TH1S>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist1<TH1S>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1S>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist1lETH1SgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist1<TH1S>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist1lETH1SgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist1lETH1SgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2FgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist2lETH2FgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2FgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist2<TH2F>*)
   {
      ::ROOT::VR::VRHist2<TH2F> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist2<TH2F> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist2<TH2F>", ::ROOT::VR::VRHist2<TH2F>::Class_Version(), "VRHist.h", 53,
                  typeid(::ROOT::VR::VRHist2<TH2F>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist2lETH2FgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist2<TH2F>), alignof(::ROOT::VR::VRHist2<TH2F>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist2lETH2FgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist2lETH2FgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist2lETH2FgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist2lETH2FgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist2lETH2FgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2FgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist2lETH2FgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist2<TH2F>","ROOT::VR::VRHist2<class TH2F>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist2<TH2F>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist2<TH2F>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2F>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2FgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2F>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist2lETH2FgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist2lETH2FgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2IgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist2lETH2IgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2IgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist2<TH2I>*)
   {
      ::ROOT::VR::VRHist2<TH2I> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist2<TH2I> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist2<TH2I>", ::ROOT::VR::VRHist2<TH2I>::Class_Version(), "VRHist.h", 53,
                  typeid(::ROOT::VR::VRHist2<TH2I>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist2lETH2IgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist2<TH2I>), alignof(::ROOT::VR::VRHist2<TH2I>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist2lETH2IgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist2lETH2IgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist2lETH2IgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist2lETH2IgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist2lETH2IgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2IgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist2lETH2IgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist2<TH2I>","ROOT::VR::VRHist2<class TH2I>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist2<TH2I>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist2<TH2I>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2I>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2IgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2I>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist2lETH2IgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist2lETH2IgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2DgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist2lETH2DgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2DgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist2<TH2D>*)
   {
      ::ROOT::VR::VRHist2<TH2D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist2<TH2D> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist2<TH2D>", ::ROOT::VR::VRHist2<TH2D>::Class_Version(), "VRHist.h", 53,
                  typeid(::ROOT::VR::VRHist2<TH2D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist2lETH2DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist2<TH2D>), alignof(::ROOT::VR::VRHist2<TH2D>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist2lETH2DgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist2lETH2DgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist2lETH2DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist2lETH2DgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist2lETH2DgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2DgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist2lETH2DgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist2<TH2D>","ROOT::VR::VRHist2<class TH2D>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist2<TH2D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist2<TH2D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2D>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist2lETH2DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist2lETH2DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2LgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist2lETH2LgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2LgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist2<TH2L>*)
   {
      ::ROOT::VR::VRHist2<TH2L> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist2<TH2L> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist2<TH2L>", ::ROOT::VR::VRHist2<TH2L>::Class_Version(), "VRHist.h", 53,
                  typeid(::ROOT::VR::VRHist2<TH2L>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist2lETH2LgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist2<TH2L>), alignof(::ROOT::VR::VRHist2<TH2L>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist2lETH2LgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist2lETH2LgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist2lETH2LgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist2lETH2LgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist2lETH2LgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2LgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist2lETH2LgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist2<TH2L>","ROOT::VR::VRHist2<class TH2L>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist2<TH2L>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist2<TH2L>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2L>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2LgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2L>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist2lETH2LgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist2lETH2LgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2CgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist2lETH2CgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2CgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist2<TH2C>*)
   {
      ::ROOT::VR::VRHist2<TH2C> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist2<TH2C> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist2<TH2C>", ::ROOT::VR::VRHist2<TH2C>::Class_Version(), "VRHist.h", 53,
                  typeid(::ROOT::VR::VRHist2<TH2C>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist2lETH2CgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist2<TH2C>), alignof(::ROOT::VR::VRHist2<TH2C>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist2lETH2CgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist2lETH2CgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist2lETH2CgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist2lETH2CgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist2lETH2CgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2CgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist2lETH2CgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist2<TH2C>","ROOT::VR::VRHist2<class TH2C>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist2<TH2C>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist2<TH2C>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2C>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2CgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2C>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist2lETH2CgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist2lETH2CgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2SgR_Dictionary();
   static void ROOTcLcLVRcLcLVRHist2lETH2SgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p = nullptr);
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2SgR(Long_t size, void *p);
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p);
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p);
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p);
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *obj, TDirectory *dir);
   static Long64_t merge_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VR::VRHist2<TH2S>*)
   {
      ::ROOT::VR::VRHist2<TH2S> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::VR::VRHist2<TH2S> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VR::VRHist2<TH2S>", ::ROOT::VR::VRHist2<TH2S>::Class_Version(), "VRHist.h", 53,
                  typeid(::ROOT::VR::VRHist2<TH2S>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVRcLcLVRHist2lETH2SgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::VR::VRHist2<TH2S>), alignof(::ROOT::VR::VRHist2<TH2S>) );
      instance.SetNew(&new_ROOTcLcLVRcLcLVRHist2lETH2SgR);
      instance.SetNewArray(&newArray_ROOTcLcLVRcLcLVRHist2lETH2SgR);
      instance.SetDelete(&delete_ROOTcLcLVRcLcLVRHist2lETH2SgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVRcLcLVRHist2lETH2SgR);
      instance.SetDestructor(&destruct_ROOTcLcLVRcLcLVRHist2lETH2SgR);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2SgR);
      instance.SetMerge(&merge_ROOTcLcLVRcLcLVRHist2lETH2SgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::VR::VRHist2<TH2S>","ROOT::VR::VRHist2<class TH2S>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VR::VRHist2<TH2S>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::VR::VRHist2<TH2S>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2S>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVRcLcLVRHist2lETH2SgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::VR::VRHist2<TH2S>*>(nullptr))->GetClass();
      ROOTcLcLVRcLcLVRHist2lETH2SgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVRcLcLVRHist2lETH2SgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
atomic_TClass_ptr VRGraph2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VRGraph2D::Class_Name()
{
   return "ROOT::VR::VRGraph2D";
}

//______________________________________________________________________________
const char *VRGraph2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRGraph2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VRGraph2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRGraph2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VRGraph2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRGraph2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VRGraph2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRGraph2D*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH2S>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH2S>::Class_Name()
{
   return "ROOT::VR::VRHist<TH2S>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH2S>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2S>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH2S>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2S>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2S>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2S>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2S>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2S>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH2C>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH2C>::Class_Name()
{
   return "ROOT::VR::VRHist<TH2C>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH2C>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2C>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH2C>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2C>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2C>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2C>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2C>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2C>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH2L>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH2L>::Class_Name()
{
   return "ROOT::VR::VRHist<TH2L>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH2L>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2L>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH2L>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2L>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2L>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2L>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2L>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2L>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH2D>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH2D>::Class_Name()
{
   return "ROOT::VR::VRHist<TH2D>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH2D>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2D>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH2D>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2D>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2D>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2D>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2D>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2D>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH2I>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH2I>::Class_Name()
{
   return "ROOT::VR::VRHist<TH2I>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH2I>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2I>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH2I>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2I>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2I>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2I>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2I>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2I>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH2F>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH2F>::Class_Name()
{
   return "ROOT::VR::VRHist<TH2F>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH2F>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2F>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH2F>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2F>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2F>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2F>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH2F>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH2F>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH1S>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH1S>::Class_Name()
{
   return "ROOT::VR::VRHist<TH1S>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH1S>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1S>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH1S>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1S>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1S>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1S>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1S>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1S>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH1C>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH1C>::Class_Name()
{
   return "ROOT::VR::VRHist<TH1C>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH1C>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1C>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH1C>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1C>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1C>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1C>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1C>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1C>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH1L>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH1L>::Class_Name()
{
   return "ROOT::VR::VRHist<TH1L>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH1L>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1L>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH1L>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1L>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1L>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1L>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1L>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1L>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH1D>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH1D>::Class_Name()
{
   return "ROOT::VR::VRHist<TH1D>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH1D>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1D>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH1D>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1D>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1D>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1D>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1D>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1D>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH1I>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH1I>::Class_Name()
{
   return "ROOT::VR::VRHist<TH1I>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH1I>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1I>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH1I>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1I>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1I>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1I>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1I>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1I>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist<TH1F>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist<TH1F>::Class_Name()
{
   return "ROOT::VR::VRHist<TH1F>";
}

//______________________________________________________________________________
template <> const char *VRHist<TH1F>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1F>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist<TH1F>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1F>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1F>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1F>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist<TH1F>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist<TH1F>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist1<TH1F>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist1<TH1F>::Class_Name()
{
   return "ROOT::VR::VRHist1<TH1F>";
}

//______________________________________________________________________________
template <> const char *VRHist1<TH1F>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1F>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist1<TH1F>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1F>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1F>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1F>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1F>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1F>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist1<TH1I>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist1<TH1I>::Class_Name()
{
   return "ROOT::VR::VRHist1<TH1I>";
}

//______________________________________________________________________________
template <> const char *VRHist1<TH1I>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1I>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist1<TH1I>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1I>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1I>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1I>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1I>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1I>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist1<TH1D>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist1<TH1D>::Class_Name()
{
   return "ROOT::VR::VRHist1<TH1D>";
}

//______________________________________________________________________________
template <> const char *VRHist1<TH1D>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1D>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist1<TH1D>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1D>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1D>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1D>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1D>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1D>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist1<TH1L>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist1<TH1L>::Class_Name()
{
   return "ROOT::VR::VRHist1<TH1L>";
}

//______________________________________________________________________________
template <> const char *VRHist1<TH1L>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1L>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist1<TH1L>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1L>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1L>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1L>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1L>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1L>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist1<TH1C>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist1<TH1C>::Class_Name()
{
   return "ROOT::VR::VRHist1<TH1C>";
}

//______________________________________________________________________________
template <> const char *VRHist1<TH1C>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1C>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist1<TH1C>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1C>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1C>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1C>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1C>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1C>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist1<TH1S>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist1<TH1S>::Class_Name()
{
   return "ROOT::VR::VRHist1<TH1S>";
}

//______________________________________________________________________________
template <> const char *VRHist1<TH1S>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1S>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist1<TH1S>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1S>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1S>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1S>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist1<TH1S>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist1<TH1S>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist2<TH2F>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist2<TH2F>::Class_Name()
{
   return "ROOT::VR::VRHist2<TH2F>";
}

//______________________________________________________________________________
template <> const char *VRHist2<TH2F>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2F>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist2<TH2F>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2F>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2F>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2F>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2F>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2F>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist2<TH2I>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist2<TH2I>::Class_Name()
{
   return "ROOT::VR::VRHist2<TH2I>";
}

//______________________________________________________________________________
template <> const char *VRHist2<TH2I>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2I>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist2<TH2I>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2I>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2I>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2I>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2I>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2I>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist2<TH2D>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist2<TH2D>::Class_Name()
{
   return "ROOT::VR::VRHist2<TH2D>";
}

//______________________________________________________________________________
template <> const char *VRHist2<TH2D>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2D>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist2<TH2D>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2D>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2D>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2D>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2D>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2D>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist2<TH2L>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist2<TH2L>::Class_Name()
{
   return "ROOT::VR::VRHist2<TH2L>";
}

//______________________________________________________________________________
template <> const char *VRHist2<TH2L>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2L>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist2<TH2L>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2L>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2L>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2L>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2L>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2L>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist2<TH2C>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist2<TH2C>::Class_Name()
{
   return "ROOT::VR::VRHist2<TH2C>";
}

//______________________________________________________________________________
template <> const char *VRHist2<TH2C>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2C>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist2<TH2C>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2C>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2C>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2C>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2C>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2C>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> atomic_TClass_ptr VRHist2<TH2S>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *VRHist2<TH2S>::Class_Name()
{
   return "ROOT::VR::VRHist2<TH2S>";
}

//______________________________________________________________________________
template <> const char *VRHist2<TH2S>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2S>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int VRHist2<TH2S>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2S>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2S>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2S>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *VRHist2<TH2S>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::VR::VRHist2<TH2S>*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   namespace VR {
//______________________________________________________________________________
void VRGraph2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRGraph2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRGraph2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRGraph2D::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRGraph2D(void *p) {
      return  p ? new(p) ::ROOT::VR::VRGraph2D : new ::ROOT::VR::VRGraph2D;
   }
   static void *newArray_ROOTcLcLVRcLcLVRGraph2D(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRGraph2D[nElements] : new ::ROOT::VR::VRGraph2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRGraph2D(void *p) {
      delete (static_cast<::ROOT::VR::VRGraph2D*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRGraph2D(void *p) {
      delete [] (static_cast<::ROOT::VR::VRGraph2D*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRGraph2D(void *p) {
      typedef ::ROOT::VR::VRGraph2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRGraph2D(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRGraph2D*)p)->DirectoryAutoAdd(dir);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRGraph2D

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH2S>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH2S>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH2S>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH2S>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH2S>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH2S>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH2S> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2SgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH2S>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH2SgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH2S>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH2S>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH2C>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH2C>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH2C>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH2C>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH2C>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH2C>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH2C> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2CgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH2C>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH2CgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH2C>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH2C>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH2L>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH2L>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH2L>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH2L>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH2L>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH2L>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH2L> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2LgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH2L>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH2LgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH2L>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH2L>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH2D>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH2D>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH2D>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH2D>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH2D>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH2D>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH2D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2DgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH2D>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH2DgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH2D>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH2D>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH2I>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH2I>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH2I>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH2I>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH2I>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH2I>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH2I> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2IgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH2I>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH2IgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH2I>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH2I>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH2F>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH2F>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH2F>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH2F>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH2F>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH2F>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH2F> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH2FgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH2F>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH2FgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH2F>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH2F>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH1S>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH1S>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH1S>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH1S>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH1S>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH1S>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH1S> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1SgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH1S>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH1SgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH1S>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH1S>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH1C>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH1C>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH1C>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH1C>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH1C>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH1C>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH1C> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1CgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH1C>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH1CgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH1C>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH1C>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH1L>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH1L>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH1L>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH1L>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH1L>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH1L>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH1L> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1LgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH1L>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH1LgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH1L>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH1L>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH1D>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH1D>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH1D>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH1D>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH1D>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH1D>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH1D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1DgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH1D>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH1DgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH1D>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH1D>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH1I>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH1I>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH1I>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH1I>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH1I>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH1I>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH1I> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1IgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH1I>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH1IgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH1I>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH1I>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist<TH1F>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist<TH1F>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist<TH1F>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist<TH1F>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist<TH1F>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist<TH1F>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p) {
      typedef ::ROOT::VR::VRHist<TH1F> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHistlETH1FgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist<TH1F>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHistlETH1FgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist<TH1F>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist<TH1F>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist1<TH1F>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist1<TH1F>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist1<TH1F>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist1<TH1F>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist1<TH1F> : new ::ROOT::VR::VRHist1<TH1F>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1FgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist1<TH1F>[nElements] : new ::ROOT::VR::VRHist1<TH1F>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist1<TH1F>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist1<TH1F>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p) {
      typedef ::ROOT::VR::VRHist1<TH1F> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist1<TH1F>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist1lETH1FgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist1<TH1F>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist1<TH1F>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist1<TH1I>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist1<TH1I>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist1<TH1I>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist1<TH1I>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist1<TH1I> : new ::ROOT::VR::VRHist1<TH1I>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1IgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist1<TH1I>[nElements] : new ::ROOT::VR::VRHist1<TH1I>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist1<TH1I>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist1<TH1I>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p) {
      typedef ::ROOT::VR::VRHist1<TH1I> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist1<TH1I>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist1lETH1IgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist1<TH1I>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist1<TH1I>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist1<TH1D>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist1<TH1D>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist1<TH1D>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist1<TH1D>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist1<TH1D> : new ::ROOT::VR::VRHist1<TH1D>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1DgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist1<TH1D>[nElements] : new ::ROOT::VR::VRHist1<TH1D>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist1<TH1D>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist1<TH1D>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p) {
      typedef ::ROOT::VR::VRHist1<TH1D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist1<TH1D>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist1lETH1DgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist1<TH1D>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist1<TH1D>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist1<TH1L>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist1<TH1L>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist1<TH1L>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist1<TH1L>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist1<TH1L> : new ::ROOT::VR::VRHist1<TH1L>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1LgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist1<TH1L>[nElements] : new ::ROOT::VR::VRHist1<TH1L>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist1<TH1L>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist1<TH1L>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p) {
      typedef ::ROOT::VR::VRHist1<TH1L> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist1<TH1L>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist1lETH1LgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist1<TH1L>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist1<TH1L>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist1<TH1C>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist1<TH1C>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist1<TH1C>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist1<TH1C>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist1<TH1C> : new ::ROOT::VR::VRHist1<TH1C>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1CgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist1<TH1C>[nElements] : new ::ROOT::VR::VRHist1<TH1C>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist1<TH1C>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist1<TH1C>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p) {
      typedef ::ROOT::VR::VRHist1<TH1C> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist1<TH1C>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist1lETH1CgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist1<TH1C>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist1<TH1C>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist1<TH1S>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist1<TH1S>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist1<TH1S>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist1<TH1S>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist1<TH1S> : new ::ROOT::VR::VRHist1<TH1S>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist1lETH1SgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist1<TH1S>[nElements] : new ::ROOT::VR::VRHist1<TH1S>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist1<TH1S>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist1<TH1S>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p) {
      typedef ::ROOT::VR::VRHist1<TH1S> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist1<TH1S>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist1lETH1SgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist1<TH1S>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist1<TH1S>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist2<TH2F>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist2<TH2F>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist2<TH2F>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist2<TH2F>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist2<TH2F> : new ::ROOT::VR::VRHist2<TH2F>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2FgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist2<TH2F>[nElements] : new ::ROOT::VR::VRHist2<TH2F>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist2<TH2F>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist2<TH2F>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p) {
      typedef ::ROOT::VR::VRHist2<TH2F> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist2<TH2F>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist2lETH2FgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist2<TH2F>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist2<TH2F>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist2<TH2I>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist2<TH2I>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist2<TH2I>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist2<TH2I>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist2<TH2I> : new ::ROOT::VR::VRHist2<TH2I>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2IgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist2<TH2I>[nElements] : new ::ROOT::VR::VRHist2<TH2I>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist2<TH2I>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist2<TH2I>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p) {
      typedef ::ROOT::VR::VRHist2<TH2I> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist2<TH2I>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist2lETH2IgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist2<TH2I>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist2<TH2I>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist2<TH2D>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist2<TH2D>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist2<TH2D>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist2<TH2D>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist2<TH2D> : new ::ROOT::VR::VRHist2<TH2D>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2DgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist2<TH2D>[nElements] : new ::ROOT::VR::VRHist2<TH2D>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist2<TH2D>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist2<TH2D>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p) {
      typedef ::ROOT::VR::VRHist2<TH2D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist2<TH2D>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist2lETH2DgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist2<TH2D>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist2<TH2D>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist2<TH2L>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist2<TH2L>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist2<TH2L>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist2<TH2L>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist2<TH2L> : new ::ROOT::VR::VRHist2<TH2L>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2LgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist2<TH2L>[nElements] : new ::ROOT::VR::VRHist2<TH2L>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist2<TH2L>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist2<TH2L>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p) {
      typedef ::ROOT::VR::VRHist2<TH2L> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist2<TH2L>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist2lETH2LgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist2<TH2L>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist2<TH2L>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist2<TH2C>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist2<TH2C>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist2<TH2C>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist2<TH2C>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist2<TH2C> : new ::ROOT::VR::VRHist2<TH2C>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2CgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist2<TH2C>[nElements] : new ::ROOT::VR::VRHist2<TH2C>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist2<TH2C>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist2<TH2C>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p) {
      typedef ::ROOT::VR::VRHist2<TH2C> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist2<TH2C>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist2lETH2CgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist2<TH2C>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist2<TH2C>

namespace ROOT {
   namespace VR {
//______________________________________________________________________________
template <> void VRHist2<TH2S>::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::VR::VRHist2<TH2S>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::VR::VRHist2<TH2S>::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::VR::VRHist2<TH2S>::Class(),this);
   }
}

} // namespace ROOT::VR
} // namespace ROOT::VR
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p) {
      return  p ? new(p) ::ROOT::VR::VRHist2<TH2S> : new ::ROOT::VR::VRHist2<TH2S>;
   }
   static void *newArray_ROOTcLcLVRcLcLVRHist2lETH2SgR(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::VR::VRHist2<TH2S>[nElements] : new ::ROOT::VR::VRHist2<TH2S>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p) {
      delete (static_cast<::ROOT::VR::VRHist2<TH2S>*>(p));
   }
   static void deleteArray_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p) {
      delete [] (static_cast<::ROOT::VR::VRHist2<TH2S>*>(p));
   }
   static void destruct_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p) {
      typedef ::ROOT::VR::VRHist2<TH2S> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *p, TDirectory *dir) {
      ((::ROOT::VR::VRHist2<TH2S>*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_ROOTcLcLVRcLcLVRHist2lETH2SgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::ROOT::VR::VRHist2<TH2S>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::ROOT::VR::VRHist2<TH2S>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOT_VR() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOT_VR) = RecordReadRules_libROOT_VR();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOT_VR));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOT_VR_Impl() {
    static const char* headers[] = {
"C:/ROOT_VR/ROOT_src/inc/VR.h",
"C:/ROOT_VR/ROOT_src/inc/VRGraph2D.h",
"C:/ROOT_VR/ROOT_src/inc/VRHist.h",
nullptr
    };
    static const char* includePaths[] = {
"C:/root_v6.40.02/include",
"C:/ROOT_VR/ROOT_src",
"C:/ROOT_VR/ROOT_src/inc",
"C:/root_v6.40.02/include",
"C:/ROOT_VR/ROOT_src/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libROOT_VR dictionary forward declarations' payload"

)DICTFWDDCLS"
R"DICTFWDDCLS(#pragma diagnostic push
)DICTFWDDCLS"
R"DICTFWDDCLS(#pragma clang diagnostic ignored "-Wkeyword-compat"
)DICTFWDDCLS"
R"DICTFWDDCLS(#pragma clang diagnostic ignored "-Wignored-attributes"
)DICTFWDDCLS"
R"DICTFWDDCLS(#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
)DICTFWDDCLS"
R"DICTFWDDCLS(extern int __Cling_AutoLoading_Map;
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{class  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRGraph2D.h")))  VRGraph2D;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH2S;
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{template <class T> class  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  VRHist;
}}
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH2C;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH2L;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH2D;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH2I;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH2.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH2F;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH1S;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH1C;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH1L;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH1D;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH1I;
)DICTFWDDCLS"
R"DICTFWDDCLS(class  __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  TH1F;
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{template <class T> class  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  VRHist1;
}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{template <class T> class  __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  VRHist2;
}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist1F __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist1<TH1F>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist1I __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist1<TH1I>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist1D __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist1<TH1D>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist1L __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist1<TH1L>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist1C __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist1<TH1C>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist1S __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist1<TH1S>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist2F __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist2<TH2F>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist2I __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist2<TH2I>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist2D __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist2<TH2D>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist2L __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist2<TH2L>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist2C __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist2<TH2C>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(namespace ROOT{namespace VR{using VRHist2S __attribute__((annotate("$clingAutoload$C:/ROOT_VR/ROOT_src/inc/VRHist.h")))  = VRHist2<TH2S>;}}
)DICTFWDDCLS"
R"DICTFWDDCLS(#pragma diagnostic pop
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libROOT_VR dictionary payload"

#ifndef _XKEYCHECK_H
  #define _XKEYCHECK_H 1
#endif
#ifndef NOMINMAX
  #define NOMINMAX 1
#endif
#ifndef _CRT_SECURE_NO_WARNINGS
  #define _CRT_SECURE_NO_WARNINGS 1
#endif
#ifndef _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING
  #define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING 1
#endif
#ifndef _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
  #define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING 1
#endif
#ifndef R__DUMMY_CXX_STANDARD_17
  #define R__DUMMY_CXX_STANDARD_17 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "C:/ROOT_VR/ROOT_src/inc/VR.h"
#include "C:/ROOT_VR/ROOT_src/inc/VRGraph2D.h"
#include "C:/ROOT_VR/ROOT_src/inc/VRHist.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ROOT::VR::VRGraph2D", payloadCode, "@",
"ROOT::VR::VRHist1<TH1C>", payloadCode, "@",
"ROOT::VR::VRHist1<TH1D>", payloadCode, "@",
"ROOT::VR::VRHist1<TH1F>", payloadCode, "@",
"ROOT::VR::VRHist1<TH1I>", payloadCode, "@",
"ROOT::VR::VRHist1<TH1L>", payloadCode, "@",
"ROOT::VR::VRHist1<TH1S>", payloadCode, "@",
"ROOT::VR::VRHist1C", payloadCode, "@",
"ROOT::VR::VRHist1D", payloadCode, "@",
"ROOT::VR::VRHist1F", payloadCode, "@",
"ROOT::VR::VRHist1I", payloadCode, "@",
"ROOT::VR::VRHist1L", payloadCode, "@",
"ROOT::VR::VRHist1S", payloadCode, "@",
"ROOT::VR::VRHist2<TH2C>", payloadCode, "@",
"ROOT::VR::VRHist2<TH2D>", payloadCode, "@",
"ROOT::VR::VRHist2<TH2F>", payloadCode, "@",
"ROOT::VR::VRHist2<TH2I>", payloadCode, "@",
"ROOT::VR::VRHist2<TH2L>", payloadCode, "@",
"ROOT::VR::VRHist2<TH2S>", payloadCode, "@",
"ROOT::VR::VRHist2C", payloadCode, "@",
"ROOT::VR::VRHist2D", payloadCode, "@",
"ROOT::VR::VRHist2F", payloadCode, "@",
"ROOT::VR::VRHist2I", payloadCode, "@",
"ROOT::VR::VRHist2L", payloadCode, "@",
"ROOT::VR::VRHist2S", payloadCode, "@",
"ROOT::VR::VRHist<TH1C>", payloadCode, "@",
"ROOT::VR::VRHist<TH1D>", payloadCode, "@",
"ROOT::VR::VRHist<TH1F>", payloadCode, "@",
"ROOT::VR::VRHist<TH1I>", payloadCode, "@",
"ROOT::VR::VRHist<TH1L>", payloadCode, "@",
"ROOT::VR::VRHist<TH1S>", payloadCode, "@",
"ROOT::VR::VRHist<TH2C>", payloadCode, "@",
"ROOT::VR::VRHist<TH2D>", payloadCode, "@",
"ROOT::VR::VRHist<TH2F>", payloadCode, "@",
"ROOT::VR::VRHist<TH2I>", payloadCode, "@",
"ROOT::VR::VRHist<TH2L>", payloadCode, "@",
"ROOT::VR::VRHist<TH2S>", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libROOT_VR",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOT_VR_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOT_VR_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOT_VR() {
  TriggerDictionaryInitialization_libROOT_VR_Impl();
}
