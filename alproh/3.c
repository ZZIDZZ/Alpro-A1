/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 maret 2022
*/
#include <stdio.h>

int main() {
    // kamus
    float m, v, r, f;

    // Algoritma
    //input
    printf("Masukkan nilai m: ");
    scanf("%f", & m);
    printf("Masukkan nilai v: ");
    scanf("%f", & v);
    printf("Masukkan nilai r: ");
    scanf("%f", & r);

    //proses
    f = m * (v * v) / r;

    // output
    printf("f: %f", f);

    return 0;
}