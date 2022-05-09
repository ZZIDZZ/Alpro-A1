/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 Mei 2022
*/
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int T[], int N){
    //kamus lokal
    int i, j, curIdx, temp;

    //algoritma
    for (i = 0; i < N-1; i++){
        curIdx = i;
        for (j = i+1; j < N; j++)
          if (T[j] < T[curIdx])
            curIdx = j;
        temp = T[i];
        T[i] = T[curIdx];
        T[curIdx] = temp;
    }
}

int main(){
// kamus
    int T[] =  {10, 2, -1, 4, 120, 40, 80};
    int N = 7;

// Algoritma
    //input
    selectionSort(T, N);

    printf("hasil selection sort: ");
    for(int i = 0; i < N; i++)
        printf("%d ", T[i]);
    printf("\n");

    return 0;
}