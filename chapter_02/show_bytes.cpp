#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for(i = 0; i < len; ++i){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x){
	printf("int   :");
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	printf("float :");
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_short(short x){
	printf("short :");
	show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x){
	printf("long  :");
	show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x){
	printf("double:");
	show_bytes((byte_pointer) &x, sizeof(double));
}

void show_pointer(void *x){
	printf("void* :");
	show_bytes((byte_pointer) &x, sizeof(void*));
}

void test_show_bytes(int val){
	int ival = val;
	float fval = (float)ival;
	short sval = (short)ival;
	long long lval = (long)ival;
	double dval = (double)ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_short(sval);
	show_long(lval);
	show_double(dval);
	show_pointer(pval);
}

int main()
{
	test_show_bytes(10);
	return 0;
}