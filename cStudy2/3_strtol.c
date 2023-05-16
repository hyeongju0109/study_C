#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main3() {
	char* s1 = "0xaf10";
	int num0;

	num0 = strtol(s1, NULL, 16);

	printf("%x %d\n", num0, num0);


	// 여러개 문자열 변환
	char* s2 = "0xad20 496 101110001010 9952";
	int num1;
	int num2;
	int num3;
	int num4;
	char* end;

	num1 = strtol(s2, &end, 16);
	num2 = strtol(end, &end, 10);
	num3 = strtol(end, &end, 2);
	num4 = strtol(end, NULL, 10);

	printf("%x\n", num1);
	printf("%d\n", num2);
	for (int i = 11; i >= 0; --i) printf("%d", (num3 >> i) & 1); printf("\n");
	printf("%d\n", num4);

	return 0;
}