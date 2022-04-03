/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 maret 2022
*/
#include <stdio.h>

int main() {
    // kamus
    float s1, s2, d1, d2, l, k;

    // Algoritma
    //input
    printf("Masukkan nilai s1: ");
    scanf("%f", & s1);
    printf("Masukkan nilai s2: ");
    scanf("%f", & s2);
    printf("Masukkan nilai d1: ");
    scanf("%f", & d1);
    printf("Masukkan nilai d2: ");
    scanf("%f", & d2);

    //proses
    l = 1 / 2 * d1 * d2;
    k = 2 * (s1 + s2);

    // output
    printf("l: %f\n", l);
    printf("k: %f\n", k);

    return 0;
}