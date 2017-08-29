///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// TritiumShowerCluster                                                          //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include "TritiumShowerCluster.h"

const Double_t TritiumShowerCluster::kBig = 1.e38;

void TritiumShowerCluster::CalcCluster() {
    if (fBlks->GetLast()+1==0) return;

    fBlks->Sort();
    const TritiumShowerBlock* mainblk = static_cast<const TritiumShowerBlock*>(fBlks->At(0));
    fMainBlkNo = mainblk->GetNumber();

    Double_t xx=0, yy=0, ee=0;
    for (int i=0; i<fBlks->GetLast()+1; i++) {
        const TritiumShowerBlock* showerblk = static_cast<const TritiumShowerBlock*>(fBlks->At(i));
        ee+=showerblk->GetEnergy();
        xx+=showerblk->GetEnergy()*showerblk->GetX();
        yy+=showerblk->GetEnergy()*showerblk->GetY();
    }
    SetE(ee);
    SetCtrX(xx/ee);
    SetCtrY(yy/ee);
}

Int_t TritiumShowerCluster::Compare(const TObject* obj) const
{
    if ( !obj || IsA() != obj->IsA() ) return -1;

    const TritiumShowerCluster* cluster = static_cast<const TritiumShowerCluster*>(obj);
    if ( fE > cluster->GetE() ) return -1;
    if ( fE < cluster->GetE() ) return 1;
    return 0;
}

ClassImp(TritiumShowerCluster)

