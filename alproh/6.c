/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 maret 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses
    if (N % 2 == 0){
        N += 3;
        if (N % 5 == 0) {
            N += 5;
        }
        else{
            N += 2;
        }
    }
    else {
        N += 2;
        if (N % 3 == 0){
            N += 4;
        }
        else{
            N += 1;
        }
    }
       
    // output
    printf("N: %d", N);
    
    return 0;
}