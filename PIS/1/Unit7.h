//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *QRBand1;
        TQRBand *QRBand2;
        TQRBand *QRBand3;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText4;
        TQRDBText *QRDBText5;
        TQRLabel *QRLabel1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel5;
        TQRLabel *QRLabel6;
private:	// User declarations
public:		// User declarations
        __fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
