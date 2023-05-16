#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main_()
{
	char s1[20];
	printf("input : ");
	scanf("%s", &s1);

	int size = sizeof(s1);
	int i = 0;
	while (1)
	{
		if (s1[i] != s1[size-1-i])
		{
			printf("not palindrome\n");
			break;
		}
		else if (i == size / 2)
		{
			printf("palindrome\n");
			break;
		}
		i++;
	}

	return 0;
}