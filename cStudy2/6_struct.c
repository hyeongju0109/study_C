#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
} p1;

// typedef ����ü
typedef struct _Person	// _Person �����ϸ� �͸� ����ü
{
	char name[20];
	int age;
	char address[100];
} Person2;

int main6()
{
	strcpy(p1.name, "khj");
	p1.age = 29;
	strcpy(p1.address, "����� ��걸 �ѳ��� UN������");

	printf("�̸� : %s\n���� : %d\n�ּ�: %s\n", p1.name, p1.age, p1.address);


	// typedef ����ü
	Person2 p2;
	strcpy(p2.name, "khj");
	p2.age = 29;
	strcpy(p2.address, "����� ��걸 �ѳ��� UN������");

	printf("�̸� : %s\n���� : %d\n�ּ�: %s\n", p2.name, p2.age, p2.address);

	return 0;
}