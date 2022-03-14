/*
    Nama : Zidan Rafindra Utomo
    NIM  : 24060121130051
    tgl pengerjaan: 14 maret 2022
*/
#include <stdio.h>

int main(){
// kamus
    int hari;
    
// Algoritma
    //input
    printf("%s", "Masukan nomor hari");
    scanf("%d", &hari);
    
    //proses & output
    switch (hari){
    case 1:
        printf("%s", "Minggu");
        break;
    case 2:
        printf("%s", "Senin");
        break;
    case 3:
        printf("%s", "Selasa");
        break;
    case 4:
        printf("%s", "Rabu");
        break;
    case 5:
        printf("%s", "Kamis");
        break;
    case 6:
        printf("%s", "Jumat");
        break;
    case 7:
        printf("%s", "Sabtu");
        break;
    default:
        printf("%s", "masukan nomor hari tidak tepat");
        break;
    }
    return 0;
}