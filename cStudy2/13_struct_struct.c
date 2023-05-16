#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int areacode;
	unsigned long long number;
} Phone;

typedef struct {
	char name[20];
	int age;
	Phone phone;
} Person;

typedef struct {
	char name[20];
	int age;
	Phone* phone;
} ptrPerson;

int main13()
{
	Person p1;
	p1.phone.areacode = 82;
	p1.phone.number = 1084261379;
	printf("%d %llu\n", p1.phone.areacode, p1.phone.number);

	Person* p2 = malloc(sizeof(Person));
	p2->phone.areacode = 82;
	p2->phone.number = 1054468972;

	printf("%d %llu\n", p2->phone.areacode, p2->phone.number);
	free(p2);

	// 구조체 내 포인터
	ptrPerson* p3 = malloc(sizeof(ptrPerson));
	p3->phone = malloc(sizeof(Phone));

	p3->phone->areacode = 82;
	p3->phone->number = 1032749751;

	printf("%d %llu\n", p3->phone->areacode, p3->phone->number);

	free(p3->phone);
	free(p3);

	return 0;
}