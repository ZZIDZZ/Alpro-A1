#include <stdio.h>

int main(){
// kamus
    int N, i, j;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses
    for(i = 0; i < N; i++){
        for(j = i; j > 0; j--){
            printf(" ");
        }
        for(j = N - i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }
}