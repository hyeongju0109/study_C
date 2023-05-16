#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
} p1;

// typedef 구조체
typedef struct _Person	// _Person 생략하면 익명 구조체
{
	char name[20];
	int age;
	char address[100];
} Person2;

int main6()
{
	strcpy(p1.name, "khj");
	p1.age = 29;
	strcpy(p1.address, "서울시 용산구 한남동 UN빌리지");

	printf("이름 : %s\n나이 : %d\n주소: %s\n", p1.name, p1.age, p1.address);


	// typedef 구조체
	Person2 p2;
	strcpy(p2.name, "khj");
	p2.age = 29;
	strcpy(p2.address, "서울시 용산구 한남동 UN빌리지");

	printf("이름 : %s\n나이 : %d\n주소: %s\n", p2.name, p2.age, p2.address);

	return 0;
}