#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main6()
{
	srand(time(NULL));

	int i = 0;
	while (i != 3)
	{
		i = rand() % 10;
		printf("%d\n", i);
	}

	return 0;
}