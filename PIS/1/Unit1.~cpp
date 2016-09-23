//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "jpeg.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
ADOTable1->Insert();
 Form2->Show();

 Form2->Edit1->Clear();
 Form2->Edit2->Clear();
 Form2->Edit3->Clear();
 Form2->Edit4->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
ADOTable1->Open();
 ADOTable2->Open();
 Form3->Show();

 Form3->Edit1->Clear();
 Form3->Edit2->Clear();
 Form3->Edit3->Clear();

 Form3->ComboBox1->Clear();

 Form3->ComboBox1->Items->Add("Чоловіча");
 Form3->ComboBox1->Items->Add("Жіноча");



 Form3->ComboBox2->Clear();
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("SELECT Код_підрозділу FROM Підрозділи");
 ADOQuery1->Open();
 while(!ADOQuery1->Eof)
 {
 Form3->ComboBox2->Items->Add(ADOQuery1->FieldByName("Код_підрозділу")->AsString);
 ADOQuery1->Next();
 }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button3Click(TObject *Sender)
{
if (OpenPictureDialog1->Execute())
  {
    AnsiString CurrentFile = OpenPictureDialog1->FileName;
    Image1->Picture->LoadFromFile(CurrentFile);
    Image1->Visible=true;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
ADOTable2->Edit();
TMemoryStream* strm = new TMemoryStream();
Image1->Picture->Graphic->SaveToStream(strm);
((TGraphicField*)Form1->ADOTable2->FieldByName("Фото"))->LoadFromStream(strm);
delete strm;
Form1->ADOTable2->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBGrid2CellClick(TColumn *Column)
{
if(!(TBlobField*)ADOTable2->FieldByName("Фото")->IsNull){
       if(!Image1->Visible)Image1->Visible=true;
       TMemoryStream* strm = new TMemoryStream;
       TJPEGImage *ptJpg=new TJPEGImage;
        ((TGraphicField*)ADOTable2->FieldByName("Фото"))->SaveToStream(strm);
        strm->Seek(0,0);
        if (*(Word*)strm->Memory == 0xD8FF)Image1->Picture->Graphic=ptJpg;
        Image1->Picture->Graphic->LoadFromStream(strm);
        delete strm;
        delete ptJpg;
      }else
      Image1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
if (OpenPictureDialog2->Execute())
  {
    AnsiString CurrentFile = OpenPictureDialog2->FileName;
    Image2->Picture->LoadFromFile(CurrentFile);
    Image2->Visible=true;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
ADOTable1->Edit();
TMemoryStream* trm = new TMemoryStream();
Image2->Picture->Graphic->SaveToStream(trm);
((TGraphicField*)Form1->ADOTable1->FieldByName("Фото"))->LoadFromStream(trm);
delete trm;
Form1->ADOTable1->Post();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::DBGrid1CellClick(TColumn *Column)
{
if(!(TBlobField*)ADOTable1->FieldByName("Фото")->IsNull){
       if(!Image2->Visible)Image2->Visible=true;
       TMemoryStream* trm = new TMemoryStream;
       TJPEGImage *ptJpg=new TJPEGImage;
        ((TGraphicField*)ADOTable1->FieldByName("Фото"))->SaveToStream(trm);
        trm->Seek(0,0);
        if (*(Word*)trm->Memory == 0xD8FF)Image2->Picture->Graphic=ptJpg;
        Image2->Picture->Graphic->LoadFromStream(trm);
        delete trm;
        delete ptJpg;
      }else
      Image2->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
Form4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
ADOTable1->Open();
ADOTable2->Open();
ComboBox1->Clear();
ComboBox2->Clear();
ComboBox3->Clear();
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT Табельний_№ FROM Співробітники");
ADOQuery1->Open();
while(!ADOQuery1->Eof)
{
ComboBox1->Items->Add(ADOQuery1->FieldByName("Табельний_№")->AsString);
ComboBox4->Items->Add(ADOQuery1->FieldByName("Табельний_№")->AsString);
ADOQuery1->Next();
}
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT ПІБ FROM Співробітники");
ADOQuery1->Open();
while(!ADOQuery1->Eof)
{
ComboBox2->Items->Add(ADOQuery1->FieldByName("ПІБ")->AsString);
ComboBox5->Items->Add(ADOQuery1->FieldByName("ПІБ")->AsString);
ADOQuery1->Next();
}
ComboBox3->Items->Add("Чоловіча");
ComboBox3->Items->Add("Жіноча");
ComboBox6->Items->Add("Чоловіча");
ComboBox6->Items->Add("Жіноча");

ComboBox7->Items->Add("Чоловіча");
ComboBox7->Items->Add("Жіноча");



ComboBox8->Clear();
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("SELECT Код_підрозділу FROM Підрозділи");
ADOQuery1->Open();
while(!ADOQuery1->Eof)
{
ComboBox8->Items->Add(ADOQuery1->FieldByName("Код_підрозділу")->AsString);
ComboBox9->Items->Add(ADOQuery1->FieldByName("Код_підрозділу")->AsString);
ADOQuery1->Next();
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
ADOTable2->Locate("Табельний_№",ComboBox1->Text, TLocateOptions ()>>loCaseInsensitive);
ComboBox2->Text="";
ComboBox3->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
ADOTable2->Locate("ПІБ",ComboBox2->Text, TLocateOptions ()>>loCaseInsensitive);
ComboBox1->Text="";
ComboBox3->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox3Change(TObject *Sender)
{
ADOTable2->Locate("Стать",ComboBox3->Text, TLocateOptions ()>>loCaseInsensitive);
ComboBox1->Text="";
ComboBox2->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox4Change(TObject *Sender)
{
ADOTable2->Filtered=false;
ADOTable2->Filter="Табельний_№ = " + QuotedStr(ComboBox4->Text);
ADOTable2->Filtered=true;
ComboBox5->Text="";
ComboBox6->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox5Change(TObject *Sender)
{
ADOTable2->Filtered=false;
ADOTable2->Filter="ПІБ = " + QuotedStr(ComboBox5->Text);
ADOTable2->Filtered=true;
ComboBox4->Text="";
ComboBox6->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox6Change(TObject *Sender)
{
ADOTable2->Filtered=false;
ADOTable2->Filter="Стать = " + QuotedStr(ComboBox6->Text);
ADOTable2->Filtered=true;
ComboBox4->Text="";
ComboBox5->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
ADOTable2->Filtered=false;
ComboBox4->Text="";
ComboBox5->Text="";
ComboBox6->Text="";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
if (Edit1->Text!=""){
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Оклад>="+ Edit1->Text +"");
}
else{
ADOQuery2->SQL->Add("Select * FROM Співробітники");
Edit4->Text="";
}
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
int rCount = ADOQuery2->RecordCount;
Edit4->Text=rCount;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
ADOQuery3->Close();
ADOQuery3->SQL->Clear();
DBGrid4->DataSource=NULL;
DBGrid4->DataSource=DataSource6;
ADOQuery3->SQL->Add("Select * FROM Підрозділи WHERE Підрозділи.Керівник Like '%"+Edit2->Text +"%'");
ADOQuery3->Open();
DataSource6->DataSet=ADOQuery3;
DBGrid4->DataSource=DataSource6;
AnsiString kod = ADOQuery3->FieldByName("Код_підрозділу")->AsString ;
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Код_підрозділу Like '%"+ kod +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
if (Edit3->Text!=""){
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Співробітники.ПІБ Like '%"+Edit3->Text +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
AnsiString kod = ADOQuery2->FieldByName("Код_підрозділу")->AsString ;
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Код_підрозділу Like '%"+ kod +"%'");
}
else
ADOQuery2->SQL->Add("Select * FROM Співробітники");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
/*ADOQuery3->Close();
ADOQuery3->SQL->Clear();
DBGrid4->DataSource=NULL;
DBGrid4->DataSource=DataSource6;
ADOQuery3->SQL->Add("SELECT * FROM Підрозділи WHERE Керівник Like '%"+Edit2->Text+"%'");
ADOQuery3->Open();
DataSource6->DataSet=ADOQuery3;
DBGrid4->DataSource=DataSource6;*/
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
/*ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE ПІБ Like '%"+Edit3->Text +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;  */
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox7Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Стать Like '%"+ComboBox7->Text +"%' and Код_підрозділу Like '%"+ComboBox8->Text +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox8Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Стать Like '%"+ComboBox7->Text +"%' and Код_підрозділу Like '%"+ComboBox8->Text +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit6->Text="";
ComboBox7->Text="";
ComboBox8->Text="";
ComboBox9->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select AVG(Оклад) AS Середня_зарплата FROM Співробітники WHERE Код_підрозділу Like + '%"+Edit1->Text +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select AVG(Оклад) AS Середнє FROM Співробітники WHERE Код_підрозділу LIKE + '%"+Edit5->Text +"%'");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox9Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
ADOQuery2->SQL->Add("Select AVG(Оклад) AS Середнє FROM Співробітники WHERE Код_підрозділу LIKE + '%"+ComboBox9->Text +"%'");
ADOQuery2->Open();
AnsiString kod1 = ADOQuery2->FieldByName("Середнє")->AsString ;
Edit6->Text=kod1;
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
DBGrid3->DataSource=NULL;
DBGrid3->DataSource=DataSource4;
ADOQuery2->SQL->Add("Select * FROM Співробітники");
ADOQuery2->Open();
DataSource4->DataSet=ADOQuery2;
DBGrid3->DataSource=DataSource4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
Form5->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
Form6->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit7Change(TObject *Sender)
{
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
if (Edit7->Text!=""){
ADOQuery2->SQL->Add("Select * FROM Співробітники WHERE Оклад>="+ Edit7->Text +"");
}
else{
ADOQuery2->SQL->Add("Select * FROM Співробітники");
}
ADOQuery2->Open();
Button15->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
Form7->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

