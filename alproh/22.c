#include <stdio.h>
#include <stdbool.h>

int main(){
// kamus
    int i;
    float N,jarak,hari;
    
// Algoritma
    //input
    scanf("%f", &N);
    //proses dan output
    jarak = 0.0f;
    hari = 0.0f;
    i=0;
    if(N<=0){
        printf("N harus positif");
        return 0;
    }else{
        while(jarak<N){
            if(i%2==0){
                jarak+=0.3f;
            }else{
                jarak += 0.1f;
            }
            i++; hari +=0.5f;
        }
    }
    printf("%f", hari);
    
    return 0;
}