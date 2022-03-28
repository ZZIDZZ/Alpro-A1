#include <stdio.h>

int main(){
// kamus
    int i,N;
    
// Algoritma
    //input
    scanf("%d", &N);
    
    //proses dan output
    if(N<=0){
        printf("N harus positif");
        return 0;
    }else{
        for (i=0;i<N;i++){
            if (N % i == 0){
                printf("%d", i);
            }
        }
    }
    
    return 0;
}