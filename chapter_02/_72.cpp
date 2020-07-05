//A: unsigned 与 int 的 运算结果为unsigned， 总是大于等于0
//B:
#include <stdio.h>
#include <memory.h>

void copy_int(int val, void* buf, int maxbytes) {
	if (maxbytes >= sizeof(val)) {
		memcpy(buf, (void*)&val, sizeof(val));
	}
}

int main() {

	return 0;
}