#include <stdio.h>

int odd_ones(unsigned x){
	return (x & 0xAAAAAAAA) && 1; //assume that index start with 0
}

int odd_ones_1(unsigned x){
	return (x & 0x55555555) && 1; //assume that index start with 1
}

int main(){
	printf("%d\n", odd_ones(14));
	return 0;
}