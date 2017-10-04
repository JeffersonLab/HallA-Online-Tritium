#ifndef ROOT_TritiumShowerCluster
#define ROOT_TritiumShowerCluster

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// TritiumShowerCluster                                                          //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include "TObject.h"
#include "TClonesArray.h"
#include "TritiumShowerBlock.h"

class TritiumShowerCluster : public TObject {
    public:
        TritiumShowerCluster() : fMainBlkNo(-1), fCenterX(kBig), fCenterY(kBig), fE(kBig) {
            fBlks = new TClonesArray("TritiumShowerBlock",16);
        }
        //TritiumShowerCluster(const TritiumShowerCluster& cluster);
        //TritiumShowerCluster(const TritiumShowerCluster* cluster) { return TritiumShowerCluster(*cluster); }
        //TritiumShowerCluster& operator=(const TritiumShowerCluster&);
        virtual ~TritiumShowerCluster() {
            fBlks->Clear();
            delete fBlks;
            fBlks = 0;
        }
        Double_t GetE() const { return fE; }
        Double_t GetCtrX() const { return fCenterX; }
        Double_t GetCtrY() const { return fCenterY; }
        Int_t GetMult() const { return fBlks->GetLast()+1; }
        Int_t GetMainBlk() const { return fMainBlkNo; }
        TClonesArray* GetBlocks() const { return fBlks; }
        void AddBlock(const TritiumShowerBlock* hit) {
            new ((*fBlks)[fBlks->GetLast()+1]) TritiumShowerBlock(hit);
        }
        void CalcCluster();
        Bool_t IsSortable() const { return kTRUE; }
        virtual Int_t Compare(const TObject*) const;


    protected:

        static const Double_t kBig;
        TClonesArray* fBlks;
        Int_t fMainBlkNo;
        Double_t fCenterX;
        Double_t fCenterY;
        Double_t fE;
        void SetE(Double_t e) { fE=e; }
        void SetCtrX(Double_t x) { fCenterX=x; }
        void SetCtrY(Double_t y) { fCenterY=y; }

        ClassDef(TritiumShowerCluster,0)
};

#endif
