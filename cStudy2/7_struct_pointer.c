#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
};

// ��Ī ���(����)
typedef struct _Person
{
	char name[20];
	int age;
	char address[100];
} Person2;

int main7()
{
	struct Person* p1 = malloc(sizeof(struct Person));
	strcpy(p1->name, "khj");
	p1->age = 29;
	strcpy(p1->address, "����� ��걸 �ѳ��� UN������");
	
	printf("�̸� : %s\n", p1->name);
	printf("���� : %d\n", p1->age);
	printf("�ּ� : %s\n", p1->address);

	free(p1);


	// ��Ī ���(����)
	Person2* p2 = malloc(sizeof(Person2));
	strcpy(p2->name, "khj");
	p2->age = 29;
	strcpy(p2->address, "����� ��걸 �ѳ��� UN������");

	printf("�̸� : %s\n", p2->name);
	printf("���� : %d\n", p2->age);
	printf("�ּ� : %s\n", p2->address);

	free(p2);

	return 0;
}