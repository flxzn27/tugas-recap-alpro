#include<stdio.h>

int main() {
	int sum_trans, x, sum_out = 0;
	
	scanf("%d", &sum_trans);
	
	if(sum_trans <= 0 ) {
		printf( "Tidak ada transaksi hari ini\n");
	}  	
	
	for(int i = 1; i <= sum_trans; i++) {
		scanf("%d", &x);
		sum_out += x;
	}
	
	printf("%d\n", sum_out);

	return 0;
}