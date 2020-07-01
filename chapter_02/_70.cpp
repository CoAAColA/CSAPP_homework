#include <stdio.h>

int fits_bits(int x, int n){
	x >>= (n-1);
	return !x || !(~x);
}

int main(){
	printf("%d\n", fits_bits(-1,1));
	printf("%d\n", fits_bits(4,3));
	return 0;
}