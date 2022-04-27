#include <stdio.h>

int main(){
// kamus
    int g,p,h;
    
// Algoritma
    //input
    scanf("%d", &g);
    scanf("%d", &p);
    
    //proses
    if(p>=1 && p<=100){
        h = 100000 * g;
    }else if (p<100 && p<1000){
        h = p * (g*1000);
    }else{
        h = 3 * (1/10 * g);
    }
    // output
    printf("%d", h);
    
    return 0;
}