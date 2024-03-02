#include<stdio.h>

int main(){
	int kecepatan2, kecepatan3;
	int jarak1, jarak3;
	int waktu1, waktu2;
	
	scanf("%d %d", &jarak1, &waktu1);
	scanf("%d %d", &kecepatan2, &waktu2);
	scanf("%d %d", &jarak3, &kecepatan3);
	
	float kecepatan = (float) jarak1/waktu1;
	float jarak = (float) kecepatan2*waktu2;
	float waktu = (float) jarak3/kecepatan3;
	
	printf("%.2f\n", kecepatan);
	printf("%.2f\n", jarak);
	printf("%.2f\n", waktu);

}                                