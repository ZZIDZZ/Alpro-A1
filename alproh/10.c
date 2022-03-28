#include <stdio.h>

int main(){
// kamus
    int i1,i2,i3;
    
// Algoritma
    //input
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%d", &i3);
    
    //proses dan output
    if(i1<0||i2<0||i3<0){
        printf("masukan tahanan tidak boleh negatif");
    }
    else{
        printf("%d", i1+i2+i3);
    }
    
    return 0;
}