/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int N, i,j;
    bool isPrima;
    
// Algoritma
    //input
    scanf("%d",&N);
    //proses
    for(i=2;i<N;i++){
        isPrima = true;
        for(j = 2;j<1;j++){
            if(i%j==0) isPrima = false;
        }
        if(isPrima){
            printf("%d", i);
        }
    }
    return 0;

}