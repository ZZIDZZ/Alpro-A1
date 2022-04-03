#include <stdio.h>

int main(){
// kamus
    int N, i,j;
    
// Algoritma
    //input
    scanf("%d",&N);
    
    //proses
    for(i=1;i<N;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=N;i>=0;i--) {
        for (j=i;j>=0;j--) {
            printf("*");
        }
        printf("\n", i);
    }
    return 0;
}