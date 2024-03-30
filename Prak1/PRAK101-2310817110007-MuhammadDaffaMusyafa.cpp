#include <iostream>

using namespace std;

struct mhs
{
char nama[20], nim[10], jurusan[20];
int sks, program;
};
struct mhs bayar[2];

main() {
    int var,tetap;
    for(int i=0; i<2; i++){
        cout<<"\n \n -----------------\n";
        cout<<"\nNama mhs           =";cin>>bayar[i].nama;
        cout<<"NIM          = ";cin>>bayar[i].nim;
        cout<<"Jurusan(TI, PTK)     = ";cin>>bayar[i].jurusan;
    input:
        cout<<"program{1=D3,2=S1} =";
        cin>>bayar[i].program;

    if (bayar[i].program<0 || bayar[i].program>2)
    {
        cout<<"program tidak sesuai\n";
        goto input;
    } cout<<"jumlah sks         =";cin>>bayar[i].sks;
    if (bayar[i].program==1)
    {
        tetap=50000;
        var=bayar[i].sks*25000;
    }else if(bayar[i].program==2)
    {
        tetap=75000;
        var=bayar[i].sks*50000;
    }cout<<endl;
    cout<<"\n\n-----------------------------------\n";
    cout<<"output ";
    cout<<"\nNama mhs           ="<<bayar[i].nama;
    cout<<"\nNIM          ="<<bayar[i].nim;
    cout<<"\nJurusan(TI, PTK)     ="<<bayar[i].jurusan;
    cout<<"\nprogram{1=D3,2=S1} ="<<bayar[i].program;
    cout<<"\njumlah sks         ="<<bayar[i].sks;
    cout<<"\nspp tetap        ="<<tetap;
    cout<<"\nspp variabel   ="<<var;
    cout<<endl<<endl;
}
}