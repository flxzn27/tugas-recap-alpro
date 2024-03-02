#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}
/*
Cara kerjanya yaitu i akan dikalikan dengan j secara nested while loop, 
increment dan reset nilai secara manual dan hasilnya akan ditampilkan ke 
layar.
*/