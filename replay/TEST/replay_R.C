//HRS-R replay script

#include "def.h"
using namespace std;

void replay_R(Int_t runnumber=0,Int_t all=-1,Int_t fstEvt=0,Bool_t QuietRun = kFALSE){

  //Enable modules
  Bool_t bBeam=kTRUE;
  Bool_t bScaler=kTRUE;
  Bool_t bHelicity=kFALSE;
  Bool_t bPhysics=kTRUE;
  TString RNAME="%s/TEST_%d-1.6.root";
  TString ODEF=Form("RHRS.odef");
  TString CUTS=Form("RHRS.cuts");
  
  //==================================
  //  Detectors
  //==================================
   THaApparatus* HRSR = new THaHRS("R","Right arm HRS");
    
    
    gHaApps->Add( HRSR );
    HRSR->AddDetector( new Tritium_Xscin("s0X","s0 sintillator") );
    HRSR->AddDetector( new THaCherenkov("cer", "Gas Cherenkov counter" ));
    HRSR->AddDetector( new THaShower("ps", "Pre-shower pion rej." ));
    HRSR->AddDetector( new THaShower("sh", "Show pion rej." ));
    HRSR->AddDetector( new TritiumShower("Tritiumps", "Pre-shower pion rej." ));
    HRSR->AddDetector( new TritiumShower("Tritiumsh", "Show pion rej." ));
    HRSR->AddDetector( new THaVDC("vdc", "Vertical Drift Chamber") );
  //==================================
  //  Scaler
  //==================================
    THaScalerEvtHandler* rscaler = new THaScalerEvtHandler("Right","HA scaler event type 140 on R-HRS");
    gHaEvtHandlers->Add(rscaler);
    //THaScalerTSEvtHandler* rscaler2 = new THaScalerTSEvtHandler("Right","HA scaler event type 1-14 on R-HRS");
    //rscaler2->SetDebugFile("TEST_TS.txt");
    //gHaEvtHandlers->Add(rscaler2);
    
    
    //==================================
  //  Beam
  //==================================

   if(bBeam){
       THaIdealBeam* ib = new THaIdealBeam("ib","Ideal beam");
       gHaApps->Add( ib );
       
       Tritium_Rastered_Beam* RrbTritium = new Tritium_Rastered_Beam("RrbTritium","Rastered beam to R-HRS");
       gHaApps->Add( RrbTritium );       
       
       THaUnRasteredBeam* Rurb = new THaUnRasteredBeam("Rurb","Unrastered beam to R-HRS");
       gHaApps->Add( Rurb );
       //THaRasteredBeam* Rrb = new THaRasteredBeam("Rrb","Rastered beam to R-HRS");
      // Rrb->AddDetector( new THaRaster("Raster","Downstream raster") );
       
   }

   
   TString beamchoice = "RrbTritium";
      
   //==================================
   //  Physics
   //==================================
   if(bPhysics){
     Double_t mass_el   = 0.000511; // electron mass
     Double_t amu = 931.494*1.e-3;  // amu to GeV
     Double_t mass_C12 = 12.0*amu;
     Double_t mass_hydr  = 0.93827;
     Double_t mass_tg = mass_hydr; // default target
     

  
    
     gHaPhysics->Add( new THaGoldenTrack( "R.gold", "HRS-R Golden Track", "R" ) );

     THaPhysicsModule* EKR = new THaElectronKine("EKR","Electron kinematics in HRS-R","R","ib",mass_tg);
     gHaPhysics->Add( EKR );

     THaPhysicsModule* EKRc = new THaElectronKine("EKRc","Corrected Electron kinematics in HRS-R","R",beamchoice,mass_tg);
     gHaPhysics->Add( EKRc );

     THaReactionPoint *rpr = new THaReactionPoint("rpr","Reaction vertex for R-HRS","R",beamchoice);
     gHaPhysics->Add(rpr);

     THaExtTarCor *exR =  new THaExtTarCor("exR","Corrected for extended target, R-HRS","R","rpr");
     gHaPhysics->Add(exR);

     THaPhysicsModule *EKRx = new THaElectronKine("EKRx","Better Corrected Electron kinematics in HRS-R","exR",beamchoice,mass_tg);
     gHaPhysics->Add(EKRx);

     }
  
  //=====================================
  //  Set up Analyzer and replay data
  //=====================================
  ReplayCore(
	     runnumber,                 //run #
	     0,                       //-1=replay all;0=ask for a number
	     all,                   //defaut replay event num
	     RNAME,             //output file format
	     ODEF,	        //out define
	     CUTS, 	        //empty cut define
	     bScaler,                 	//replay scalar?
	     bHelicity,                 //repaly helicity
	     fstEvt,			//First Event To Replay
	     QuietRun			//whether ask user for inputs
	     );
}
 

