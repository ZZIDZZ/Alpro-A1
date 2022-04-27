/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N, i,c,sum;
    
// Algoritma

    //input
    scanf("%d",&N);
    sum = 0;

    //proses
    for(i=1;i<=N;i++){
        c = (1/2)*i*(i+1);
        if (i != N) 
            printf("%d +", c);
        else 
            printf("%d", c);
        sum += c;
    }
    printf("%d", sum);
    return 0;

}