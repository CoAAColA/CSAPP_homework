#include <stdio.h>

int lower_one_mask(int n){
	int ret = 0;
	n != sizeof(int)<<3 && (ret = (1<<n)-1);
	n == sizeof(int)<<3 && (ret = -1);
	return ret;
}

int main(){
	printf("0x%.8x\n", lower_one_mask(0));
	printf("0x%.8x\n", lower_one_mask(1));
	printf("0x%.8x\n", lower_one_mask(9));
	printf("0x%.8x\n", lower_one_mask(15));
	printf("0x%.8x\n", lower_one_mask(32));
	return 0;
}