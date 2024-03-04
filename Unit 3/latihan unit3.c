#include<stdio.h>

int main(){
	int all_array, sum_array = 0;
	scanf("%d", &all_array);
	
	int array[all_array];
	for(int i = 1; i <= all_array;i++) {
		scanf("%d", &array[i]);
		sum_array += array[i];
	}
	
	printf("Hasil Penjumlahan seluruh elemen pada array = %d", sum_array);
	
	return 0;		
}