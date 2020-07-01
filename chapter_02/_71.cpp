#include <stdio.h>

typedef unsigned packed_t;

int xbyte(unsigned word ,int bytenum)
{
	int ret = word << ((3-bytenum) << 3);
	return ret >> 24;
}

int main(){
	printf("0x%.8x\n", xbyte(0x12345689, 0));
	printf("0x%.8x\n", xbyte(0x12345689, 1));
	printf("0x%.8x\n", xbyte(0x12345689, 2));
	printf("0x%.8x\n", xbyte(0x12345689, 3));
	return 0;
}