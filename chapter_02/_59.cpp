#include <stdio.h>

int main()
{
	int x, y, z;
	x = 0x89ABCDEF, y = 0x76543210;
	z = (x&0xff)|(y&0xffffff00);
	printf("0x%.8x\n", z);
	return 0;
}