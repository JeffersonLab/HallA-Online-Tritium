// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Tritium_HRSDict

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
#include "Tritium_HRS.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Tritium_HRS(void *p);
   static void deleteArray_Tritium_HRS(void *p);
   static void destruct_Tritium_HRS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Tritium_HRS*)
   {
      ::Tritium_HRS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Tritium_HRS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Tritium_HRS", ::Tritium_HRS::Class_Version(), "Tritium_HRS.h", 14,
                  typeid(::Tritium_HRS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Tritium_HRS::Dictionary, isa_proxy, 4,
                  sizeof(::Tritium_HRS) );
      instance.SetDelete(&delete_Tritium_HRS);
      instance.SetDeleteArray(&deleteArray_Tritium_HRS);
      instance.SetDestructor(&destruct_Tritium_HRS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Tritium_HRS*)
   {
      return GenerateInitInstanceLocal((::Tritium_HRS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Tritium_HRS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Tritium_HRS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Tritium_HRS::Class_Name()
{
   return "Tritium_HRS";
}

//______________________________________________________________________________
const char *Tritium_HRS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_HRS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Tritium_HRS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Tritium_HRS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Tritium_HRS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_HRS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Tritium_HRS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Tritium_HRS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Tritium_HRS::Streamer(TBuffer &R__b)
{
   // Stream an object of class Tritium_HRS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Tritium_HRS::Class(),this);
   } else {
      R__b.WriteClassBuffer(Tritium_HRS::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Tritium_HRS(void *p) {
      delete ((::Tritium_HRS*)p);
   }
   static void deleteArray_Tritium_HRS(void *p) {
      delete [] ((::Tritium_HRS*)p);
   }
   static void destruct_Tritium_HRS(void *p) {
      typedef ::Tritium_HRS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Tritium_HRS

namespace {
  void TriggerDictionaryInitialization_Tritium_HRSDict_Impl() {
    static const char* headers[] = {
"Tritium_HRS.h",
0
    };
    static const char* includePaths[] = {
"/Users/tong/Downloads/analyzer-1.6.0/src",
"/Users/tong/Downloads/analyzer-1.6.0/hana_decode",
"/Users/tong/TEST/libraries/Tritium_HRS",
"./Tritium_Xscin",
"/Users/tong/apps/root/install/6.08.00/include",
"/Users/tong/TEST/libraries/Tritium_HRS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Tritium_HRSDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A Hall A High Resolution Spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Tritium_HRS.h")))  Tritium_HRS;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Tritium_HRSDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Tritium_HRS.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Tritium_HRS", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Tritium_HRSDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Tritium_HRSDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Tritium_HRSDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Tritium_HRSDict() {
  TriggerDictionaryInitialization_Tritium_HRSDict_Impl();
}
