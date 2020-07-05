#include <stdio.h>

int tsub_ok(int x, int y){
	int t = x-y, ret = 1;
	int mask = 1 << 31;
	(x & mask) && !(y & mask) && !(t & mask) && (ret = 0);
	!(x & mask) && (y & mask) && (t & mask) && (ret = 0);
	return ret;
}

int main(){
	printf("%d\n", tsub_ok(0, 0x80000000));
	printf("%d\n", tsub_ok(0x7fffffff, 0x80000000));
	printf("%d\n", tsub_ok(0x80000000, 0x7fffffff));
	printf("%d\n", tsub_ok(0xffffffff, 0x80000000));
	printf("%d\n", tsub_ok(0x80000000, 0x00000000));
	return 0;
}