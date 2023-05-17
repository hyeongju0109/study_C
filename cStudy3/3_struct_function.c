#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person getPerson()
{
	struct Person p;

	strcpy(p.name, "angkko");
	p.age = 30;
	strcpy(p.address, "Hannam-dong Yongsan-si Seoul");

	return p;
}

struct Person* allocPerson()
{
	struct Person* p = malloc(sizeof(struct Person));
	strcpy(p->name, "angkko");
	p->age = 30;
	strcpy(p->address, "Hannam-dong Yongsan-si Seoul");

	return p;
}

int main3()
{
	// 구조체를 복사하기 때문에 비효율적
	struct Person p1;
	p1 = getPerson();
	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);

	// pointer로 선언
	struct Person* p2;
	p2 = allocPerson();
	printf("%s\n", p2->name);
	printf("%d\n", p2->age);
	printf("%s\n", p2->address);
	free(p2);

	return 0;
}