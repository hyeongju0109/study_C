#include <stdio.h>
#include <stdbool.h>

int main7()
{
	int num1 = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num1 == 20) goto EXIT;
			num1++;
		}
	}
EXIT:
	printf("%d", num1);

	return 0;
}