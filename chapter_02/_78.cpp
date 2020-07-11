#include <stdio.h>

int divide_power2(int x, int k){
	int mask = 1 << 31;
	(x & mask) && (x += (1<<k)-1);
	return x>>k;
}

int main(){
	printf("%d\n", divide_power2(4,1));
	printf("%d\n", divide_power2(4,2));
	printf("%d\n", divide_power2(-5,1));
	printf("%d\n", divide_power2(-19,3));
	return 0;
}