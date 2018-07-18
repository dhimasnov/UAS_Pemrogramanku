#include<conio>
#include<iostream>
#include<stdio>
garis1()
{
cout<<" ------------------------------------------------------------------------\n";
}
garis2()
{
cout<<" ========================================================================\n";
}
class kerja
{
public :
char nama[25];
int jam; long total;
float lembur(long l);
};kerja pegawai[100];
main( )
{
char tgl[15],maning;
int i,jml,a=1,b=1;
long tot_honor=0,honor=25000;
nduwur:
clrscr();

puts("                             PT. Meriang Gembira\n");
cout<<"\n Jumlah        : ";cin>>jml;
cout<<" Tanggal Input : ";cin>>tgl;
garis1();
for(i=0;i<jml;i++)
{
cout<<" Data Ke- "<<a++<<endl;
cout<<" Nama Pegawai       : ";gets(pegawai[i].nama);
cout<<" Jumlah Jam Kerja   : ";cin>>pegawai[i].jam;
}
clrscr( );
puts("                             PT. Meriang Gembira\n");
cout<<"\n Tanggal : "<<tgl<<endl;
garis2();
cout<<" No.     Nama                   Honor      Jumlah        Honor      Total\n";
cout<<"        Pegawai                           Jam Kerja      Lembur     Honor\n";
garis2();
for(i=0;i<jml;i++)
{
gotoxy(2,wherey());cout<<b++<<".";
gotoxy(9,wherey());cout<<pegawai[i].nama;
gotoxy(33,wherey());cout<<honor;
gotoxy(46,wherey());cout<<pegawai[i].jam;
gotoxy(58,wherey());cout<<pegawai[i].lembur(pegawai[i].jam);
pegawai[i].total=honor+pegawai[i].lembur(pegawai[i].jam);
gotoxy(69,wherey());cout<<pegawai[i].total<<endl;
tot_honor=tot_honor+pegawai[i].total;
}
garis2();
cout<<" Total Honor Pegawai Sebesar :";
gotoxy(69,wherey());cout<<tot_honor<<endl;
puts("                             \n\n\nMATUR THANK YOU\n");
cout<<"\nBadhe Hitung Again?? [Y/T] : ";
cin>>maning;
if (maning == 'Y' || maning == 'y')
goto nduwur;
getch( );
}
float kerja::lembur(long l)
{
if (l>8)
return(l-8)*1500;
else
return 0;
}