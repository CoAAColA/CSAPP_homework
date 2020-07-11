#include <stdio.h>

int A(int k){
	int ret = -1;
	return ret<<k;
}

int B(int j, int k){
	int ret = -1;
	ret <<= j;
	return ((1<<k)-1)<<j;
}

int main(){
	printf("0x%.8x\n", A(12));
	printf("0x%.8x\n", B(8, 4));
	return 0;
}