/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 maret 2022
*/
#include <stdio.h>

int main(){
// kamus
    float r,vb,vk;
    const float PHI = 3.1415;

// Algoritma
    //input
    printf("Masukkan nilai r: ");
    scanf("%f", &r);
    
    //proses
    vb = 4/3 * (PHI*r*r*r);
    vk = 1/2 * vb;

    // output
    printf("vb: %f\n", vb);
    printf("vk: %f\n", vk);
    
    return 0;
}