#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main5()
{
	char word[30];
	int length;
	bool isPalindrome = true;
	printf("input : ");
	scanf("%s", word);
	length = strlen(word);

	for (int i = 0; i < length / 2; i++)
	{
		if (word[i] != word[length - i - 1])
		{
			isPalindrome = false;
			break;
		}
	}

	printf("%d\n", isPalindrome);

	return 0;
}