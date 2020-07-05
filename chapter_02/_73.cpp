#include <stdio.h>
#include <limits.h>

int saturating_add(int x, int y){
	int ret = x + y;
	int mask = 1 << 31;
	!(x & mask) && !(y & mask) && (ret & mask) && (ret = INT_MAX);
	(x & mask) && (y & mask) && !(ret & mask) && (ret = INT_MIN);
	return ret;
}

int main(){
	printf("0x%.8x\n", saturating_add(0x1fffffff, 0x70000001));
	printf("0x%.8x\n", saturating_add(0xffffffff, 0x80000000));
	printf("0x%.8x\n", saturating_add(0x00000001, 0x70000001));
	return 0;
}