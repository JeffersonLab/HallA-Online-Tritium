// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TritiumShowerDict

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
#include "TritiumShowerBlock.h"
#include "TritiumShowerCluster.h"
#include "TritiumShower.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TritiumShowerBlock(void *p = 0);
   static void *newArray_TritiumShowerBlock(Long_t size, void *p);
   static void delete_TritiumShowerBlock(void *p);
   static void deleteArray_TritiumShowerBlock(void *p);
   static void destruct_TritiumShowerBlock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TritiumShowerBlock*)
   {
      ::TritiumShowerBlock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TritiumShowerBlock >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TritiumShowerBlock", ::TritiumShowerBlock::Class_Version(), "TritiumShowerBlock.h", 13,
                  typeid(::TritiumShowerBlock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TritiumShowerBlock::Dictionary, isa_proxy, 4,
                  sizeof(::TritiumShowerBlock) );
      instance.SetNew(&new_TritiumShowerBlock);
      instance.SetNewArray(&newArray_TritiumShowerBlock);
      instance.SetDelete(&delete_TritiumShowerBlock);
      instance.SetDeleteArray(&deleteArray_TritiumShowerBlock);
      instance.SetDestructor(&destruct_TritiumShowerBlock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TritiumShowerBlock*)
   {
      return GenerateInitInstanceLocal((::TritiumShowerBlock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TritiumShowerBlock*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TritiumShowerCluster(void *p = 0);
   static void *newArray_TritiumShowerCluster(Long_t size, void *p);
   static void delete_TritiumShowerCluster(void *p);
   static void deleteArray_TritiumShowerCluster(void *p);
   static void destruct_TritiumShowerCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TritiumShowerCluster*)
   {
      ::TritiumShowerCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TritiumShowerCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TritiumShowerCluster", ::TritiumShowerCluster::Class_Version(), "TritiumShowerCluster.h", 15,
                  typeid(::TritiumShowerCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TritiumShowerCluster::Dictionary, isa_proxy, 4,
                  sizeof(::TritiumShowerCluster) );
      instance.SetNew(&new_TritiumShowerCluster);
      instance.SetNewArray(&newArray_TritiumShowerCluster);
      instance.SetDelete(&delete_TritiumShowerCluster);
      instance.SetDeleteArray(&deleteArray_TritiumShowerCluster);
      instance.SetDestructor(&destruct_TritiumShowerCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TritiumShowerCluster*)
   {
      return GenerateInitInstanceLocal((::TritiumShowerCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TritiumShowerCluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TritiumShower(void *p);
   static void deleteArray_TritiumShower(void *p);
   static void destruct_TritiumShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TritiumShower*)
   {
      ::TritiumShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TritiumShower >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TritiumShower", ::TritiumShower::Class_Version(), "TritiumShower.h", 15,
                  typeid(::TritiumShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TritiumShower::Dictionary, isa_proxy, 4,
                  sizeof(::TritiumShower) );
      instance.SetDelete(&delete_TritiumShower);
      instance.SetDeleteArray(&deleteArray_TritiumShower);
      instance.SetDestructor(&destruct_TritiumShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TritiumShower*)
   {
      return GenerateInitInstanceLocal((::TritiumShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TritiumShower*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TritiumShowerBlock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TritiumShowerBlock::Class_Name()
{
   return "TritiumShowerBlock";
}

//______________________________________________________________________________
const char *TritiumShowerBlock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerBlock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TritiumShowerBlock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerBlock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TritiumShowerBlock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerBlock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TritiumShowerBlock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerBlock*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TritiumShowerCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TritiumShowerCluster::Class_Name()
{
   return "TritiumShowerCluster";
}

//______________________________________________________________________________
const char *TritiumShowerCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TritiumShowerCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TritiumShowerCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TritiumShowerCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TritiumShowerCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TritiumShower::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TritiumShower::Class_Name()
{
   return "TritiumShower";
}

//______________________________________________________________________________
const char *TritiumShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TritiumShower*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TritiumShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TritiumShower*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TritiumShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TritiumShower*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TritiumShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TritiumShower*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TritiumShowerBlock::Streamer(TBuffer &R__b)
{
   // Stream an object of class TritiumShowerBlock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TritiumShowerBlock::Class(),this);
   } else {
      R__b.WriteClassBuffer(TritiumShowerBlock::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TritiumShowerBlock(void *p) {
      return  p ? new(p) ::TritiumShowerBlock : new ::TritiumShowerBlock;
   }
   static void *newArray_TritiumShowerBlock(Long_t nElements, void *p) {
      return p ? new(p) ::TritiumShowerBlock[nElements] : new ::TritiumShowerBlock[nElements];
   }
   // Wrapper around operator delete
   static void delete_TritiumShowerBlock(void *p) {
      delete ((::TritiumShowerBlock*)p);
   }
   static void deleteArray_TritiumShowerBlock(void *p) {
      delete [] ((::TritiumShowerBlock*)p);
   }
   static void destruct_TritiumShowerBlock(void *p) {
      typedef ::TritiumShowerBlock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TritiumShowerBlock

//______________________________________________________________________________
void TritiumShowerCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class TritiumShowerCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TritiumShowerCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(TritiumShowerCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TritiumShowerCluster(void *p) {
      return  p ? new(p) ::TritiumShowerCluster : new ::TritiumShowerCluster;
   }
   static void *newArray_TritiumShowerCluster(Long_t nElements, void *p) {
      return p ? new(p) ::TritiumShowerCluster[nElements] : new ::TritiumShowerCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_TritiumShowerCluster(void *p) {
      delete ((::TritiumShowerCluster*)p);
   }
   static void deleteArray_TritiumShowerCluster(void *p) {
      delete [] ((::TritiumShowerCluster*)p);
   }
   static void destruct_TritiumShowerCluster(void *p) {
      typedef ::TritiumShowerCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TritiumShowerCluster

//______________________________________________________________________________
void TritiumShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class TritiumShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TritiumShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(TritiumShower::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TritiumShower(void *p) {
      delete ((::TritiumShower*)p);
   }
   static void deleteArray_TritiumShower(void *p) {
      delete [] ((::TritiumShower*)p);
   }
   static void destruct_TritiumShower(void *p) {
      typedef ::TritiumShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TritiumShower

namespace {
  void TriggerDictionaryInitialization_TritiumShowerDict_Impl() {
    static const char* headers[] = {
"TritiumShowerBlock.h",
"TritiumShowerCluster.h",
"TritiumShower.h",
0
    };
    static const char* includePaths[] = {
"/Users/tong/Downloads/analyzer-1.6.0/src",
"/Users/tong/Downloads/analyzer-1.6.0/hana_decode",
"/Users/tong/TEST/libraries/TritiumShower",
"/Users/tong/apps/root/install/6.08.00/include",
"/Users/tong/TEST/libraries/TritiumShower/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TritiumShowerDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TritiumShowerBlock.h")))  TritiumShowerBlock;
class __attribute__((annotate("$clingAutoload$TritiumShowerCluster.h")))  TritiumShowerCluster;
class __attribute__((annotate(R"ATTRDUMP(Generic shower detector class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TritiumShower.h")))  TritiumShower;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TritiumShowerDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TritiumShowerBlock.h"
#include "TritiumShowerCluster.h"
#include "TritiumShower.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TritiumShower", payloadCode, "@",
"TritiumShowerBlock", payloadCode, "@",
"TritiumShowerCluster", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TritiumShowerDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TritiumShowerDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TritiumShowerDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TritiumShowerDict() {
  TriggerDictionaryInitialization_TritiumShowerDict_Impl();
}
