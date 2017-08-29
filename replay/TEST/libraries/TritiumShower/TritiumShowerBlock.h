#ifndef ROOT_TritiumShowerBlock
#define ROOT_TritiumShowerBlock

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// TritiumShowerBlock                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include "TObject.h"
#include "THaAnalysisObject.h"

class TritiumShowerBlock : public TObject {
    public:
        TritiumShowerBlock() : fXpos(kBig), fYpos(kBig), fRow(-1), fColumn(-1), fNumber(-1) {}
        TritiumShowerBlock(Double_t x, Double_t y, Int_t row, Int_t column, Int_t no) : fXpos(x), fYpos(y), fRow(row), fColumn(column), fNumber(no) {}
        TritiumShowerBlock(const TritiumShowerBlock& rhs) : TObject(rhs), fXpos(rhs.fXpos), fYpos(rhs.fYpos), fEnergy(rhs.fEnergy), fRow(rhs.fRow), fColumn(rhs.fColumn), fNumber(rhs.fNumber) {}
        TritiumShowerBlock(const TritiumShowerBlock* rhs) : TObject(*rhs), fXpos(rhs->fXpos), fYpos(rhs->fYpos), fEnergy(rhs->fEnergy), fRow(rhs->fRow), fColumn(rhs->fColumn), fNumber(rhs->fNumber) {} 
        TritiumShowerBlock& operator=(const TritiumShowerBlock& rhs);
        virtual ~TritiumShowerBlock() {}
        Double_t GetEnergy() const { return fEnergy; }
        Double_t GetX() const { return fXpos; }
        Double_t GetY() const { return fYpos; }
        Int_t GetRow() const { return fRow; }
        Int_t GetColumn() const { return fColumn; }
        Int_t GetNumber() const { return fNumber; }
        void SetEnergy(Double_t e) { fEnergy=e; }
        void SetX(Double_t x) { fXpos=x; }
        void SetY(Double_t y) { fYpos=y; }
        Bool_t IsSortable() const { return kTRUE; }
        virtual Int_t Compare(const TObject*) const;

    protected:

        static const Double_t kBig;
        Double_t fXpos;
        Double_t fYpos;
        Double_t fEnergy;
        Int_t fRow;
        Int_t fColumn;
        Int_t fNumber;

        ClassDef(TritiumShowerBlock,0)
};

#endif
