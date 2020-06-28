#include <stdio.h>

unsigned srl(unsigned x, int k){
	unsigned xsra = ((int) x) >> k;
	int w = sizeof(unsigned) << 3;
	return ~(-1 << (w-k)) & xsra;
}

int sra(int x, int k){
	int xsrl = (unsigned) x >> k;
	int w = sizeof(int) << 3;
	x < 0 && (xsrl = -1<<(w-k) | xsrl);
	return xsrl;
}

int main(){
	printf("0x%.8x\n", srl(0xffffffff, 3));
	printf("0x%.8x\n", sra(0xffffffff, 3));
	return 0;
}