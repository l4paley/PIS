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
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
Form1->ADOTable2->Open();
Form1->ADOTable2->Insert();
Form1->ADOTable2->FieldValues["���������_�"]=Edit1->Text;
Form1->ADOTable2->FieldValues["ϲ�"]=Edit2->Text;
Form1->ADOTable2->FieldValues["�����"]=ComboBox1->Text;
Form1->ADOTable2->FieldValues["�����"]=Edit3->Text;
Form1->ADOTable2->FieldValues["���_��������"]=ComboBox2->Text;
Form1->ADOTable2->Post();

Form3->Edit1->Clear();
Form3->Edit2->Clear();
Form3->Edit3->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
Form3->Close();
}
//---------------------------------------------------------------------------

