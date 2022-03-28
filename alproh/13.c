#include <stdio.h>

int main(){
// kamus
    int j,b;
    
// Algoritma
    //input
    scanf("%d", &j);
    if(1<=j && j<=2){
        b = 2000;
    } else{
        b = 2000 + (j-2)*500;
    }
    //output
    printf("%d", b);    
    
    return 0;
}