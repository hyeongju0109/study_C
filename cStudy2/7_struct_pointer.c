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

// 별칭 사용(권장)
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
	strcpy(p1->address, "서울시 용산구 한남동 UN빌리지");
	
	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address);

	free(p1);


	// 별칭 사용(권장)
	Person2* p2 = malloc(sizeof(Person2));
	strcpy(p2->name, "khj");
	p2->age = 29;
	strcpy(p2->address, "서울시 용산구 한남동 UN빌리지");

	printf("이름 : %s\n", p2->name);
	printf("나이 : %d\n", p2->age);
	printf("주소 : %s\n", p2->address);

	free(p2);

	return 0;
}