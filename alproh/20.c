#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int i,N,sum;
    
// Algoritma
    //input
    scanf("%d", &N);
    //proses dan output
    if(N<=0){
        printf("N harus positif");
        return 0;
    }else{
        for (i=1;i<N;i++){
            if (N % i == 0){
                sum += i;
            }
        }
    }
    if(sum ==N){
        printf("Bilangan Sempurna");
    }else{
        printf("Bukan Bilangan Sempurna");
    }
    
    return 0;
}