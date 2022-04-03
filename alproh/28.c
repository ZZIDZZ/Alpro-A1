/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N, i,sum;
    
// Algoritma
    //input
    scanf("%d",&N);
    sum = 0;
    //proses
    for(i=0;i<=N;i++){
        sum+=i;
    }
    printf("%d", sum);
    return 0;

}