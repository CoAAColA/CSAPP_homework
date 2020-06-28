#include <stdio.h>

int int_shifts_are_arithmetic(){
	int x = -1;
	return !~(x>>1);
}

int main()
{
	printf("%d\n", int_shifts_are_arithmetic());
	return 0;
}