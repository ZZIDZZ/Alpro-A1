/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int N,M, i,j;
    
// Algoritma
    //input
    scanf("%d",&N);
    scanf("%d",&M);
    int T[N][M];
    //proses
    if(M == N){
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                if(i == j) T[i][j]=1;
                else if (i>j) T[i][j]=2;
                else T[i][j] = 0;
            }
        }
    }
    return 0;
}