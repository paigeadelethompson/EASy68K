//---------------------------------------------------------------------------

#ifndef newhelpSH
#define newhelpSH
//---------------------------------------------------------------------------
#include "SHDocVw_OCX.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <Forms.hpp>
#include <OleCtrls.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class TNewHelp : public TForm {
  __published : // IDE-managed Components
                TCppWebBrowser *Help;
  void __fastcall FormShow(TObject *Sender);

private: // User declarations
public:  // User declarations
  __fastcall TNewHelp(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNewHelp *NewHelp;
//---------------------------------------------------------------------------
#endif
