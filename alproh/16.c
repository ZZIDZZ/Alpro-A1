#include <stdio.h>

int main(){
// kamus
    int j,g,h;
    
// Algoritma
    //input
    scanf("%d", &g);
    scanf("%d", &j);
    
    //proses
    if(j>=1 && j<=3){
        h = j * (1/10 * g);
    }else{
        h = 3 * (1/10 * g);
    }
    
    // output
    printf("%d", h);
    
    return 0;
}