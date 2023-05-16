#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int age;
	char address[100];
} Person;

int main8()
{
	Person p1;
	Person* ptr;

	ptr = &p1;
	ptr->age = 29;
	
	printf("%d\n", p1.age);

	return 0;
}