/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 Mei 2022
*/
#include <stdio.h>
#include <stdlib.h>

void CountingSort(int T[], int N, int max, int min){
    // kamus lokal
    int count[1000] = {0};
    int i, j, elmtSz = 0;
    // algoritma
    // counting tiap elemen map ke array count
    for (i = 0; i < N; i++){
        count[T[i] - min]++;
    }
    for (i = 0; i < max - min + 1; i++){
        
        for(j = 0; j < count[i]; j++){
            T[elmtSz] = i + min;
            elmtSz++;
        }
    }
}

int main(){
// kamus
    int T[] =  {10, 2, -1, 4, 120, 40, 80};
    int N = 7;

// Algoritma
    int min = T[0];
    int max = T[0];
    for(int i = 0; i < N; i++){
        if(min > T[i]) min = T[i];
        if(max < T[i]) max = T[i];
    }   
    CountingSort(T, N, max, min);

    printf("hasil counting sort: ");
    for(int i = 0; i < N; i++)
        printf("%d ", T[i]);
    printf("\n");

    return 0;
}