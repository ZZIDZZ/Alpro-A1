/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 maret 2022
*/
#include <stdio.h>

int main() {
    // kamus
    float v0, t, y;
    const float g = 9.807f;
    // Algoritma
    //input
    printf("Masukkan nilai v0: ");
    scanf("%f", & v0);
    printf("Masukkan nilai t: ");
    scanf("%f", & t);

    //proses
    y = v0 * t - (g * t * t) / 2;

    // output
    printf("s: %f", y);

    return 0;
}