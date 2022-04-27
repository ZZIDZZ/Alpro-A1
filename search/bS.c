#include <stdio.h>
 
int binarySearch(int arr[], int n, int x){
//kamus lokal
    int bawah = 0, atas = n-1, tengah;
//algoritma
    printf("x: %d\n", x);
    while (bawah <= atas) {
        tengah = bawah + (atas - bawah) / 2;
        printf("arr[tengah]: %d\n", arr[tengah]);
        printf("bawah: %d\ntengah: %d\natas: %d\n\n",\
        bawah,tengah,atas);
        // cek apakah x ada di tengah
        if (arr[tengah] == x){
            printf("arr[tengah] == x\n");
            return tengah;
        }
        // bila x lebih besar, maka pergi ke bagian tengah kanan
        else if (arr[tengah] < x){
            printf("arr[tengah] < x\n");
            bawah = tengah + 1;
        }
        // sebaliknya bila x lebih kecil, maka pergi ke bagian tengah kiri
        else{
            printf("arr[tengah] > x\n");
            atas = tengah - 1;
        }
    }
    // bila sudah sampai sini, maka elemen tidak ditemukan
    return -1;
}
 
int main(void){
// kamus
    int arr[] = {2, 4, 8, 15, 23, 45, 50, 52, 60, 64, 71, 75, 77, 83, 89, 90, 99, 100, 121, 134, 140, 142, 149, 150, 158, 162, 173, 180, 191, 195, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 60;
// Algoritma
    //input
    int result = binarySearch(arr, n, x);
    if(result!=-1){
        printf("Elemen %d ditemukan pada index %d\n",x, result);
    } else printf("Elemen %d tidak ditemukan\n",x);
    return 0;
}
