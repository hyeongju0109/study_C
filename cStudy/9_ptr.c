#include <stdio.h>

int main9()
{
	int* numPtr;
	int num1 = 10;
	int num2 = 20;
	numPtr = &num1;

	*numPtr = 20;
	numPtr = &num2;
	printf("%d\n", *numPtr);
	printf("%d\n", num1);

	return 0;
}