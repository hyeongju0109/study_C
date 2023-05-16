#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main1()
{
	// 포인터 문자열 자르기
	char* s1 = malloc(sizeof(char) * 30);
	strcpy(s1, "The Little Prince");

	char* ptr1 = strtok(s1, " ");

	// 문자열을 한번에 자르지 못 하여 while문으로 반복해서...
	while (ptr1 != NULL)
	{
		printf("%s\n", ptr1);
		ptr1 = strtok(NULL, " ");
	}

	// 시간값 자르기
	char s2[30] = "2023-05-08T15:09:55";

	char* ptr2 = strtok(s2, "-T:");

	while (ptr2 != NULL)
	{
		printf("%s\n", ptr2);
		ptr2 = strtok(NULL, "-T:");
	}

	// 자른 문자열 저장하기
	char s3[30] = "The Litte Prince";

	char* sArr[10] = { NULL, };
	int i = 0;

	char* ptr3 = strtok(s3, " ");

	while (ptr3 != NULL)
	{
		sArr[i] = ptr3;
		i++;

		ptr3 = strtok(NULL, " ");
	}

	for (int i = 0; i < 10; i++)
	{
		if (sArr[i] != NULL) printf("%s\n", sArr[i]);
	}
	
	return 0;
}