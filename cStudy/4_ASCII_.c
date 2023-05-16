#include <stdio.h>

int main4()
{
	char a = 'a';
	char b = 98;
	char c = 0x63;

	printf("%c %d\n", a, a);
	printf("%c %d\n", b, b);
	printf("%c %d\n", c, c);
	printf("%c %d %c", 'a' + 3, 'a' + 3, 10);
	printf("end\n");

	return 0;
}