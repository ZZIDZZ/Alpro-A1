/*
    Nama: Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 23 March 2022
*/
#include <stdio.h>

int main(){
// kamus
    int i;
    
// Algoritma
    printf("Masukkan i: ");
    //input
    
    
    //proses output
    if(!scanf("%d", &i)){
        printf("bukan termasuk sebuah bilangan");
    } 
    else if(i==0){
        printf("bulat nol");
    }
    else if(i>0){
        printf("bulat positif");
    }
    else{
        printf("bulat negative");
    }
    
    return 0;
}