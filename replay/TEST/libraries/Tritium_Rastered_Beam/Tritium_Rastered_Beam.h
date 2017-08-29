#ifndef ROOT_Tritium_Rastered_Beam
#define ROOT_Tritium_Rastered_Beam

//////////////////////////////////////////////////////////////////////////
//
// Tritium_Rastered_Beam
//
//////////////////////////////////////////////////////////////////////////

#include "THaBeam.h"

class Tritium_Rastered_Beam : public THaBeam {

public:
  Tritium_Rastered_Beam( const char* name, const char* description ) ;

  virtual ~Tritium_Rastered_Beam() {}
  
  virtual Int_t Reconstruct() ;

protected:


  ClassDef(Tritium_Rastered_Beam,0)    // A beam with rastered beam, analyzed event by event using raster currents
};

#endif

