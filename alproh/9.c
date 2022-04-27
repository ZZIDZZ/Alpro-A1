/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 14 maret 2022
*/
#include <stdio.h>

int main(){
// kamus
    int bulan;
    
// Algoritma
    //input
    printf("%s", "Masukan nomor bulan");
    scanf("%d", &bulan);
    
    //proses & output
    switch (bulan){
    case 1:
        printf("%s", "Januari");
        break;
    case 2:
        printf("%s", "Februari");
        break;
    case 3:
        printf("%s", "Maret");
        break;
    case 4:
        printf("%s", "April");
        break;
    case 5:
        printf("%s", "Mei");
        break;
    case 6:
        printf("%s", "Juni");
        break;
    case 7:
        printf("%s", "Juli");
        break;
    case 8:
        printf("%s", "Agustus");
        break;
    case 9:
        printf("%s", "September");
        break;
    case 10:
        printf("%s", "Oktober");
        break;
    case 11:
        printf("%s", "November");
        break;
    case 12:
        printf("%s", "Desember");
        break;
    default:
        printf("%s", "masukan nomor bulan tidak tepat");
        break;
    }
    return 0;
}