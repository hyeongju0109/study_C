#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* ten()
{
	int* numPtr = malloc(sizeof(int));
	*numPtr = 10;

	return numPtr;
}

char* helloLiteral()
{
	char* s1 = "hello world";

	return s1;
}

char* helloDynamicMemory()
{
	char* s2 = malloc(sizeof(char) * 20);
	strcpy(s2, "hello world");

	return s2;
}

int main1()
{
	// ten()
	int* numPtr;
	numPtr = ten();
	printf("%d\n%p\n", *numPtr, numPtr);
	free(numPtr);

	// helloLiteral()
	char* s1 = helloLiteral();
	printf("%s\n", s1);

	// helloDynamicMemory()
	char* s2 = helloDynamicMemory();
	printf("%s\n", s2);
	free(s2);

	return 0;
}