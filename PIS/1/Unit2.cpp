//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
Form1->ADOTable1->Close();
Form1->ADOTable1->Open();
Form1->ADOTable1->Insert();
Form1->ADOTable1->FieldValues["Код_підрозділу"]=Edit1->Text;
Form1->ADOTable1->FieldValues["Підрозділ"]=Edit2->Text;
Form1->ADOTable1->FieldValues["Керівник"]=Edit3->Text;
Form1->ADOTable1->FieldValues["Кількість_співробітників"]=Edit4->Text;
Form1->ADOTable1->Post();

Form2->Edit1->Clear();
Form2->Edit2->Clear();
Form2->Edit3->Clear();
Form2->Edit4->Clear();
}
//---------------------------------------------------------------------------

