/*
    Nama: Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 04 april 2022
*/
#include <stdio.h>

int main(){
// kamus
    int x,y;
    
// Algoritma
    //input
    scanf("%d", &x);
    scanf("%d", &y);
    
    //proses output
    if(x>0 && y>0){
        printf("kuadran I");
    } 
    else if(x<0&&y>0){
        printf("kuadran II");
    }
    else if(x<0&&y<0){
        printf("kuadran III");
    }
    else if (x>0&&y<0){
        printf("kuadran IV");
    }
    else if (x==0&&y==0){
        printf("origin");
    }
    
    return 0;
}