#ifndef ROOT_TritiumShower
#define ROOT_TritiumShower

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// TritiumShower                                                                 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include "THaShower.h"
#include "TClonesArray.h"
#include "TritiumShowerBlock.h"
#include "TritiumShowerCluster.h"

class TritiumShower : public THaShower {

public:
  TritiumShower( const char* name, const char* description = "",
	     THaApparatus* a = NULL );
  virtual ~TritiumShower();

  virtual Int_t      Decode( const THaEvData& );
  virtual Int_t      CoarseProcess( TClonesArray& tracks );
  virtual Int_t      FineProcess( TClonesArray& tracks );
  const TClonesArray* GetTrackHits() const { return fTrackProj; }
        Int_t GetNTracks() const { return fTrackProj->GetLast()+1; }

protected:

  TClonesArray* fBlocks;
  TClonesArray* fClusters;
  TClonesArray* fTrackProj;
  TritiumShowerBlock** fBlksptr;

  // Per-event data
  Int_t      fNHitBlock;      // Number of blocks in clusters

  void           ClearLastEvent();
  virtual Int_t  ReadDatabase( const TDatime& date );
  virtual Int_t  DefineVariables( EMode mode = kDefine );
  
  ClassDef(TritiumShower,0)     //Generic shower detector class
};

////////////////////////////////////////////////////////////////////////////////

#endif
