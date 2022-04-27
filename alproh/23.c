#include <stdio.h>

int main(){
// kamus
    
    
// Algoritma
    //input
    int N, i,j;
    
    //proses
    scanf("%d",&N);
		for(i=1;i<=N;i++){
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
    return 0;
}