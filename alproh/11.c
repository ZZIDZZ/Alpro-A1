#include <stdio.h>

int main(){
// kamus
    int a,b,c;
    
// Algoritma
    //input
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    //proses dan output
    if(a<=0 || b<=0 || c<=0){
        printf("terdapat nilai yang bukan sisi segitiga");
        return 0;
    }
    else{
        if(a==0 && b==c){
            printf("segitiga sama sisi");
        }
        else{
            if(a+b>c && a+c >b && b+c > a ){
                if(a==b || b==c||a==c){
                    printf("segitiga sama kaki");
                }
                else{
                    printf("segitiga sembarang");
                }
            }
            else{
                printf("segitiga tidak valid");
            }
        }
    }    
    return 0;
}