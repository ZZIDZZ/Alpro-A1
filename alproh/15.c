#include <stdio.h>

int main(){
// kamus
    int j,g,h;
    
// Algoritma
    //input
    scanf("%d", &g);
    scanf("%d", &j);

    //proses
    if(j<=40){
        switch (j){
        case 1:
            h = 40 * 1000;
            break;
        case 2:
            h = 40 * 1500;
            break;
        case 3:
            h = 40 * 2000;
            break;
        case 4:
            h = 40 * 2500;
            break;
        default:
            break;
        }
    }
    else{
        switch (j){
        case 1:
            h = 40 * 1000 + (j-40) * 1.5 * 1000;
            break;
        case 2:
            h = 40 * 1500 + (j-40) * 1.5 * 1500;
            break;
        case 3:
            h = 40 * 2000 + (j-40) * 1.5 * 2000;
            break;
        case 4:
            h = 40 * 2500 + (j-40) * 1.5 * 2500;
            break;
        default:
            break;
        }
    }
    // output
    printf("%d", h);
    
    return 0;
}