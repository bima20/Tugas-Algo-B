#include <iostream>
using namespace::std;

struct Kurniawan{
int uts, uas, tugas, absen;
float total;
char grade;
};
Kurniawan bima[6];
void garis(){
cout<<"\n__________________________________________";
}
void inputan(){
cout<<"\n Nilai UTS    : "; cin>>bima[6].uts;
cout<<" Nilai UAS    : "; cin>>bima[6].uas;
cout<<" Nilai Tugas  : "; cin>>bima[6].tugas;
cout<<" Absensi      : "; cin>>bima[6].absen;
garis();
}
float percabangan(float total){
if (bima[6].total>80)
    bima[6].grade='A';
else if (bima[6].total>60)
    bima[6].grade='B';
else if (bima[6].total>40)
    bima[6].grade='C';
else if (bima[6].total>20)
    bima[6].grade='D';
else if (bima[6].total<21)
    bima[6].grade='E';
    cout<<"\n Bobot nilai anda adalah : "<<bima[6].grade;
}
float rumus(float huts,float huas,float htugas,float absensi){
huts=bima[6].uts*0.2;
huas=bima[6].uas*0.3;
htugas=bima[6].tugas*0.35;
absensi=bima[6].tugas*0.15;
cout<<"\n Presentase nilai UTS   : "<<huts;
cout<<"\n Presentase nilai UAS   : "<<huas;
cout<<"\n Presentase nilai Tugas : "<<htugas;
cout<<"\n Presentase absensi     : "<<absensi;
garis();
bima[6].total=huts+huas+htugas+absensi;
cout<<"\n Total nilai akhir aanda adalah : "<<bima[6].total;
}
main(){
    double a,b,c,d;
inputan();
rumus(a,b,c,d);
percabangan(bima[6].total);
garis();
}
