#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main1()
{
	// ������ ���ڿ� �ڸ���
	char* s1 = malloc(sizeof(char) * 30);
	strcpy(s1, "The Little Prince");

	char* ptr1 = strtok(s1, " ");

	// ���ڿ��� �ѹ��� �ڸ��� �� �Ͽ� while������ �ݺ��ؼ�...
	while (ptr1 != NULL)
	{
		printf("%s\n", ptr1);
		ptr1 = strtok(NULL, " ");
	}

	// �ð��� �ڸ���
	char s2[30] = "2023-05-08T15:09:55";

	char* ptr2 = strtok(s2, "-T:");

	while (ptr2 != NULL)
	{
		printf("%s\n", ptr2);
		ptr2 = strtok(NULL, "-T:");
	}

	// �ڸ� ���ڿ� �����ϱ�
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