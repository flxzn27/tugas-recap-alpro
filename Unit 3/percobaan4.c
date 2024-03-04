#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}
/*
Define digunakan untuk mendefinisikan dua konstanta makro, MAX_PERSONS dan MAX_NAME_LENGTH, 
yang digunakan untuk menentukan ukuran array name dan batas panjang nama.
saat  i = 0, program mencetak nama dan umur indeks 0 dan seterusnyta

Name            Age
--------------------
Roma            25
Romi            30
Romo            35
*/