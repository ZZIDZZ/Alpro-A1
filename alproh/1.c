/*
 * Nama : Zidan Rafindra Utomo
 * NIM  : 24060121130051
 * tgl pengerjaan: 9 maret 2022
*/

#include <stdio.h>

int main(){
// kamus
    float v0,t,a,s;
    
// Algoritma
    //input
    printf("Masukkan nilai v0: ");
    scanf("%f", &v0);
    printf("Masukkan nilai t: ");
    scanf("%f", &t);
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    
    //proses
    s = v0*t + (a*t*t)/2;
    
    // output
    printf("s: %f", s);
    
    return 0;
}