#include <stdio.h>

int main() {
    // kamus
    int N, i, j;

    // Algoritma
    //input
    printf("masukkan nilai N: ");
    scanf("%d", & N);

    //proses
    for (i = N; i >= 0; i--) {
        for (j = i; j >= 0; j--) {
            printf("*");
        }
        printf(" --%d\n", i);
    }

    return 0;
}