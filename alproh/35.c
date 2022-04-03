/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int N, i,kpk;
    bool isKpk;
    
// Algoritma
    //input
    scanf("%d",&N);
    int T[N];
    //proses
    for(i=0;i<N;i++){
        scanf("%d",&T[i]);
    }
    kpk = T[N-1];
    isKpk = true;
    while(true){
        for (i=0;i<N;i++){
            isKpk =(kpk % T[i])!=0 ? true : false;
            if(isKpk)break;
        }
        if(!isKpk) break;
        kpk += T[N-1];
    }
    printf("%d", kpk);
    return 0;

}