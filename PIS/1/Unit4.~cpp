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
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button5Click(TObject *Sender)
{
Form4->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
Form4->Width=229;
Form4->Height=322;
Form4->Button1->Visible=true;
Form4->Button2->Visible=true;
Form4->Button3->Visible=true;
Form4->Button4->Visible=false;
Form4->CheckBox1->Visible=false;
Edit1->Clear();
Edit2->Clear();

}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
Form4->Width=229;
Form4->Height=190;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
Form4->Width=229;
Form4->Height=322;
Form4->Button1->Visible=true;
Form4->Button2->Visible=true;
Form4->Button3->Visible=false;
Form4->Button4->Visible=true;
Form4->CheckBox1->Visible=true;
Edit1->Clear();
Edit2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button4Click(TObject *Sender)
{
Form1->ADOTable3->Close();
Form1->ADOTable3->Open();
Form1->ADOTable3->Insert();
Form1->ADOTable3->FieldValues["Логін"]=Edit1->Text;
Form1->ADOTable3->FieldValues["Пароль"]=Edit2->Text;
if(CheckBox1->Checked)
Form1->ADOTable3->FieldValues["Статус"]="Адміністратор";
else
Form1->ADOTable3->FieldValues["Статус"]="Користувач";
Form1->ADOTable3->Post();
Form4->Edit1->Clear();
Form4->Edit2->Clear();
Form4->CheckBox1->Checked=false;
Form4->Width=229;
Form4->Height=190;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
AnsiString al=Edit1->Text,ap=Edit2->Text;
Form1->ADOTable3->Open();
while(!Form1->ADOTable3->Eof)
{

        if((al==Form1->ADOTable3->FieldByName("Логін")->AsString) && (ap==Form1->ADOTable3->FieldByName("Пароль")->AsString))
        {
                if(Form1->ADOTable3->FieldByName("Статус")->AsString=="Користувач")
                {
                        Form1->Button1->Visible=false;
                        Form1->Button2->Visible=false;
                        Form1->Button3->Visible=false;
                        Form1->Button4->Visible=false;
                        Form1->Button5->Visible=false;
                        Form1->Button6->Visible=false;
                        TForm1 *Form = new TForm1( this );
                        Form4->Visible=false;
                        Form1->ShowModal();
                        Edit1->Clear();
                        Edit2->Clear();
                        break;
                        }
                else{
                        TForm1 *Form = new TForm1( this );
                        Form4->Visible=false;
                        Form1->ShowModal();
                        Edit1->Clear();
                        Edit2->Clear();
                        break;
                        }
               }
        Form1->ADOTable3->Next();
        if((al!=Form1->ADOTable3->FieldByName("Логін")->AsString) && (ap!=Form1->ADOTable3->FieldByName("Пароль")->AsString))
        {
                ShowMessage("Користувача не знайдено в системі, будь ласка, зареєструйтесь!");
                Button2->Click();
                break;
        }
        if((al!=Form1->ADOTable3->FieldByName("Логін")->AsString) || (ap!=Form1->ADOTable3->FieldByName("Пароль")->AsString))
        {
                ShowMessage("Не вірно введено логін або пароль!");
                Edit1->Clear();
                Edit2->Clear();
                break;
        }
        }
}
//---------------------------------------------------------------------------

