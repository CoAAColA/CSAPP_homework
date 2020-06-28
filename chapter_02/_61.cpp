#include <stdio.h>

int main()
{
	int x = -1;
	printf("%d\n", !~x || !x || !~(x|0xFFFFFF00) || !(x&0xFF000000));
	x = 0;
	printf("%d\n", !~x || !x || !~(x|0xFFFFFF00) || !(x&0xFF000000));
	x = 0x123456FF;
	printf("%d\n", !~x || !x || !~(x|0xFFFFFF00) || !(x&0xFF000000));
	x = 0x00123456;
	printf("%d\n", !~x || !x || !~(x|0xFFFFFF00) || !(x&0xFF000000));
	x = 0x10123456;
	printf("%d\n", !~x || !x || !~(x|0xFFFFFF00) || !(x&0xFF000000));
	x = 0x12345601;
	printf("%d\n", !~x || !x || !~(x|0xFFFFFF00) || !(x&0xFF000000));
	return 0;
}