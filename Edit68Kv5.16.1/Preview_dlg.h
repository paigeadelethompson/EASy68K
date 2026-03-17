//---------------------------------------------------------------------------

#ifndef Preview_dlgH
#define Preview_dlgH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class TPreviewDlg : public TForm {
  __published : // IDE-managed Components
                TLabel *Label1;
  void __fastcall FormShow(TObject *Sender);

private: // User declarations
public:  // User declarations
  __fastcall TPreviewDlg(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPreviewDlg *PreviewDlg;
//---------------------------------------------------------------------------
#endif
