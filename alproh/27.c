/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N, i,j;
    
// Algoritma
    //input
    scanf("%d",&N);
    
    //proses
    for(i=0;i<N;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=N-i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}