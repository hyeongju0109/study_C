#include <stdio.h>
#include <stdlib.h>

void allocMemory2(void** ptr, int size)
{
	*ptr = malloc(size);
}

int main5()
{
	long long* numPtr = NULL;
	allocMemory2(&numPtr, sizeof(long long));

	*numPtr = 10;
	printf("%lld\n", *numPtr);

	free(numPtr);

	return 0;
}