#include <stdio.h>
#include <stdlib.h>

struct Data {
	char c1;
	int num1;
};

int main19()
{
	// void 포인터 변환
	int num1 = 10;
	char c1 = 'a';
	void* ptr;

	ptr = &num1;
	printf("%d\n", *(int*)ptr);

	ptr = &c1;
	printf("%c\n", *(char*)ptr);


	// 구조체 포인터 변환
	struct Data* d1 = malloc(sizeof(struct Data));
	void* ptr2;

	d1->c1 = 'b';
	d1->num1 = 20;

	ptr2 = d1;

	printf("%c\n", ((struct Data*)ptr2)->c1);
	printf("%d\n", ((struct Data*)ptr2)->num1);

	free(d1);

	return 0;
}