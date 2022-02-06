#include <iostream>
#include <stdio.h>
#include "Header.h"
#include <string.h>
using namespace std;
// pendataan_fasilitas makepoint( char Nama[30], char Fasilitas[10])
// {
//       pendataan_fasilitas p;

//       p.Nama = Nama;
//       p.Fasilitas = Fasilitas;

//       return p;
// }
void bacapoint(pendataan_fasilitas p)
{
    //membaca nilai x dan y dari keyboard
    char Nama,Fasilitas;
    cout << "Masukkan Nama Anda : ";
    cin >> p.Nama;

 
    cout << "Komputer atau Laptop? : ";
    cin >> p.Fasilitas;

    //p = makepoint(Nama,Fasilitas);
}

void tulispoint(pendataan_fasilitas p)
{
     cout << p.Nama << "Memakai" << p.Fasilitas;
}
void tambah(){
    pendataan_fasilitas p;
 cout << "Masukkan Nama Anda: "; cin >> p.Nama;
    cout << "Komputer atau laptop: "; cin >> p.Fasilitas;

}
void display (pendataan_fasilitas p){
cout << "Nama: " << p.Nama << endl;
   cout << "Fasilitas: " << p.Fasilitas << endl;

}