// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Tritium_Rastered_BeamDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
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

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Tritium_Rastered_Beam.h"
#include "Tritium_BPM.h"
#include "Tritium_Raster.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Tritium_Rastered_Beam(void *p);
   static void deleteArray_Tritium_Rastered_Beam(void *p);
   static void destruct_Tritium_Rastered_Beam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Tritium_Rastered_Beam*)
   {
      ::Tritium_Rastered_Beam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Tritium_Rastered_Beam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Tritium_Rastered_Beam", ::Tritium_Rastered_Beam::Class_Version(), "Tritium_Rastered_Beam.h", 12,
                  typeid(::Tritium_Rastered_Beam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Tritium_Rastered_Beam::Dictionary, isa_proxy, 4,
                  sizeof(::Tritium_Rastered_Beam) );
      instance.SetDelete(&delete_Tritium_Rastered_Beam);
      instance.SetDeleteArray(&deleteArray_Tritium_Rastered_Beam);
      instance.SetDestructor(&destruct_Tritium_Rastered_Beam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Tritium_Rastered_Beam*)
   {
      return GenerateInitInstanceLocal((::Tritium_Rastered_Beam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Tritium_Rastered_Beam*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Tritium_BPM(void *p);
   static void deleteArray_Tritium_BPM(void *p);
   static void destruct_Tritium_BPM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Tritium_BPM*)
   {
      ::Tritium_BPM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Tritium_BPM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Tritium_BPM", ::Tritium_BPM::Class_Version(), "Tritium_BPM.h", 13,
                  typeid(::Tritium_BPM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Tritium_BPM::Dictionary, isa_proxy, 4,
                  sizeof(::Tritium_BPM) );
      instance.SetDelete(&delete_Tritium_BPM);
      instance.SetDeleteArray(&deleteArray_Tritium_BPM);
      instance.SetDestructor(&destruct_Tritium_BPM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Tritium_BPM*)
   {
      return GenerateInitInstanceLocal((::Tritium_BPM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Tritium_BPM*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Tritium_Raster(void *p);
   static void deleteArray_Tritium_Raster(void *p);
   static void destruct_Tritium_Raster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Tritium_Raster*)
   {
      ::Tritium_Raster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Tritium_Raster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Tritium_Raster", ::Tritium_Raster::Class_Version(), "Tritium_Raster.h", 13,
                  typeid(::Tritium_Raster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Tritium_Raster::Dictionary, isa_proxy, 4,
                  sizeof(::Tritium_Raster) );
      instance.SetDelete(&delete_Tritium_Raster);
      instance.SetDeleteArray(&deleteArray_Tritium_Raster);
      instance.SetDestructor(&destruct_Tritium_Raster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Tritium_Raster*)
   {
      return GenerateInitInstanceLocal((::Tritium_Raster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Tritium_Raster*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Tritium_Rastered_Beam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Tritium_Rastered_Beam::Class_Name()
{
   return "Tritium_Rastered_Beam";
}

//______________________________________________________________________________
const char *Tritium_Rastered_Beam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Rastered_Beam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Tritium_Rastered_Beam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Rastered_Beam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Tritium_Rastered_Beam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Rastered_Beam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Tritium_Rastered_Beam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Rastered_Beam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Tritium_BPM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Tritium_BPM::Class_Name()
{
   return "Tritium_BPM";
}

//______________________________________________________________________________
const char *Tritium_BPM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_BPM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Tritium_BPM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_BPM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Tritium_BPM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_BPM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Tritium_BPM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_BPM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Tritium_Raster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Tritium_Raster::Class_Name()
{
   return "Tritium_Raster";
}

//______________________________________________________________________________
const char *Tritium_Raster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Raster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Tritium_Raster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Raster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Tritium_Raster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Raster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Tritium_Raster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_Raster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Tritium_Rastered_Beam::Streamer(TBuffer &R__b)
{
   // Stream an object of class Tritium_Rastered_Beam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Tritium_Rastered_Beam::Class(),this);
   } else {
      R__b.WriteClassBuffer(Tritium_Rastered_Beam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Tritium_Rastered_Beam(void *p) {
      delete ((::Tritium_Rastered_Beam*)p);
   }
   static void deleteArray_Tritium_Rastered_Beam(void *p) {
      delete [] ((::Tritium_Rastered_Beam*)p);
   }
   static void destruct_Tritium_Rastered_Beam(void *p) {
      typedef ::Tritium_Rastered_Beam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tritium_Rastered_Beam

//______________________________________________________________________________
void Tritium_BPM::Streamer(TBuffer &R__b)
{
   // Stream an object of class Tritium_BPM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Tritium_BPM::Class(),this);
   } else {
      R__b.WriteClassBuffer(Tritium_BPM::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Tritium_BPM(void *p) {
      delete ((::Tritium_BPM*)p);
   }
   static void deleteArray_Tritium_BPM(void *p) {
      delete [] ((::Tritium_BPM*)p);
   }
   static void destruct_Tritium_BPM(void *p) {
      typedef ::Tritium_BPM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tritium_BPM

//______________________________________________________________________________
void Tritium_Raster::Streamer(TBuffer &R__b)
{
   // Stream an object of class Tritium_Raster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Tritium_Raster::Class(),this);
   } else {
      R__b.WriteClassBuffer(Tritium_Raster::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Tritium_Raster(void *p) {
      delete ((::Tritium_Raster*)p);
   }
   static void deleteArray_Tritium_Raster(void *p) {
      delete [] ((::Tritium_Raster*)p);
   }
   static void destruct_Tritium_Raster(void *p) {
      typedef ::Tritium_Raster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tritium_Raster

namespace {
  void TriggerDictionaryInitialization_Tritium_Rastered_BeamDict_Impl() {
    static const char* headers[] = {
"Tritium_Rastered_Beam.h",
"Tritium_BPM.h",
"Tritium_Raster.h",
0
    };
    static const char* includePaths[] = {
"/Users/tong/Downloads/analyzer-1.6.0/src",
"/Users/tong/Downloads/analyzer-1.6.0/hana_decode",
"/Users/tong/TEST/libraries/Tritium_Rastered_Beam",
"/Users/tong/apps/root/install/6.08.00/include",
"/Users/tong/TEST/libraries/Tritium_Rastered_Beam/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Tritium_Rastered_BeamDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A beam with rastered beam, analyzed event by event using raster currents)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Tritium_Rastered_Beam.h")))  Tritium_Rastered_Beam;
class __attribute__((annotate(R"ATTRDUMP(Generic BPM class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Tritium_BPM.h")))  Tritium_BPM;
class __attribute__((annotate(R"ATTRDUMP(Generic Raster class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Tritium_Raster.h")))  Tritium_Raster;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Tritium_Rastered_BeamDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Tritium_Rastered_Beam.h"
#include "Tritium_BPM.h"
#include "Tritium_Raster.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Tritium_BPM", payloadCode, "@",
"Tritium_Raster", payloadCode, "@",
"Tritium_Rastered_Beam", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Tritium_Rastered_BeamDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Tritium_Rastered_BeamDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Tritium_Rastered_BeamDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Tritium_Rastered_BeamDict() {
  TriggerDictionaryInitialization_Tritium_Rastered_BeamDict_Impl();
}
