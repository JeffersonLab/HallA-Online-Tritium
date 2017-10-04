///////////////////////////////////////////////////////////////////////////
//
// rootlogon.C
//
// Load Lib, paths and possible scripts to the analyzer upon start
//
//////////////////////////////////////////////////////////////////////////
//
// Author : Jin Huang <mailto:jinhuang@jlab.org>    Mar 2008
//          Chao Gu         Update for g2p use      Mar 2012
//          Kalyan Allada   Update for GMp expt.    Dec 2013
//	    Florian Hauenstein  Update for Tritum expt.    Feb 2017
//
//////////////////////////////////////////////////////////////////////////

//#include "/Users/tong/TEST/libraries/Tritium_Rastered_Beam/Tritium_Rastered_Beam.h"
//#include "/Users/tong/TEST/libraries/Tritium_Beam_Eloss/Tritium_Beam_Eloss.h"
//#include "/Users/tong/TEST/libraries/Tritium_Track_Eloss/Tritium_Track_Eloss.h"
//#include "/Users/tong/TEST/libraries/Tritium_HRS/Tritium_HRS.h"


{
    TString Arch(gSystem->GetBuildArch());
    TString Arch32("linux");
    TString Arch64("linuxx8664gcc");
    if(Arch==Arch32){
        printf("\nrootlogon.C: Loading Replay Core Library...");
        gSystem->Load("/Users/tong/TEST/ReplayCore_C.so");
    }
    
    else {
        printf("\nrootlogon.C: Loading Replay Core Library...");
        gSystem->Load("/Users/tong/TEST/ReplayCore64_C.so");
        gSystem->Load("/Users/tong/TEST/libraries/Tritium_Rastered_Beam/libTritium_Rastered_Beam.so");
        gSystem->Load("/Users/tong/TEST/libraries/TritiumShower/libTritiumShower.so");
        gSystem->Load("/Users/tong/TEST/libraries/Tritium_Beam_Eloss/libTritium_Beam_Eloss.so");
        gSystem->Load("/Users/tong/TEST/libraries/Tritium_Track_Eloss/libTritium_Track_Eloss.so");
        gSystem->Load("/Users/tong/TEST/libraries/Tritium_HRS/libTritium_HRS.so");
        gSystem->Load("/Users/tong/TEST/libraries/Tritium_Xscin/libTritium_Xscin.so");
    }
    
    //Load more libs here, if necessary.
    //Make sure it's in path of $LD_LIBRARY_PATH
    
    printf("\nrootlogon.C: Adding include directories...");
    
    gSystem->AddIncludePath("-I$ANALYZER");
    gInterpreter->AddIncludePath("$ANALYZER/");
    
    gSystem->AddIncludePath("-I$ANALYZER/src");
    gInterpreter->AddIncludePath("$ANALYZER/src/");
    
    gSystem->AddIncludePath("-I$ANALYZER/hana_decode");
    gInterpreter->AddIncludePath("$ANALYZER/hana_decode/");
    
    //gSystem->AddIncludePath("-I$ANALYZER/hana_scaler");
    //gInterpreter->AddIncludePath("$ANALYZER/hana_scaler/");
    
    printf("\nrootlogon.C: Done!\n\n");
}
