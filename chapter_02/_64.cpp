#include <stdio.h>

int any_odd_one(unsigned x){
	return !~(x|x>>1); //assume that index start with 0
}

int any_odd_one_1(unsigned x){
	return !~(x|x<<1); //assume that index shtart with 1
}

int main(){
	printf("%d\n", any_odd_one(0xAAAAAAAA));
	printf("%d\n", any_odd_one_1(0x55555555));
	return 0;
}