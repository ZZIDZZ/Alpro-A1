/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int faktorialN(int N){
    //kamus lokal
    int sum, i;

    //algoritma
    if(N>0){
        sum = 1;
        for (i=2;i<=N;i++){
            sum *=i;
        }
    }
    else sum = 1;
    return sum;
}

int main(){
// kamus
    int N, i, c,j;
// Algoritma
    //input
    scanf("%d",&N);
    printf("%d", faktorialN(N));
    return 0;
}