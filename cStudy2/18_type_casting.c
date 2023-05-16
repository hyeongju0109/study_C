#include <stdio.h>
#include <stdlib.h>

int main18()
{
	int num1 = 32;
	int num2 = 7;
	float num3;

	num3 = num1 / num2;
	printf("%f\n", num3);

	num3 = (float)num1 / num2;
	printf("%f\n", num3);


	// 포인터 변환 (형축소)
	int* numPtr1 = malloc(sizeof(int));
	char* cPtr;

	*numPtr1 = 0x12345678;

	cPtr = (char*)numPtr1;
	printf("0x%x\n", *cPtr);
	printf("0x%x\n", *(char*)numPtr1);

	free(numPtr1);


	// 포인터 변환 (형확장)
	short* sPtr = malloc(sizeof(short));
	int* numPtr2;

	*sPtr = 0x1234;
	numPtr2 = (int*)sPtr;

	printf("0x%x\n", *numPtr2);

	free(sPtr);

	return 0;
}