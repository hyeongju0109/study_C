#include <stdio.h>

struct Flags {
	unsigned int a : 1;
	unsigned int b : 3;
	unsigned int c : 7;
};

int main15()
{
	struct Flags f1;

	// 지정한 비트 수 만큼만 저장되고 나머지는 버려짐
	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	printf("a : %u\nb : %u\nc : %u\n", f1.a, f1.b, f1.c);

	return 0;
}