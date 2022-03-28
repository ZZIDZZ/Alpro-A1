#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int i,N;
    bool isPrima;
    
// Algoritma
    //input
    scanf("%d", &N);
    isPrima = true;
    //proses dan output
    if(N<=0){
        printf("N harus positif");
        return 0;
    }else{
        for (i=2;i<N;i++){
            if (N % i == 0){
                isPrima = false;
            }
        }
    }
    if(isPrima){
        printf("Bilangan Prima");
    }else{
        printf("Bukan Bilangan Prima");
    }
    
    return 0;
}