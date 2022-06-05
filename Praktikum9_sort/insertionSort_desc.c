/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 9 Mei 2022
*/
#include <stdio.h>
#include <stdlib.h>


void insertionSort(int arr[], int n){
    int i, temp, j;
    for (i = 1; i < n; i++) {
        printf("%d  ", i+1);
        for (j = 0; j < n; j++){ 
            printf("%d", arr[j]);
            if (j != n-1) printf(", ");
        } 
        temp = arr[i];
        j = i - 1;
        printf(" on process: %d ", arr[i]);
        // geser ke kiri selama temp ini lebih kecil dari kirinya
        while (0 <= j && temp > arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        printf(" swapped: %d \n   ", arr[j+1]);
        // selipin
        arr[j + 1] = temp;
        for (j = 0; j < n; j++){ 
            printf("%d", arr[j]);
            if (j != n-1) printf(", ");
        } 
        printf("\n");
    }
}


int main(){
    int arr[] =  {32,15,20,55,13,17,85,10,18,75};
    int n = 10;

    insertionSort(arr, n);

    printf("hasil sorting:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}