#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);
        
        i++;
    } while (i <= 3);

    return 0;
}
/*
Cara kerjanya adalah dengan menggunakan nested do-while loop untuk
mengalikan bilangan utama dengan bilangan pengali. Perhitungan
dimulai dengan melakukan perkalian terlebih dahulu sebelum melakukan 
perbandingan. Setelah loop dalam selesai dijalankan, nilai bilangan 
pengali direset kembali ke 1 untuk mengulang perkalian dengan bilangan 
utama berikutnya. Setelah itu, hasil perkalian ditampilkan ke layar.
*/