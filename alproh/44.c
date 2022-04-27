/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 3 april 2022
*/
#include <stdio.h>

float pangkat(int a, int n){
    //kamus lokal
    int i;
    float sum;

    //algoritma
    sum = 1;
    if(n>0){
        for (i=1;i<=n;i++){
            sum *=a;
        }
    }
    else if (n<0){
        for (i=n;i>=-1;i--){
            sum /=a;
        }
    }
    else sum = 1;
    return sum;
}

int main(){
// kamus
    int  a,N; 
// Algoritma
    //input
    scanf("%d",&a);
    scanf("%d",&N);
    printf("%f", pangkat(a,N));
    return 0;
}