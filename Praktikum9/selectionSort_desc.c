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
        printf("%d  ", i+1);
        for (j = 0; j < N; j++){ 
            printf("%d", T[j]);
            if (j != N-1) printf(", ");
        } 
        curIdx = i;
        for (j = i+1; j < N; j++)
          if (T[j] > T[curIdx]){
            printf(" biggest: %d ", T[j]);
            curIdx = j;
            }
        printf(" swapped %d with %d \n   ", T[i], T[curIdx]);
        temp = T[i];
        T[i] = T[curIdx];
        T[curIdx] = temp;
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
    //input
    selectionSort(T, N);

    printf("hasil selection sort: ");
    for(int i = 0; i < N; i++)
        printf("%d ", T[i]);
    printf("\n");

    return 0;
}