//---------------------------------------------------------------------------

#ifndef findDialogSH
#define findDialogSH
//---------------------------------------------------------------------------
#include "SIM68Ku.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class TfindDialogFrm : public TForm {
  __published : // IDE-managed Components
                TLabel *Label1;
  TEdit *findText;
  TButton *findNextBtn;
  TButton *cancelBtn;
  void __fastcall findNextBtnClick(TObject *Sender);
  void __fastcall cancelBtnClick(TObject *Sender);
  void __fastcall findTextChange(TObject *Sender);
  void __fastcall FormShow(TObject *Sender);
  void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);

private: // User declarations
  bool findNext;

public: // User declarations
  __fastcall TfindDialogFrm(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfindDialogFrm *findDialogFrm;
//---------------------------------------------------------------------------
#endif
