#include<stdio.h>

int keliling_persegi(int x) {
	return 4*x;
}

int luas_persegi(int y) {
	return y*y;
}

int volume_kubus(int z) {
	return z*z*z;
}
int main(){
	int sisi;
	
	scanf("%d", &sisi);
	printf("keliling perseginya = %d\n", keliling_persegi(sisi));
	printf("luas perseginya = %d\n", luas_persegi(sisi));
	printf("volume kubusnya = %d\n", volume_kubus(sisi));	
}