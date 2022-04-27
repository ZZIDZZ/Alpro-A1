#include <stdio.h>
#include <cstdlib>

int main(){
// kamus
    int i,n,*p;

// Algoritma
    //input
    n = 5;
    p = (int*)malloc(n*sizeof(int));

    //proses
    for(i=0;i<n;i++){
        scanf("%c", &p[i]);
    }
    // output
    for (i = 0; i < n; ++i) {
        printf("%c, ", p[i]);
    }
    return 0;
}
