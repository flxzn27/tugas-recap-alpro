#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }       
    }
    return 0;
}
/* 
integer i pada loop pertama menyimpan nilai 2 dan 3.

ketika i = 2, bilangan utama = 2. loop kedua berjalan :
saat j = 1 bilangan pengali = j = 1,  Hasil Perkalian = j*i = 2*1 = 2.
saat j = 2 bilangan pengali = j = 2,  Hasil Perkalian = j*i = 2*2 = 4.

ketika i = 3, bilangan utama = 3. loop kedua berjalan :
saat j = 1 bilangan pengali = j = 1,  Hasil Perkalian = j*i = 3*1 = 3.
saat j = 2 bilangan pengali = j = 2,  Hasil Perkalian = j*i = 3*2 = 6.
*/
