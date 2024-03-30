#include <iostream>
#include <string.h>

using namespace std;

struct plat
{
    char nama[20];
    char nomor[10];
    char jenis[10];
    char alamat[50];
    char kota[20];
};

main(){
    plat data;
    strcpy(data.nomor, " DA1234MK");
    strcpy(data.jenis, " RUSH");
    strcpy(data.nama, " Andika Hartanto");
    strcpy(data.alamat, "Jl. Kayu Tangi 1");
    strcpy(data.kota, "Banjarmasin");

    cout << "nomor plat = " << data.nomor << endl;
    cout << "jenis kendaraan = " << data.jenis << endl;
    cout << "nama pemilik = " << data.nama << endl;
    cout << "alamat = " << data.alamat << endl;
    cout << "kota = " << data.kota << endl;
}