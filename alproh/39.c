/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int N, i;
    bool isPrima;
// Algoritma
    //input
    scanf("%d",&N);
    isPrima = true;

    //proses
    for(i=2;i<N;i++){
        if (N % i == 0) 
            isPrima = false;
    }
    if (isPrima){
        printf("%d bukan bilangan prima", N);
    } else printf("%d bilangan prima", N);
    return 0;

}