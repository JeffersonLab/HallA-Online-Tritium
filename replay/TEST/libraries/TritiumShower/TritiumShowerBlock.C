///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// TritiumShowerBlock                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include "TritiumShowerBlock.h"

const Double_t TritiumShowerBlock::kBig = 1.e38;

TritiumShowerBlock& TritiumShowerBlock::operator=(const TritiumShowerBlock& rhs)
{
    TObject::operator=(rhs);
    if ( this != &rhs ) {
        fXpos = rhs.fXpos;
        fYpos = rhs.fYpos;
        fEnergy = rhs.fEnergy;
        fRow = rhs.fRow;
        fColumn = rhs.fColumn;
        fNumber = rhs.fNumber;
    }
    return *this;
}

Int_t TritiumShowerBlock::Compare(const TObject* obj) const
{
    if ( !obj || IsA() != obj->IsA() ) return -1;

    const TritiumShowerBlock* block = static_cast<const TritiumShowerBlock*>(obj);
    if (fEnergy > block->GetEnergy()) return -1;
    if (fEnergy < block->GetEnergy()) return 1;
    return 0;
}

ClassImp(TritiumShowerBlock)

