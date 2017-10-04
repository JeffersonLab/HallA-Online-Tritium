//*-- Author :    Bodo Reitz April 2003
//*-- Updated to include new Raster: Barak Schmookler, June 2015

//////////////////////////////////////////////////////////////////////////
//
// Tritium_Rastered_Beam
//
// Apparatus describing an rastered beam.
// 
//////////////////////////////////////////////////////////////////////////

#include "Tritium_Rastered_Beam.h"
#include "Tritium_BPM.h"
#include "Tritium_Raster.h"
#include "TMath.h"
#include "TDatime.h"
#include "TList.h"

#include "VarDef.h"


ClassImp(Tritium_Rastered_Beam)

//_____________________________________________________________________________

Tritium_Rastered_Beam::Tritium_Rastered_Beam( const char* name, const char* description ) :
    THaBeam( name, description ) 
{
  
  //This detector is used to for beam position/direction
  AddDetector( new Tritium_Raster("Raster","upstream raster ",this) );

  //These detectors are processed
  AddDetector( new Tritium_BPM("BPMA","1st bpm ",this) );
  AddDetector( new Tritium_BPM("BPMB","2nd bpm ",this) );
  AddDetector( new Tritium_Raster("Raster2","downstream raster ",this) );
}


//_____________________________________________________________________________
Int_t Tritium_Rastered_Beam::Reconstruct()
{

  TIter nextDet( fDetectors ); 

  nextDet.Reset();

  // This apparatus assumes that there is only one detector 
  // in the list. If someone adds detectors by hand, the first 
  // detector in the list will be used to get the beam position
  // the others will be processed

  

  if (THaBeamDet* theBeamDet=
      static_cast<THaBeamDet*>( nextDet() )) {
    theBeamDet->Process();
    fPosition = theBeamDet->GetPosition();
    fDirection = theBeamDet->GetDirection();
  }
  else {
    Error( Here("Reconstruct"), 
	   "Beamline Detectors Missing in Detector List" );
  }


  // Process any other detectors that may have been added (by default none)
  while (THaBeamDet * theBeamDet=
	 static_cast<THaBeamDet*>( nextDet() )) {
    theBeamDet->Process();
  }

  Update();

  return 0;

}
