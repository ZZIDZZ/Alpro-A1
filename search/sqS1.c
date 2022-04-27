/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 17 april 2022
*/
#include <stdio.h>

int SEQSearchX1(int* T, int n, int x){
    //kamus lokal
    int i,IX;
    //algoritma
    i = 0;
    IX = 0;
    while(i < n){
        if(T[i]==x){
            IX = i;
            break;
        }
        i++;
    }
    return IX;
}

int main(){
// kamus
    int n = 8;
    int T[8] = {1,3,5,-8,12,90,3,5}; 
    int x = -8;
// Algoritma
    //input
    printf("nilai %d terletak pada index ke-%d", x, SEQSearchX1(T,n,x));
    return 0;
}