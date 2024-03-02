#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}
// scanf hanya digunakan untuk membaca satu buah kata, 
//makanya yang tercetak hanya kata terdepan dari yang diinput.
// sedangkan fungsi fgets digunakan untuk membaca satu baris teks, 
//artinya bisa membaca lebih dari satu kata selagi masih dalam satu baris