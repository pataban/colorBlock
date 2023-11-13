//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TPanel *block[81];

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
     Form1->Caption="color block";
     Form1->ClientHeight=640;
     Form1->ClientWidth=640;
     Button1->Caption="Start";
     Button1->Width=100;
     Button1->Height=30;
     Button1->Top=10;
     Button1->Left=270;
     block[0]=Panel1;
     block[1]=Panel2;
     block[2]=Panel3;
     block[3]=Panel4;
     block[4]=Panel5;
     block[5]=Panel6;
     block[6]=Panel7;
     block[7]=Panel8;
     block[8]=Panel9;
     block[9]=Panel10;
     block[10]=Panel11;
     block[11]=Panel12;
     block[12]=Panel13;
     block[13]=Panel14;
     block[14]=Panel15;
     block[15]=Panel16;
     block[16]=Panel17;
     block[17]=Panel18;
     block[18]=Panel19;
     block[19]=Panel20;
     block[20]=Panel21;
     block[21]=Panel22;
     block[22]=Panel23;
     block[23]=Panel24;
     block[24]=Panel25;
     block[25]=Panel26;
     block[26]=Panel27;
     block[27]=Panel28;
     block[28]=Panel29;
     block[29]=Panel30;
     block[30]=Panel31;
     block[31]=Panel32;
     block[32]=Panel33;
     block[33]=Panel34;
     block[34]=Panel35;
     block[35]=Panel36;
     block[36]=Panel37;
     block[37]=Panel38;
     block[38]=Panel39;
     block[39]=Panel40;
     block[40]=Panel41;
     block[41]=Panel42;
     block[42]=Panel43;
     block[43]=Panel44;
     block[44]=Panel45;
     block[45]=Panel46;
     block[46]=Panel47;
     block[47]=Panel48;
     block[48]=Panel49;
     block[49]=Panel50;
     block[50]=Panel51;
     block[51]=Panel52;
     block[52]=Panel53;
     block[53]=Panel54;
     block[54]=Panel55;
     block[55]=Panel56;
     block[56]=Panel57;
     block[57]=Panel58;
     block[58]=Panel59;
     block[59]=Panel60;
     block[60]=Panel61;
     block[61]=Panel62;
     block[62]=Panel63;
     block[63]=Panel64;
     block[64]=Panel65;
     block[65]=Panel66;
     block[66]=Panel67;
     block[67]=Panel68;
     block[68]=Panel69;
     block[69]=Panel70;
     block[70]=Panel71;
     block[71]=Panel72;
     block[72]=Panel73;
     block[73]=Panel74;
     block[74]=Panel75;
     block[75]=Panel76;
     block[76]=Panel77;
     block[77]=Panel78;
     block[78]=Panel79;
     block[79]=Panel80;
     block[80]=Panel81;
     for(int i=0;i<81;i++)
     {
        block[i]->Height=60;
        block[i]->Width=60;
        block[i]->Caption="";
        block[i]->Color=clRed;
        block[i]->Left=50+60*(i%9);
        block[i]->Top=50+60*(i/9);
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1Click(TObject *Sender)
{
     if(TForm1::Panel1->Color==clRed)       TForm1::Panel1->Color=clBlue;
     else                       TForm1::Panel1->Color=clRed;
     if(TForm1::Panel2->Color==clRed)       TForm1::Panel2->Color=clBlue;
     else                       TForm1::Panel2->Color=clRed;
     if(TForm1::Panel10->Color==clRed)      TForm1::Panel10->Color=clBlue;
     else                       TForm1::Panel10->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel2Click(TObject *Sender)
{
     if(TForm1::Panel1->Color==clRed)       TForm1::Panel1->Color=clBlue;
     else                       TForm1::Panel1->Color=clRed;
     if(TForm1::Panel2->Color==clRed)       TForm1::Panel2->Color=clBlue;
     else                       TForm1::Panel2->Color=clRed;
     if(TForm1::Panel3->Color==clRed)       TForm1::Panel3->Color=clBlue;
     else                       TForm1::Panel3->Color=clRed;
     if(TForm1::Panel11->Color==clRed)      TForm1::Panel11->Color=clBlue;
     else                       TForm1::Panel11->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel3Click(TObject *Sender)
{
     if(TForm1::Panel2->Color==clRed)       TForm1::Panel2->Color=clBlue;
     else                       TForm1::Panel2->Color=clRed;
     if(TForm1::Panel3->Color==clRed)       TForm1::Panel3->Color=clBlue;
     else                       TForm1::Panel3->Color=clRed;
     if(TForm1::Panel4->Color==clRed)       TForm1::Panel4->Color=clBlue;
     else                       TForm1::Panel4->Color=clRed;
     if(TForm1::Panel12->Color==clRed)      TForm1::Panel12->Color=clBlue;
     else                       TForm1::Panel12->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel4Click(TObject *Sender)
{
     if(TForm1::Panel3->Color==clRed)       TForm1::Panel3->Color=clBlue;
     else                       TForm1::Panel3->Color=clRed;
     if(TForm1::Panel4->Color==clRed)       TForm1::Panel4->Color=clBlue;
     else                       TForm1::Panel4->Color=clRed;
     if(TForm1::Panel5->Color==clRed)       TForm1::Panel5->Color=clBlue;
     else                       TForm1::Panel5->Color=clRed;
     if(TForm1::Panel13->Color==clRed)      TForm1::Panel13->Color=clBlue;
     else                       TForm1::Panel13->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel5Click(TObject *Sender)
{
     if(TForm1::Panel4->Color==clRed)       TForm1::Panel4->Color=clBlue;
     else                       TForm1::Panel4->Color=clRed;
     if(TForm1::Panel5->Color==clRed)       TForm1::Panel5->Color=clBlue;
     else                       TForm1::Panel5->Color=clRed;
     if(TForm1::Panel6->Color==clRed)       TForm1::Panel6->Color=clBlue;
     else                       TForm1::Panel6->Color=clRed;
     if(TForm1::Panel14->Color==clRed)      TForm1::Panel14->Color=clBlue;
     else                       TForm1::Panel14->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel6Click(TObject *Sender)
{
     if(TForm1::Panel5->Color==clRed)       TForm1::Panel5->Color=clBlue;
     else                       TForm1::Panel5->Color=clRed;
     if(TForm1::Panel6->Color==clRed)       TForm1::Panel6->Color=clBlue;
     else                       TForm1::Panel6->Color=clRed;
     if(TForm1::Panel7->Color==clRed)       TForm1::Panel7->Color=clBlue;
     else                       TForm1::Panel7->Color=clRed;
     if(TForm1::Panel15->Color==clRed)      TForm1::Panel15->Color=clBlue;
     else                       TForm1::Panel15->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel7Click(TObject *Sender)
{
     if(TForm1::Panel6->Color==clRed)       TForm1::Panel6->Color=clBlue;
     else                       TForm1::Panel6->Color=clRed;
     if(TForm1::Panel7->Color==clRed)       TForm1::Panel7->Color=clBlue;
     else                       TForm1::Panel7->Color=clRed;
     if(TForm1::Panel8->Color==clRed)       TForm1::Panel8->Color=clBlue;
     else                       TForm1::Panel8->Color=clRed;
     if(TForm1::Panel16->Color==clRed)      TForm1::Panel16->Color=clBlue;
     else                       TForm1::Panel16->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel8Click(TObject *Sender)
{
     if(TForm1::Panel7->Color==clRed)       TForm1::Panel7->Color=clBlue;
     else                       TForm1::Panel7->Color=clRed;
     if(TForm1::Panel8->Color==clRed)       TForm1::Panel8->Color=clBlue;
     else                       TForm1::Panel8->Color=clRed;
     if(TForm1::Panel9->Color==clRed)       TForm1::Panel9->Color=clBlue;
     else                       TForm1::Panel9->Color=clRed;
     if(TForm1::Panel17->Color==clRed)      TForm1::Panel17->Color=clBlue;
     else                       TForm1::Panel17->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel9Click(TObject *Sender)
{
     if(TForm1::Panel8->Color==clRed)       TForm1::Panel8->Color=clBlue;
     else                       TForm1::Panel8->Color=clRed;
     if(TForm1::Panel9->Color==clRed)       TForm1::Panel9->Color=clBlue;
     else                       TForm1::Panel9->Color=clRed;
     if(TForm1::Panel18->Color==clRed)      TForm1::Panel18->Color=clBlue;
     else                       TForm1::Panel18->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel10Click(TObject *Sender)
{
     if(TForm1::Panel1->Color==clRed)       TForm1::Panel1->Color=clBlue;
     else                       TForm1::Panel1->Color=clRed;
     if(TForm1::Panel10->Color==clRed)      TForm1::Panel10->Color=clBlue;
     else                       TForm1::Panel10->Color=clRed;
     if(TForm1::Panel11->Color==clRed)      TForm1::Panel11->Color=clBlue;
     else                       TForm1::Panel11->Color=clRed;
     if(TForm1::Panel19->Color==clRed)     TForm1::Panel19->Color=clBlue;
     else                       TForm1::Panel19->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel11Click(TObject *Sender)
{
     if(TForm1::Panel2->Color==clRed)       TForm1::Panel2->Color=clBlue;
     else                       TForm1::Panel2->Color=clRed;
     if(TForm1::Panel10->Color==clRed)      TForm1::Panel10->Color=clBlue;
     else                       TForm1::Panel10->Color=clRed;
     if(TForm1::Panel11->Color==clRed)      TForm1::Panel11->Color=clBlue;
     else                       TForm1::Panel11->Color=clRed;
     if(TForm1::Panel12->Color==clRed)       TForm1::Panel12->Color=clBlue;
     else                       TForm1::Panel12->Color=clRed;
     if(TForm1::Panel20->Color==clRed)     TForm1::Panel20->Color=clBlue;
     else                       TForm1::Panel20->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel12Click(TObject *Sender)
{
     if(TForm1::Panel3->Color==clRed)       TForm1::Panel3->Color=clBlue;
     else                       TForm1::Panel3->Color=clRed;
     if(TForm1::Panel11->Color==clRed)      TForm1::Panel11->Color=clBlue;
     else                       TForm1::Panel11->Color=clRed;
     if(TForm1::Panel12->Color==clRed)       TForm1::Panel12->Color=clBlue;
     else                       TForm1::Panel12->Color=clRed;
     if(TForm1::Panel13->Color==clRed)      TForm1::Panel13->Color=clBlue;
     else                       TForm1::Panel13->Color=clRed;
     if(TForm1::Panel21->Color==clRed)     TForm1::Panel21->Color=clBlue;
     else                       TForm1::Panel21->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel13Click(TObject *Sender)
{
     if(TForm1::Panel4->Color==clRed)       TForm1::Panel4->Color=clBlue;
     else                       TForm1::Panel4->Color=clRed;
     if(TForm1::Panel12->Color==clRed)       TForm1::Panel12->Color=clBlue;
     else                       TForm1::Panel12->Color=clRed;
     if(TForm1::Panel13->Color==clRed)      TForm1::Panel13->Color=clBlue;
     else                       TForm1::Panel13->Color=clRed;
     if(TForm1::Panel14->Color==clRed)      TForm1::Panel14->Color=clBlue;
     else                       TForm1::Panel14->Color=clRed;
     if(TForm1::Panel22->Color==clRed)     TForm1::Panel22->Color=clBlue;
     else                       TForm1::Panel22->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel14Click(TObject *Sender)
{
     if(TForm1::Panel5->Color==clRed)       TForm1::Panel5->Color=clBlue;
     else                       TForm1::Panel5->Color=clRed;
     if(TForm1::Panel13->Color==clRed)      TForm1::Panel13->Color=clBlue;
     else                       TForm1::Panel13->Color=clRed;
     if(TForm1::Panel14->Color==clRed)      TForm1::Panel14->Color=clBlue;
     else                       TForm1::Panel14->Color=clRed;
     if(TForm1::Panel15->Color==clRed)       TForm1::Panel15->Color=clBlue;
     else                       TForm1::Panel15->Color=clRed;
     if(TForm1::Panel23->Color==clRed)     TForm1::Panel23->Color=clBlue;
     else                       TForm1::Panel23->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel15Click(TObject *Sender)
{
     if(TForm1::Panel6->Color==clRed)       TForm1::Panel6->Color=clBlue;
     else                       TForm1::Panel6->Color=clRed;
     if(TForm1::Panel14->Color==clRed)      TForm1::Panel14->Color=clBlue;
     else                       TForm1::Panel14->Color=clRed;
     if(TForm1::Panel15->Color==clRed)       TForm1::Panel15->Color=clBlue;
     else                       TForm1::Panel15->Color=clRed;
     if(TForm1::Panel16->Color==clRed)      TForm1::Panel16->Color=clBlue;
     else                       TForm1::Panel16->Color=clRed;
     if(TForm1::Panel24->Color==clRed)     TForm1::Panel24->Color=clBlue;
     else                       TForm1::Panel24->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel16Click(TObject *Sender)
{
     if(TForm1::Panel7->Color==clRed)       TForm1::Panel7->Color=clBlue;
     else                       TForm1::Panel7->Color=clRed;
     if(TForm1::Panel15->Color==clRed)       TForm1::Panel15->Color=clBlue;
     else                       TForm1::Panel15->Color=clRed;
     if(TForm1::Panel16->Color==clRed)      TForm1::Panel16->Color=clBlue;
     else                       TForm1::Panel16->Color=clRed;
     if(TForm1::Panel17->Color==clRed)      TForm1::Panel17->Color=clBlue;
     else                       TForm1::Panel17->Color=clRed;
     if(TForm1::Panel25->Color==clRed)     TForm1::Panel25->Color=clBlue;
     else                       TForm1::Panel25->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel17Click(TObject *Sender)
{
     if(TForm1::Panel8->Color==clRed)       TForm1::Panel8->Color=clBlue;
     else                       TForm1::Panel8->Color=clRed;
     if(TForm1::Panel16->Color==clRed)      TForm1::Panel16->Color=clBlue;
     else                       TForm1::Panel16->Color=clRed;
     if(TForm1::Panel17->Color==clRed)      TForm1::Panel17->Color=clBlue;
     else                       TForm1::Panel17->Color=clRed;
     if(TForm1::Panel18->Color==clRed)       TForm1::Panel18->Color=clBlue;
     else                       TForm1::Panel18->Color=clRed;
     if(TForm1::Panel26->Color==clRed)     TForm1::Panel26->Color=clBlue;
     else                       TForm1::Panel26->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel18Click(TObject *Sender)
{
     if(TForm1::Panel9->Color==clRed)       TForm1::Panel9->Color=clBlue;
     else                       TForm1::Panel9->Color=clRed;
     if(TForm1::Panel17->Color==clRed)      TForm1::Panel17->Color=clBlue;
     else                       TForm1::Panel17->Color=clRed;
     if(TForm1::Panel18->Color==clRed)       TForm1::Panel18->Color=clBlue;
     else                       TForm1::Panel18->Color=clRed;
     if(TForm1::Panel27->Color==clRed)     TForm1::Panel27->Color=clBlue;
     else                       TForm1::Panel27->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel19Click(TObject *Sender)
{
     if(TForm1::Panel10->Color==clRed)       TForm1::Panel10->Color=clBlue;
     else                       TForm1::Panel10->Color=clRed;
     if(TForm1::Panel19->Color==clRed)      TForm1::Panel19->Color=clBlue;
     else                       TForm1::Panel19->Color=clRed;
     if(TForm1::Panel20->Color==clRed)      TForm1::Panel20->Color=clBlue;
     else                       TForm1::Panel20->Color=clRed;
     if(TForm1::Panel28->Color==clRed)     TForm1::Panel28->Color=clBlue;
     else                       TForm1::Panel28->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel20Click(TObject *Sender)
{
     if(TForm1::Panel11->Color==clRed)       TForm1::Panel11->Color=clBlue;
     else                       TForm1::Panel11->Color=clRed;
     if(TForm1::Panel19->Color==clRed)      TForm1::Panel19->Color=clBlue;
     else                       TForm1::Panel19->Color=clRed;
     if(TForm1::Panel20->Color==clRed)      TForm1::Panel20->Color=clBlue;
     else                       TForm1::Panel20->Color=clRed;
     if(TForm1::Panel21->Color==clRed)      TForm1::Panel21->Color=clBlue;
     else                       TForm1::Panel21->Color=clRed;
     if(TForm1::Panel29->Color==clRed)     TForm1::Panel29->Color=clBlue;
     else                       TForm1::Panel29->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel21Click(TObject *Sender)
{
     if(TForm1::Panel12->Color==clRed)      TForm1::Panel12->Color=clBlue;
     else                       TForm1::Panel12->Color=clRed;
     if(TForm1::Panel20->Color==clRed)      TForm1::Panel20->Color=clBlue;
     else                       TForm1::Panel20->Color=clRed;
     if(TForm1::Panel21->Color==clRed)      TForm1::Panel21->Color=clBlue;
     else                       TForm1::Panel21->Color=clRed;
     if(TForm1::Panel22->Color==clRed)      TForm1::Panel22->Color=clBlue;
     else                       TForm1::Panel22->Color=clRed;
     if(TForm1::Panel30->Color==clRed)     TForm1::Panel30->Color=clBlue;
     else                       TForm1::Panel30->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel22Click(TObject *Sender)
{
     if(TForm1::Panel13->Color==clRed)      TForm1::Panel13->Color=clBlue;
     else                       TForm1::Panel13->Color=clRed;
     if(TForm1::Panel21->Color==clRed)      TForm1::Panel21->Color=clBlue;
     else                       TForm1::Panel21->Color=clRed;
     if(TForm1::Panel22->Color==clRed)      TForm1::Panel22->Color=clBlue;
     else                       TForm1::Panel22->Color=clRed;
     if(TForm1::Panel23->Color==clRed)      TForm1::Panel23->Color=clBlue;
     else                       TForm1::Panel23->Color=clRed;
     if(TForm1::Panel31->Color==clRed)     TForm1::Panel31->Color=clBlue;
     else                       TForm1::Panel31->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel23Click(TObject *Sender)
{
     if(TForm1::Panel14->Color==clRed)      TForm1::Panel14->Color=clBlue;
     else                       TForm1::Panel14->Color=clRed;
     if(TForm1::Panel22->Color==clRed)      TForm1::Panel22->Color=clBlue;
     else                       TForm1::Panel22->Color=clRed;
     if(TForm1::Panel23->Color==clRed)      TForm1::Panel23->Color=clBlue;
     else                       TForm1::Panel23->Color=clRed;
     if(TForm1::Panel24->Color==clRed)      TForm1::Panel24->Color=clBlue;
     else                       TForm1::Panel24->Color=clRed;
     if(TForm1::Panel32->Color==clRed)     TForm1::Panel32->Color=clBlue;
     else                       TForm1::Panel32->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel24Click(TObject *Sender)
{
     if(TForm1::Panel15->Color==clRed)      TForm1::Panel15->Color=clBlue;
     else                       TForm1::Panel15->Color=clRed;
     if(TForm1::Panel23->Color==clRed)      TForm1::Panel23->Color=clBlue;
     else                       TForm1::Panel23->Color=clRed;
     if(TForm1::Panel24->Color==clRed)      TForm1::Panel24->Color=clBlue;
     else                       TForm1::Panel24->Color=clRed;
     if(TForm1::Panel25->Color==clRed)      TForm1::Panel25->Color=clBlue;
     else                       TForm1::Panel25->Color=clRed;
     if(TForm1::Panel33->Color==clRed)     TForm1::Panel33->Color=clBlue;
     else                       TForm1::Panel33->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel25Click(TObject *Sender)
{
     if(TForm1::Panel16->Color==clRed)      TForm1::Panel16->Color=clBlue;
     else                       TForm1::Panel16->Color=clRed;
     if(TForm1::Panel24->Color==clRed)      TForm1::Panel24->Color=clBlue;
     else                       TForm1::Panel24->Color=clRed;
     if(TForm1::Panel25->Color==clRed)      TForm1::Panel25->Color=clBlue;
     else                       TForm1::Panel25->Color=clRed;
     if(TForm1::Panel26->Color==clRed)      TForm1::Panel26->Color=clBlue;
     else                       TForm1::Panel26->Color=clRed;
     if(TForm1::Panel34->Color==clRed)     TForm1::Panel34->Color=clBlue;
     else                       TForm1::Panel34->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel26Click(TObject *Sender)
{
     if(TForm1::Panel17->Color==clRed)      TForm1::Panel17->Color=clBlue;
     else                       TForm1::Panel17->Color=clRed;
     if(TForm1::Panel25->Color==clRed)      TForm1::Panel25->Color=clBlue;
     else                       TForm1::Panel25->Color=clRed;
     if(TForm1::Panel26->Color==clRed)      TForm1::Panel26->Color=clBlue;
     else                       TForm1::Panel26->Color=clRed;
     if(TForm1::Panel27->Color==clRed)      TForm1::Panel27->Color=clBlue;
     else                       TForm1::Panel27->Color=clRed;
     if(TForm1::Panel35->Color==clRed)     TForm1::Panel35->Color=clBlue;
     else                       TForm1::Panel35->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel27Click(TObject *Sender)
{
     if(TForm1::Panel18->Color==clRed)      TForm1::Panel18->Color=clBlue;
     else                       TForm1::Panel18->Color=clRed;
     if(TForm1::Panel26->Color==clRed)      TForm1::Panel26->Color=clBlue;
     else                       TForm1::Panel26->Color=clRed;
     if(TForm1::Panel27->Color==clRed)      TForm1::Panel27->Color=clBlue;
     else                       TForm1::Panel27->Color=clRed;
     if(TForm1::Panel36->Color==clRed)     TForm1::Panel36->Color=clBlue;
     else                       TForm1::Panel36->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel28Click(TObject *Sender)
{
     if(TForm1::Panel19->Color==clRed)      TForm1::Panel19->Color=clBlue;
     else                       TForm1::Panel19->Color=clRed;
     if(TForm1::Panel28->Color==clRed)      TForm1::Panel28->Color=clBlue;
     else                       TForm1::Panel28->Color=clRed;
     if(TForm1::Panel29->Color==clRed)      TForm1::Panel29->Color=clBlue;
     else                       TForm1::Panel29->Color=clRed;
     if(TForm1::Panel37->Color==clRed)     TForm1::Panel37->Color=clBlue;
     else                       TForm1::Panel37->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel29Click(TObject *Sender)
{
     if(TForm1::Panel20->Color==clRed)      TForm1::Panel20->Color=clBlue;
     else                       TForm1::Panel20->Color=clRed;
     if(TForm1::Panel28->Color==clRed)      TForm1::Panel28->Color=clBlue;
     else                       TForm1::Panel28->Color=clRed;
     if(TForm1::Panel29->Color==clRed)      TForm1::Panel29->Color=clBlue;
     else                       TForm1::Panel29->Color=clRed;
     if(TForm1::Panel30->Color==clRed)      TForm1::Panel30->Color=clBlue;
     else                       TForm1::Panel30->Color=clRed;
     if(TForm1::Panel38->Color==clRed)     TForm1::Panel38->Color=clBlue;
     else                       TForm1::Panel38->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel30Click(TObject *Sender)
{
     if(TForm1::Panel21->Color==clRed)      TForm1::Panel21->Color=clBlue;
     else                       TForm1::Panel21->Color=clRed;
     if(TForm1::Panel29->Color==clRed)      TForm1::Panel29->Color=clBlue;
     else                       TForm1::Panel29->Color=clRed;
     if(TForm1::Panel30->Color==clRed)      TForm1::Panel30->Color=clBlue;
     else                       TForm1::Panel30->Color=clRed;
     if(TForm1::Panel31->Color==clRed)      TForm1::Panel31->Color=clBlue;
     else                       TForm1::Panel31->Color=clRed;
     if(TForm1::Panel39->Color==clRed)     TForm1::Panel39->Color=clBlue;
     else                       TForm1::Panel39->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel31Click(TObject *Sender)
{
     if(TForm1::Panel22->Color==clRed)      TForm1::Panel22->Color=clBlue;
     else                       TForm1::Panel22->Color=clRed;
     if(TForm1::Panel30->Color==clRed)      TForm1::Panel30->Color=clBlue;
     else                       TForm1::Panel30->Color=clRed;
     if(TForm1::Panel31->Color==clRed)      TForm1::Panel31->Color=clBlue;
     else                       TForm1::Panel31->Color=clRed;
     if(TForm1::Panel32->Color==clRed)      TForm1::Panel32->Color=clBlue;
     else                       TForm1::Panel32->Color=clRed;
     if(TForm1::Panel40->Color==clRed)     TForm1::Panel40->Color=clBlue;
     else                       TForm1::Panel40->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel32Click(TObject *Sender)
{
     if(TForm1::Panel23->Color==clRed)      TForm1::Panel23->Color=clBlue;
     else                       TForm1::Panel23->Color=clRed;
     if(TForm1::Panel31->Color==clRed)      TForm1::Panel31->Color=clBlue;
     else                       TForm1::Panel31->Color=clRed;
     if(TForm1::Panel32->Color==clRed)      TForm1::Panel32->Color=clBlue;
     else                       TForm1::Panel32->Color=clRed;
     if(TForm1::Panel33->Color==clRed)      TForm1::Panel33->Color=clBlue;
     else                       TForm1::Panel33->Color=clRed;
     if(TForm1::Panel41->Color==clRed)     TForm1::Panel41->Color=clBlue;
     else                       TForm1::Panel41->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel33Click(TObject *Sender)
{
     if(TForm1::Panel24->Color==clRed)      TForm1::Panel24->Color=clBlue;
     else                       TForm1::Panel24->Color=clRed;
     if(TForm1::Panel32->Color==clRed)      TForm1::Panel32->Color=clBlue;
     else                       TForm1::Panel32->Color=clRed;
     if(TForm1::Panel33->Color==clRed)      TForm1::Panel33->Color=clBlue;
     else                       TForm1::Panel33->Color=clRed;
     if(TForm1::Panel34->Color==clRed)      TForm1::Panel34->Color=clBlue;
     else                       TForm1::Panel34->Color=clRed;
     if(TForm1::Panel42->Color==clRed)     TForm1::Panel42->Color=clBlue;
     else                       TForm1::Panel42->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel34Click(TObject *Sender)
{
     if(TForm1::Panel25->Color==clRed)      TForm1::Panel25->Color=clBlue;
     else                       TForm1::Panel25->Color=clRed;
     if(TForm1::Panel33->Color==clRed)      TForm1::Panel33->Color=clBlue;
     else                       TForm1::Panel33->Color=clRed;
     if(TForm1::Panel34->Color==clRed)      TForm1::Panel34->Color=clBlue;
     else                       TForm1::Panel34->Color=clRed;
     if(TForm1::Panel35->Color==clRed)      TForm1::Panel35->Color=clBlue;
     else                       TForm1::Panel35->Color=clRed;
     if(TForm1::Panel43->Color==clRed)     TForm1::Panel43->Color=clBlue;
     else                       TForm1::Panel43->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel35Click(TObject *Sender)
{
     if(TForm1::Panel26->Color==clRed)      TForm1::Panel26->Color=clBlue;
     else                       TForm1::Panel26->Color=clRed;
     if(TForm1::Panel34->Color==clRed)      TForm1::Panel34->Color=clBlue;
     else                       TForm1::Panel34->Color=clRed;
     if(TForm1::Panel35->Color==clRed)      TForm1::Panel35->Color=clBlue;
     else                       TForm1::Panel35->Color=clRed;
     if(TForm1::Panel36->Color==clRed)      TForm1::Panel36->Color=clBlue;
     else                       TForm1::Panel36->Color=clRed;
     if(TForm1::Panel44->Color==clRed)     TForm1::Panel44->Color=clBlue;
     else                       TForm1::Panel44->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel36Click(TObject *Sender)
{
     if(TForm1::Panel27->Color==clRed)      TForm1::Panel27->Color=clBlue;
     else                       TForm1::Panel27->Color=clRed;
     if(TForm1::Panel35->Color==clRed)      TForm1::Panel35->Color=clBlue;
     else                       TForm1::Panel35->Color=clRed;
     if(TForm1::Panel36->Color==clRed)      TForm1::Panel36->Color=clBlue;
     else                       TForm1::Panel36->Color=clRed;
     if(TForm1::Panel45->Color==clRed)     TForm1::Panel45->Color=clBlue;
     else                       TForm1::Panel45->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel37Click(TObject *Sender)
{
     if(TForm1::Panel28->Color==clRed)      TForm1::Panel28->Color=clBlue;
     else                       TForm1::Panel28->Color=clRed;
     if(TForm1::Panel37->Color==clRed)      TForm1::Panel37->Color=clBlue;
     else                       TForm1::Panel37->Color=clRed;
     if(TForm1::Panel38->Color==clRed)      TForm1::Panel38->Color=clBlue;
     else                       TForm1::Panel38->Color=clRed;
     if(TForm1::Panel46->Color==clRed)     TForm1::Panel46->Color=clBlue;
     else                       TForm1::Panel46->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel38Click(TObject *Sender)
{
     if(TForm1::Panel29->Color==clRed)      TForm1::Panel29->Color=clBlue;
     else                       TForm1::Panel29->Color=clRed;
     if(TForm1::Panel37->Color==clRed)      TForm1::Panel37->Color=clBlue;
     else                       TForm1::Panel37->Color=clRed;
     if(TForm1::Panel38->Color==clRed)      TForm1::Panel38->Color=clBlue;
     else                       TForm1::Panel38->Color=clRed;
     if(TForm1::Panel39->Color==clRed)      TForm1::Panel39->Color=clBlue;
     else                       TForm1::Panel39->Color=clRed;
     if(TForm1::Panel47->Color==clRed)     TForm1::Panel47->Color=clBlue;
     else                       TForm1::Panel47->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel39Click(TObject *Sender)
{
     if(TForm1::Panel30->Color==clRed)      TForm1::Panel30->Color=clBlue;
     else                       TForm1::Panel30->Color=clRed;
     if(TForm1::Panel38->Color==clRed)      TForm1::Panel38->Color=clBlue;
     else                       TForm1::Panel38->Color=clRed;
     if(TForm1::Panel39->Color==clRed)      TForm1::Panel39->Color=clBlue;
     else                       TForm1::Panel39->Color=clRed;
     if(TForm1::Panel40->Color==clRed)      TForm1::Panel40->Color=clBlue;
     else                       TForm1::Panel40->Color=clRed;
     if(TForm1::Panel48->Color==clRed)     TForm1::Panel48->Color=clBlue;
     else                       TForm1::Panel48->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel40Click(TObject *Sender)
{
     if(TForm1::Panel31->Color==clRed)      TForm1::Panel31->Color=clBlue;
     else                       TForm1::Panel31->Color=clRed;
     if(TForm1::Panel39->Color==clRed)      TForm1::Panel39->Color=clBlue;
     else                       TForm1::Panel39->Color=clRed;
     if(TForm1::Panel40->Color==clRed)      TForm1::Panel40->Color=clBlue;
     else                       TForm1::Panel40->Color=clRed;
     if(TForm1::Panel41->Color==clRed)      TForm1::Panel41->Color=clBlue;
     else                       TForm1::Panel41->Color=clRed;
     if(TForm1::Panel49->Color==clRed)     TForm1::Panel49->Color=clBlue;
     else                       TForm1::Panel49->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel41Click(TObject *Sender)
{
     if(TForm1::Panel32->Color==clRed)      TForm1::Panel32->Color=clBlue;
     else                       TForm1::Panel32->Color=clRed;
     if(TForm1::Panel40->Color==clRed)      TForm1::Panel40->Color=clBlue;
     else                       TForm1::Panel40->Color=clRed;
     if(TForm1::Panel41->Color==clRed)      TForm1::Panel41->Color=clBlue;
     else                       TForm1::Panel41->Color=clRed;
     if(TForm1::Panel42->Color==clRed)      TForm1::Panel42->Color=clBlue;
     else                       TForm1::Panel42->Color=clRed;
     if(TForm1::Panel50->Color==clRed)     TForm1::Panel50->Color=clBlue;
     else                       TForm1::Panel50->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel42Click(TObject *Sender)
{
     if(TForm1::Panel33->Color==clRed)      TForm1::Panel33->Color=clBlue;
     else                       TForm1::Panel33->Color=clRed;
     if(TForm1::Panel41->Color==clRed)      TForm1::Panel41->Color=clBlue;
     else                       TForm1::Panel41->Color=clRed;
     if(TForm1::Panel42->Color==clRed)      TForm1::Panel42->Color=clBlue;
     else                       TForm1::Panel42->Color=clRed;
     if(TForm1::Panel43->Color==clRed)      TForm1::Panel43->Color=clBlue;
     else                       TForm1::Panel43->Color=clRed;
     if(TForm1::Panel51->Color==clRed)     TForm1::Panel51->Color=clBlue;
     else                       TForm1::Panel51->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel43Click(TObject *Sender)
{
     if(TForm1::Panel34->Color==clRed)      TForm1::Panel34->Color=clBlue;
     else                       TForm1::Panel34->Color=clRed;
     if(TForm1::Panel42->Color==clRed)      TForm1::Panel42->Color=clBlue;
     else                       TForm1::Panel42->Color=clRed;
     if(TForm1::Panel43->Color==clRed)      TForm1::Panel43->Color=clBlue;
     else                       TForm1::Panel43->Color=clRed;
     if(TForm1::Panel44->Color==clRed)      TForm1::Panel44->Color=clBlue;
     else                       TForm1::Panel44->Color=clRed;
     if(TForm1::Panel52->Color==clRed)     TForm1::Panel52->Color=clBlue;
     else                       TForm1::Panel52->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel44Click(TObject *Sender)
{
     if(TForm1::Panel35->Color==clRed)      TForm1::Panel35->Color=clBlue;
     else                       TForm1::Panel35->Color=clRed;
     if(TForm1::Panel43->Color==clRed)      TForm1::Panel43->Color=clBlue;
     else                       TForm1::Panel43->Color=clRed;
     if(TForm1::Panel44->Color==clRed)      TForm1::Panel44->Color=clBlue;
     else                       TForm1::Panel44->Color=clRed;
     if(TForm1::Panel45->Color==clRed)      TForm1::Panel45->Color=clBlue;
     else                       TForm1::Panel45->Color=clRed;
     if(TForm1::Panel53->Color==clRed)     TForm1::Panel53->Color=clBlue;
     else                       TForm1::Panel53->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel45Click(TObject *Sender)
{
     if(TForm1::Panel36->Color==clRed)      TForm1::Panel36->Color=clBlue;
     else                       TForm1::Panel36->Color=clRed;
     if(TForm1::Panel44->Color==clRed)      TForm1::Panel44->Color=clBlue;
     else                       TForm1::Panel44->Color=clRed;
     if(TForm1::Panel45->Color==clRed)      TForm1::Panel45->Color=clBlue;
     else                       TForm1::Panel45->Color=clRed;
     if(TForm1::Panel54->Color==clRed)     TForm1::Panel54->Color=clBlue;
     else                       TForm1::Panel54->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel46Click(TObject *Sender)
{
     if(TForm1::Panel37->Color==clRed)      TForm1::Panel37->Color=clBlue;
     else                       TForm1::Panel37->Color=clRed;
     if(TForm1::Panel46->Color==clRed)      TForm1::Panel46->Color=clBlue;
     else                       TForm1::Panel46->Color=clRed;
     if(TForm1::Panel47->Color==clRed)      TForm1::Panel47->Color=clBlue;
     else                       TForm1::Panel47->Color=clRed;
     if(TForm1::Panel55->Color==clRed)     TForm1::Panel55->Color=clBlue;
     else                       TForm1::Panel55->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel47Click(TObject *Sender)
{
     if(TForm1::Panel38->Color==clRed)      TForm1::Panel38->Color=clBlue;
     else                       TForm1::Panel38->Color=clRed;
     if(TForm1::Panel46->Color==clRed)      TForm1::Panel46->Color=clBlue;
     else                       TForm1::Panel46->Color=clRed;
     if(TForm1::Panel47->Color==clRed)      TForm1::Panel47->Color=clBlue;
     else                       TForm1::Panel47->Color=clRed;
     if(TForm1::Panel48->Color==clRed)      TForm1::Panel48->Color=clBlue;
     else                       TForm1::Panel48->Color=clRed;
     if(TForm1::Panel56->Color==clRed)     TForm1::Panel56->Color=clBlue;
     else                       TForm1::Panel56->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel48Click(TObject *Sender)
{
     if(TForm1::Panel39->Color==clRed)      TForm1::Panel39->Color=clBlue;
     else                       TForm1::Panel39->Color=clRed;
     if(TForm1::Panel47->Color==clRed)      TForm1::Panel47->Color=clBlue;
     else                       TForm1::Panel47->Color=clRed;
     if(TForm1::Panel48->Color==clRed)      TForm1::Panel48->Color=clBlue;
     else                       TForm1::Panel48->Color=clRed;
     if(TForm1::Panel49->Color==clRed)      TForm1::Panel49->Color=clBlue;
     else                       TForm1::Panel49->Color=clRed;
     if(TForm1::Panel57->Color==clRed)     TForm1::Panel57->Color=clBlue;
     else                       TForm1::Panel57->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel49Click(TObject *Sender)
{
     if(TForm1::Panel40->Color==clRed)      TForm1::Panel40->Color=clBlue;
     else                       TForm1::Panel40->Color=clRed;
     if(TForm1::Panel48->Color==clRed)      TForm1::Panel48->Color=clBlue;
     else                       TForm1::Panel48->Color=clRed;
     if(TForm1::Panel49->Color==clRed)      TForm1::Panel49->Color=clBlue;
     else                       TForm1::Panel49->Color=clRed;
     if(TForm1::Panel50->Color==clRed)      TForm1::Panel50->Color=clBlue;
     else                       TForm1::Panel50->Color=clRed;
     if(TForm1::Panel58->Color==clRed)     TForm1::Panel58->Color=clBlue;
     else                       TForm1::Panel58->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel50Click(TObject *Sender)
{
     if(TForm1::Panel41->Color==clRed)      TForm1::Panel41->Color=clBlue;
     else                       TForm1::Panel41->Color=clRed;
     if(TForm1::Panel49->Color==clRed)      TForm1::Panel49->Color=clBlue;
     else                       TForm1::Panel49->Color=clRed;
     if(TForm1::Panel50->Color==clRed)      TForm1::Panel50->Color=clBlue;
     else                       TForm1::Panel50->Color=clRed;
     if(TForm1::Panel51->Color==clRed)      TForm1::Panel51->Color=clBlue;
     else                       TForm1::Panel51->Color=clRed;
     if(TForm1::Panel59->Color==clRed)     TForm1::Panel59->Color=clBlue;
     else                       TForm1::Panel59->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel51Click(TObject *Sender)
{
     if(TForm1::Panel42->Color==clRed)      TForm1::Panel42->Color=clBlue;
     else                       TForm1::Panel42->Color=clRed;
     if(TForm1::Panel50->Color==clRed)      TForm1::Panel50->Color=clBlue;
     else                       TForm1::Panel50->Color=clRed;
     if(TForm1::Panel51->Color==clRed)      TForm1::Panel51->Color=clBlue;
     else                       TForm1::Panel51->Color=clRed;
     if(TForm1::Panel52->Color==clRed)      TForm1::Panel52->Color=clBlue;
     else                       TForm1::Panel52->Color=clRed;
     if(TForm1::Panel60->Color==clRed)     TForm1::Panel60->Color=clBlue;
     else                       TForm1::Panel60->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel52Click(TObject *Sender)
{
     if(TForm1::Panel43->Color==clRed)      TForm1::Panel43->Color=clBlue;
     else                       TForm1::Panel43->Color=clRed;
     if(TForm1::Panel51->Color==clRed)      TForm1::Panel51->Color=clBlue;
     else                       TForm1::Panel51->Color=clRed;
     if(TForm1::Panel52->Color==clRed)      TForm1::Panel52->Color=clBlue;
     else                       TForm1::Panel52->Color=clRed;
     if(TForm1::Panel53->Color==clRed)      TForm1::Panel53->Color=clBlue;
     else                       TForm1::Panel53->Color=clRed;
     if(TForm1::Panel61->Color==clRed)     TForm1::Panel61->Color=clBlue;
     else                       TForm1::Panel61->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel53Click(TObject *Sender)
{
     if(TForm1::Panel44->Color==clRed)      TForm1::Panel44->Color=clBlue;
     else                       TForm1::Panel44->Color=clRed;
     if(TForm1::Panel52->Color==clRed)      TForm1::Panel52->Color=clBlue;
     else                       TForm1::Panel52->Color=clRed;
     if(TForm1::Panel53->Color==clRed)      TForm1::Panel53->Color=clBlue;
     else                       TForm1::Panel53->Color=clRed;
     if(TForm1::Panel54->Color==clRed)      TForm1::Panel54->Color=clBlue;
     else                       TForm1::Panel54->Color=clRed;
     if(TForm1::Panel62->Color==clRed)     TForm1::Panel62->Color=clBlue;
     else                       TForm1::Panel62->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel54Click(TObject *Sender)
{
     if(TForm1::Panel45->Color==clRed)      TForm1::Panel45->Color=clBlue;
     else                       TForm1::Panel45->Color=clRed;
     if(TForm1::Panel53->Color==clRed)      TForm1::Panel53->Color=clBlue;
     else                       TForm1::Panel53->Color=clRed;
     if(TForm1::Panel54->Color==clRed)      TForm1::Panel54->Color=clBlue;
     else                       TForm1::Panel54->Color=clRed;
     if(TForm1::Panel63->Color==clRed)     TForm1::Panel63->Color=clBlue;
     else                       TForm1::Panel63->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel55Click(TObject *Sender)
{
     if(TForm1::Panel46->Color==clRed)      TForm1::Panel46->Color=clBlue;
     else                       TForm1::Panel46->Color=clRed;
     if(TForm1::Panel55->Color==clRed)      TForm1::Panel55->Color=clBlue;
     else                       TForm1::Panel55->Color=clRed;
     if(TForm1::Panel56->Color==clRed)      TForm1::Panel56->Color=clBlue;
     else                       TForm1::Panel56->Color=clRed;
     if(TForm1::Panel64->Color==clRed)     TForm1::Panel64->Color=clBlue;
     else                       TForm1::Panel64->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel56Click(TObject *Sender)
{
     if(TForm1::Panel47->Color==clRed)      TForm1::Panel47->Color=clBlue;
     else                       TForm1::Panel47->Color=clRed;
     if(TForm1::Panel55->Color==clRed)      TForm1::Panel55->Color=clBlue;
     else                       TForm1::Panel55->Color=clRed;
     if(TForm1::Panel56->Color==clRed)      TForm1::Panel56->Color=clBlue;
     else                       TForm1::Panel56->Color=clRed;
     if(TForm1::Panel57->Color==clRed)      TForm1::Panel57->Color=clBlue;
     else                       TForm1::Panel57->Color=clRed;
     if(TForm1::Panel65->Color==clRed)     TForm1::Panel65->Color=clBlue;
     else                       TForm1::Panel65->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel57Click(TObject *Sender)
{
     if(TForm1::Panel48->Color==clRed)      TForm1::Panel48->Color=clBlue;
     else                       TForm1::Panel48->Color=clRed;
     if(TForm1::Panel56->Color==clRed)      TForm1::Panel56->Color=clBlue;
     else                       TForm1::Panel56->Color=clRed;
     if(TForm1::Panel57->Color==clRed)      TForm1::Panel57->Color=clBlue;
     else                       TForm1::Panel57->Color=clRed;
     if(TForm1::Panel58->Color==clRed)      TForm1::Panel58->Color=clBlue;
     else                       TForm1::Panel58->Color=clRed;
     if(TForm1::Panel66->Color==clRed)     TForm1::Panel66->Color=clBlue;
     else                       TForm1::Panel66->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel58Click(TObject *Sender)
{
     if(TForm1::Panel49->Color==clRed)      TForm1::Panel49->Color=clBlue;
     else                       TForm1::Panel49->Color=clRed;
     if(TForm1::Panel57->Color==clRed)      TForm1::Panel57->Color=clBlue;
     else                       TForm1::Panel57->Color=clRed;
     if(TForm1::Panel58->Color==clRed)      TForm1::Panel58->Color=clBlue;
     else                       TForm1::Panel58->Color=clRed;
     if(TForm1::Panel59->Color==clRed)      TForm1::Panel59->Color=clBlue;
     else                       TForm1::Panel59->Color=clRed;
     if(TForm1::Panel67->Color==clRed)     TForm1::Panel67->Color=clBlue;
     else                       TForm1::Panel67->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel59Click(TObject *Sender)
{
     if(TForm1::Panel50->Color==clRed)      TForm1::Panel50->Color=clBlue;
     else                       TForm1::Panel50->Color=clRed;
     if(TForm1::Panel58->Color==clRed)      TForm1::Panel58->Color=clBlue;
     else                       TForm1::Panel58->Color=clRed;
     if(TForm1::Panel59->Color==clRed)      TForm1::Panel59->Color=clBlue;
     else                       TForm1::Panel59->Color=clRed;
     if(TForm1::Panel60->Color==clRed)      TForm1::Panel60->Color=clBlue;
     else                       TForm1::Panel60->Color=clRed;
     if(TForm1::Panel68->Color==clRed)     TForm1::Panel68->Color=clBlue;
     else                       TForm1::Panel68->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel60Click(TObject *Sender)
{
     if(TForm1::Panel51->Color==clRed)      TForm1::Panel51->Color=clBlue;
     else                       TForm1::Panel51->Color=clRed;
     if(TForm1::Panel59->Color==clRed)      TForm1::Panel59->Color=clBlue;
     else                       TForm1::Panel59->Color=clRed;
     if(TForm1::Panel60->Color==clRed)      TForm1::Panel60->Color=clBlue;
     else                       TForm1::Panel60->Color=clRed;
     if(TForm1::Panel61->Color==clRed)      TForm1::Panel61->Color=clBlue;
     else                       TForm1::Panel61->Color=clRed;
     if(TForm1::Panel69->Color==clRed)     TForm1::Panel69->Color=clBlue;
     else                       TForm1::Panel69->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel61Click(TObject *Sender)
{
     if(TForm1::Panel52->Color==clRed)      TForm1::Panel52->Color=clBlue;
     else                       TForm1::Panel52->Color=clRed;
     if(TForm1::Panel60->Color==clRed)      TForm1::Panel60->Color=clBlue;
     else                       TForm1::Panel60->Color=clRed;
     if(TForm1::Panel61->Color==clRed)      TForm1::Panel61->Color=clBlue;
     else                       TForm1::Panel61->Color=clRed;
     if(TForm1::Panel62->Color==clRed)      TForm1::Panel62->Color=clBlue;
     else                       TForm1::Panel62->Color=clRed;
     if(TForm1::Panel70->Color==clRed)     TForm1::Panel70->Color=clBlue;
     else                       TForm1::Panel70->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel62Click(TObject *Sender)
{
     if(TForm1::Panel53->Color==clRed)      TForm1::Panel53->Color=clBlue;
     else                       TForm1::Panel53->Color=clRed;
     if(TForm1::Panel61->Color==clRed)      TForm1::Panel61->Color=clBlue;
     else                       TForm1::Panel61->Color=clRed;
     if(TForm1::Panel62->Color==clRed)      TForm1::Panel62->Color=clBlue;
     else                       TForm1::Panel62->Color=clRed;
     if(TForm1::Panel63->Color==clRed)      TForm1::Panel63->Color=clBlue;
     else                       TForm1::Panel63->Color=clRed;
     if(TForm1::Panel71->Color==clRed)     TForm1::Panel71->Color=clBlue;
     else                       TForm1::Panel71->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel63Click(TObject *Sender)
{
     if(TForm1::Panel54->Color==clRed)      TForm1::Panel54->Color=clBlue;
     else                       TForm1::Panel54->Color=clRed;
     if(TForm1::Panel62->Color==clRed)      TForm1::Panel62->Color=clBlue;
     else                       TForm1::Panel62->Color=clRed;
     if(TForm1::Panel63->Color==clRed)      TForm1::Panel63->Color=clBlue;
     else                       TForm1::Panel63->Color=clRed;
     if(TForm1::Panel72->Color==clRed)     TForm1::Panel72->Color=clBlue;
     else                       TForm1::Panel72->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel64Click(TObject *Sender)
{
     if(TForm1::Panel55->Color==clRed)      TForm1::Panel55->Color=clBlue;
     else                       TForm1::Panel55->Color=clRed;
     if(TForm1::Panel64->Color==clRed)      TForm1::Panel64->Color=clBlue;
     else                       TForm1::Panel64->Color=clRed;
     if(TForm1::Panel65->Color==clRed)      TForm1::Panel65->Color=clBlue;
     else                       TForm1::Panel65->Color=clRed;
     if(TForm1::Panel73->Color==clRed)     TForm1::Panel73->Color=clBlue;
     else                       TForm1::Panel73->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel65Click(TObject *Sender)
{
     if(TForm1::Panel56->Color==clRed)      TForm1::Panel56->Color=clBlue;
     else                       TForm1::Panel56->Color=clRed;
     if(TForm1::Panel64->Color==clRed)      TForm1::Panel64->Color=clBlue;
     else                       TForm1::Panel64->Color=clRed;
     if(TForm1::Panel65->Color==clRed)      TForm1::Panel65->Color=clBlue;
     else                       TForm1::Panel65->Color=clRed;
     if(TForm1::Panel66->Color==clRed)      TForm1::Panel66->Color=clBlue;
     else                       TForm1::Panel66->Color=clRed;
     if(TForm1::Panel74->Color==clRed)     TForm1::Panel74->Color=clBlue;
     else                       TForm1::Panel74->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel66Click(TObject *Sender)
{
     if(TForm1::Panel57->Color==clRed)      TForm1::Panel57->Color=clBlue;
     else                       TForm1::Panel57->Color=clRed;
     if(TForm1::Panel65->Color==clRed)      TForm1::Panel65->Color=clBlue;
     else                       TForm1::Panel65->Color=clRed;
     if(TForm1::Panel66->Color==clRed)      TForm1::Panel66->Color=clBlue;
     else                       TForm1::Panel66->Color=clRed;
     if(TForm1::Panel67->Color==clRed)      TForm1::Panel67->Color=clBlue;
     else                       TForm1::Panel67->Color=clRed;
     if(TForm1::Panel75->Color==clRed)     TForm1::Panel75->Color=clBlue;
     else                       TForm1::Panel75->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel67Click(TObject *Sender)
{
     if(TForm1::Panel58->Color==clRed)      TForm1::Panel58->Color=clBlue;
     else                       TForm1::Panel58->Color=clRed;
     if(TForm1::Panel66->Color==clRed)      TForm1::Panel66->Color=clBlue;
     else                       TForm1::Panel66->Color=clRed;
     if(TForm1::Panel67->Color==clRed)      TForm1::Panel67->Color=clBlue;
     else                       TForm1::Panel67->Color=clRed;
     if(TForm1::Panel68->Color==clRed)      TForm1::Panel68->Color=clBlue;
     else                       TForm1::Panel68->Color=clRed;
     if(TForm1::Panel76->Color==clRed)     TForm1::Panel76->Color=clBlue;
     else                       TForm1::Panel76->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel68Click(TObject *Sender)
{
     if(TForm1::Panel59->Color==clRed)      TForm1::Panel59->Color=clBlue;
     else                       TForm1::Panel59->Color=clRed;
     if(TForm1::Panel67->Color==clRed)      TForm1::Panel67->Color=clBlue;
     else                       TForm1::Panel67->Color=clRed;
     if(TForm1::Panel68->Color==clRed)      TForm1::Panel68->Color=clBlue;
     else                       TForm1::Panel68->Color=clRed;
     if(TForm1::Panel69->Color==clRed)      TForm1::Panel69->Color=clBlue;
     else                       TForm1::Panel69->Color=clRed;
     if(TForm1::Panel77->Color==clRed)     TForm1::Panel77->Color=clBlue;
     else                       TForm1::Panel77->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel69Click(TObject *Sender)
{
     if(TForm1::Panel60->Color==clRed)      TForm1::Panel60->Color=clBlue;
     else                       TForm1::Panel60->Color=clRed;
     if(TForm1::Panel68->Color==clRed)      TForm1::Panel68->Color=clBlue;
     else                       TForm1::Panel68->Color=clRed;
     if(TForm1::Panel69->Color==clRed)      TForm1::Panel69->Color=clBlue;
     else                       TForm1::Panel69->Color=clRed;
     if(TForm1::Panel70->Color==clRed)      TForm1::Panel70->Color=clBlue;
     else                       TForm1::Panel70->Color=clRed;
     if(TForm1::Panel78->Color==clRed)     TForm1::Panel78->Color=clBlue;
     else                       TForm1::Panel78->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel70Click(TObject *Sender)
{
     if(TForm1::Panel61->Color==clRed)      TForm1::Panel61->Color=clBlue;
     else                       TForm1::Panel61->Color=clRed;
     if(TForm1::Panel69->Color==clRed)      TForm1::Panel69->Color=clBlue;
     else                       TForm1::Panel69->Color=clRed;
     if(TForm1::Panel70->Color==clRed)      TForm1::Panel70->Color=clBlue;
     else                       TForm1::Panel70->Color=clRed;
     if(TForm1::Panel71->Color==clRed)      TForm1::Panel71->Color=clBlue;
     else                       TForm1::Panel71->Color=clRed;
     if(TForm1::Panel79->Color==clRed)     TForm1::Panel79->Color=clBlue;
     else                       TForm1::Panel79->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel71Click(TObject *Sender)
{
     if(TForm1::Panel62->Color==clRed)      TForm1::Panel62->Color=clBlue;
     else                       TForm1::Panel62->Color=clRed;
     if(TForm1::Panel70->Color==clRed)      TForm1::Panel70->Color=clBlue;
     else                       TForm1::Panel70->Color=clRed;
     if(TForm1::Panel71->Color==clRed)      TForm1::Panel71->Color=clBlue;
     else                       TForm1::Panel71->Color=clRed;
     if(TForm1::Panel72->Color==clRed)      TForm1::Panel72->Color=clBlue;
     else                       TForm1::Panel72->Color=clRed;
     if(TForm1::Panel80->Color==clRed)     TForm1::Panel80->Color=clBlue;
     else                       TForm1::Panel80->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel72Click(TObject *Sender)
{
     if(TForm1::Panel63->Color==clRed)      TForm1::Panel63->Color=clBlue;
     else                       TForm1::Panel63->Color=clRed;
     if(TForm1::Panel71->Color==clRed)      TForm1::Panel71->Color=clBlue;
     else                       TForm1::Panel71->Color=clRed;
     if(TForm1::Panel72->Color==clRed)      TForm1::Panel72->Color=clBlue;
     else                       TForm1::Panel72->Color=clRed;
     if(TForm1::Panel81->Color==clRed)     TForm1::Panel81->Color=clBlue;
     else                       TForm1::Panel81->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel73Click(TObject *Sender)
{
     if(TForm1::Panel64->Color==clRed)      TForm1::Panel64->Color=clBlue;
     else                       TForm1::Panel64->Color=clRed;
     if(TForm1::Panel73->Color==clRed)      TForm1::Panel73->Color=clBlue;
     else                       TForm1::Panel73->Color=clRed;
     if(TForm1::Panel74->Color==clRed)      TForm1::Panel74->Color=clBlue;
     else                       TForm1::Panel74->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel74Click(TObject *Sender)
{
     if(TForm1::Panel65->Color==clRed)      TForm1::Panel65->Color=clBlue;
     else                       TForm1::Panel65->Color=clRed;
     if(TForm1::Panel73->Color==clRed)      TForm1::Panel73->Color=clBlue;
     else                       TForm1::Panel73->Color=clRed;
     if(TForm1::Panel74->Color==clRed)      TForm1::Panel74->Color=clBlue;
     else                       TForm1::Panel74->Color=clRed;
     if(TForm1::Panel75->Color==clRed)      TForm1::Panel75->Color=clBlue;
     else                       TForm1::Panel75->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel75Click(TObject *Sender)
{
     if(TForm1::Panel66->Color==clRed)      TForm1::Panel66->Color=clBlue;
     else                       TForm1::Panel66->Color=clRed;
     if(TForm1::Panel74->Color==clRed)      TForm1::Panel74->Color=clBlue;
     else                       TForm1::Panel74->Color=clRed;
     if(TForm1::Panel75->Color==clRed)      TForm1::Panel75->Color=clBlue;
     else                       TForm1::Panel75->Color=clRed;
     if(TForm1::Panel76->Color==clRed)      TForm1::Panel76->Color=clBlue;
     else                       TForm1::Panel76->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel76Click(TObject *Sender)
{
     if(TForm1::Panel67->Color==clRed)      TForm1::Panel67->Color=clBlue;
     else                       TForm1::Panel67->Color=clRed;
     if(TForm1::Panel75->Color==clRed)      TForm1::Panel75->Color=clBlue;
     else                       TForm1::Panel75->Color=clRed;
     if(TForm1::Panel76->Color==clRed)      TForm1::Panel76->Color=clBlue;
     else                       TForm1::Panel76->Color=clRed;
     if(TForm1::Panel77->Color==clRed)      TForm1::Panel77->Color=clBlue;
     else                       TForm1::Panel77->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel77Click(TObject *Sender)
{
     if(TForm1::Panel68->Color==clRed)      TForm1::Panel68->Color=clBlue;
     else                       TForm1::Panel68->Color=clRed;
     if(TForm1::Panel76->Color==clRed)      TForm1::Panel76->Color=clBlue;
     else                       TForm1::Panel76->Color=clRed;
     if(TForm1::Panel77->Color==clRed)      TForm1::Panel77->Color=clBlue;
     else                       TForm1::Panel77->Color=clRed;
     if(TForm1::Panel78->Color==clRed)      TForm1::Panel78->Color=clBlue;
     else                       TForm1::Panel78->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel78Click(TObject *Sender)
{
     if(TForm1::Panel69->Color==clRed)      TForm1::Panel69->Color=clBlue;
     else                       TForm1::Panel69->Color=clRed;
     if(TForm1::Panel77->Color==clRed)      TForm1::Panel77->Color=clBlue;
     else                       TForm1::Panel77->Color=clRed;
     if(TForm1::Panel78->Color==clRed)      TForm1::Panel78->Color=clBlue;
     else                       TForm1::Panel78->Color=clRed;
     if(TForm1::Panel79->Color==clRed)      TForm1::Panel79->Color=clBlue;
     else                       TForm1::Panel79->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel79Click(TObject *Sender)
{
     if(TForm1::Panel70->Color==clRed)      TForm1::Panel70->Color=clBlue;
     else                       TForm1::Panel70->Color=clRed;
     if(TForm1::Panel78->Color==clRed)      TForm1::Panel78->Color=clBlue;
     else                       TForm1::Panel78->Color=clRed;
     if(TForm1::Panel79->Color==clRed)      TForm1::Panel79->Color=clBlue;
     else                       TForm1::Panel79->Color=clRed;
     if(TForm1::Panel80->Color==clRed)      TForm1::Panel80->Color=clBlue;
     else                       TForm1::Panel80->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel80Click(TObject *Sender)
{
     if(TForm1::Panel71->Color==clRed)      TForm1::Panel71->Color=clBlue;
     else                       TForm1::Panel71->Color=clRed;
     if(TForm1::Panel79->Color==clRed)      TForm1::Panel79->Color=clBlue;
     else                       TForm1::Panel79->Color=clRed;
     if(TForm1::Panel80->Color==clRed)      TForm1::Panel80->Color=clBlue;
     else                       TForm1::Panel80->Color=clRed;
     if(TForm1::Panel81->Color==clRed)      TForm1::Panel81->Color=clBlue;
     else                       TForm1::Panel81->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel81Click(TObject *Sender)
{
     if(TForm1::Panel72->Color==clRed)      TForm1::Panel72->Color=clBlue;
     else                       TForm1::Panel72->Color=clRed;
     if(TForm1::Panel80->Color==clRed)      TForm1::Panel80->Color=clBlue;
     else                       TForm1::Panel80->Color=clRed;
     if(TForm1::Panel81->Color==clRed)      TForm1::Panel81->Color=clBlue;
     else                       TForm1::Panel81->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    for(int i=0;i<81;i++)
    {
        switch(rand()%2)
        {
        case 0:         block[i]->Color=clRed;         break;
        case 1:         block[i]->Color=clBlue;        break;
        }
    }
}
//---------------------------------------------------------------------------

