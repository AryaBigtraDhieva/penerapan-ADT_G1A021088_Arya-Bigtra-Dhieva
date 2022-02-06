#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string.h>

typedef struct
{
    char Nama[30];      /* absis */
    char Fasilitas[10];      /* ordinat */
} pendataan_fasilitas;


//pendataan_fasilitas makepoint( char Nama[30], char Fasilitas[10]);
void bacapoint(pendataan_fasilitas p);
void tulispoint(pendataan_fasilitas p);
void tambah();
void display (pendataan_fasilitas p);
#endif // HEADER_H_INCLUDED