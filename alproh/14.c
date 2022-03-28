#include <stdio.h>

int main(){
// kamus
    int h;
    char j;
    
// Algoritma
    //input
    scanf("%d", &h);
    scanf(" %s", &j);
    
    
    //proses
    switch (j){
    case 'A':
        h = h - (10/100) * h;
        break;
    case 'B':
        h = h - (15/100) * h;
        break;
    case 'C':
        h = h - (20/100) * h;
        break;
    default:
        break;
    }
    // output
    printf("%d", h);
    
    return 0;
}