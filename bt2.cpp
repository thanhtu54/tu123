#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct SinhVien {
    char ten[30];
    char gt[5];
    int age;
    float dT, dL, dH;
    float dtb = 0;
};

typedef SinhVien SV;

void nhap(SV& sv);
void nhapN(SV a[], int n);
void xuat(SV sv);
void xuatN(SV a[], int n);
void tinhDTB(SV& sv);
void sapxep(SV a[], int n);
void xeploai(SV a);
void xeploaiN(SV a[], int n);
void xuatFile(SV a[], int n, char fileName[]);