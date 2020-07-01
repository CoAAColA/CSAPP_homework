#include <stdio.h>

unsigned rotate_left(unsigned x, int n){
	return (x << n) | (x >> ((sizeof(unsigned) << 3)-n));
}

int main(){
	printf("0x%.8x\n", rotate_left(0x12345678, 0));
	printf("0x%.8x\n", rotate_left(0x12345678, 12));
	printf("0x%.8x\n", rotate_left(0x80000000, 4));
	return 0;
}