/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 Mei 2022
*/
#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int T[], int N){
    //kamus lokal
    int i, j, tmp;
    //algoritma
    for (i = 0; i < N - 1; i++){
        printf("%d  ", i+1);
        for (j = 0; j < N; j++){ 
            printf("%d", T[j]);
            if (j != N-1) printf(", ");
        } 
        // geser elemen terbesar ke paling kanan
        for (j = 0; j < N - i - 1; j++){
            if (T[j] > T[j + 1]){
                printf(" swapped %d with %d ", T[j], T[j+1]);
                tmp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = tmp;
            }
        }
        printf("\n   ");
        for (j = 0; j < N; j++){ 
            printf("%d", T[j]);
            if (j != N-1) printf(", ");
        } 
        printf("\n");
    }
}


int main(){
// kamus
    int T[] =  {32,15,20,55,13,17,85,10,18,75};
    int N = 10;

// Algoritma
    BubbleSort(T, N);

    printf("hasil bubble sort: ");
    for(int i = 0; i < N; i++)
        printf("%d ", T[i]);
    printf("\n");

    return 0;
}