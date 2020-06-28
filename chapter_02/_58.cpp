#include <stdio.h>

int is_little_endian(){
	int x = 0x00000001;
	unsigned char * ptr = (unsigned char *)&x;
	return *ptr == 0x01 ? 1 : 0;
}

int main()
{
	printf("%d\n", is_little_endian());
	return 0;
}