#include <stdio.h>

int main(){
// kamus
    int iA,iB;
    char p;
    
// Algoritma
    //input
    scanf(" %s", &p);
    scanf("%d", &iA);
    scanf("%d", &iB);
    
    //proses dan output
    switch (p){
    case 'a':
        printf("%d", iA+iB);
        break;
    case 'b':
        printf("%d", iA-iB);
        break;
    case 'c':
        printf("%d", iA*iB);
        break;
    case 'd':
        printf("%f", (float)iA/(float)iB);
        break;
    case 'e':
        printf("%d", iA/iB);
        break;
    case 'f':
        printf("%d", iA % iB);
        break;
    default:
        break;
    }
    return 0;
}