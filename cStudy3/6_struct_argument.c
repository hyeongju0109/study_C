#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person* p)
{
	strcpy(p->name, "bebe");
	p->age = 40;
	strcpy(p->address, "America");
}

int main6()
{
	struct Person p1;

	setPerson(&p1);
	printf("name : %s\n", p1.name);

	return 0;
}