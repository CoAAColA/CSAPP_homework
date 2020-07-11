#include <stdio.h>

//向下取整
int mul3div4(int x){ 
	int flag = ((x<<1) & 3) + (x & 3);
	return (x>>1) + (x>>2) + (flag>>2);
}

int main(){
	printf("%d\n", mul3div4(-3));
	printf("%d\n", mul3div4(3));
	printf("%d\n", mul3div4(-5));
	return 0;
}