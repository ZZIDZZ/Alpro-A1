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
        // geser elemen terbesar ke paling kanan
        for (j = 0; j < N - i - 1; j++){
            if (T[j] > T[j + 1]){
                tmp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = tmp;
            }
        }
    }
}


int main(){
// kamus
    int T[] =  {10, 2, -1, 4, 120, 40, 80};
    int N = 7;

// Algoritma
    BubbleSort(T, N);

    printf("hasil bubble sort: ");
    for(int i = 0; i < N; i++)
        printf("%d ", T[i]);
    printf("\n");

    return 0;
}