#include <stdio.h>
#include <assert.h>

typedef unsigned char *byte_pointer;

unsigned replace_byte(unsigned x, int i, unsigned char b){
	assert(i >= 0 && i < sizeof(x));
	byte_pointer ptr = (byte_pointer) &x;
	while(i--) ++ptr;
	*ptr = b;
	return x;
}

int main()
{
	printf("0x%.8x\n", replace_byte(0x12345678, 2, 0xAB));
	printf("0x%.8x\n", replace_byte(0x12345678, 0, 0xAB));
	return 0;
}