/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N, i, c,j;
// Algoritma
    //input
    scanf("%d",&N);
    c = 0;
    //proses
    for(i=2;i<N;i++){
        for(j=2;j<i;j++){
            if(i % j == 0){
                c = 1;
            }
        }
        if (c == 0){
            printf("%d\n", i);
        }
        c = 0;
    }
    return 0;
}