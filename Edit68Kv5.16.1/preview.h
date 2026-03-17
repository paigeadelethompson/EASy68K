//---------------------------------------------------------------------------

#ifndef previewH
#define previewH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <DBTables.hpp>
#include <Db.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <QRCtrls.hpp>
#include <QRPrntr.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class TPreviewForm : public TForm {
  __published : // IDE-managed Components
                TQuickRep *QuickRep1;
  TQRBand *QRBand1;
  TQRRichText *QRRichText1;

private: // User declarations
public:  // User declarations
  __fastcall TPreviewForm(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPreviewForm *PreviewForm;
//---------------------------------------------------------------------------
#endif
