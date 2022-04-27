/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N, i,j,sumS,sumN;
    
    
// Algoritma
    //input
    scanf("%d",&N);
    int T[N];
    sumS = 0;
    sumN = 0;
    //proses
    for(i=0;i<N;i++){
        scanf("%d",&T[i]);
    }
    for(i=0;i<N;i++){
        for(j=i;j<N;j++){
            if(T[i] - T[j]<3) sumN +=1;
            else sumS +=1;
        }
    }
    printf("%d, %d", sumS, sumN);
    return 0;

}