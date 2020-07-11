#include <stdio.h>

int A(int k){
	return -1<<k;
}

int B(int j, int k){
	return ((1<<k)-1)<<j;
}

int main(){
	printf("0x%.8x\n", A(12));
	printf("0x%.8x\n", B(8, 4));
	return 0;
}
