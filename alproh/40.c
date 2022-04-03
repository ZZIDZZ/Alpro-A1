/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int N, i, c;
// Algoritma
    //input
    scanf("%d",&N);

    //proses
    for(i=2;i<N;i++){
        if (N % i == 0) 
            c+=i;
    }
    if (c+1 == N){
        printf("%d bilangan sempurna", N);
    } else printf("%d bukan bilangan sempurna", N);
    return 0;

}