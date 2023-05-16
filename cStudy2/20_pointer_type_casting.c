#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
	int num1;
	int num2;
};

int main20()
{
	void* ptr1 = malloc(100);
	printf("%p\n", ptr1);
	printf("%p\n", (int*)ptr1 + 1);
	free(ptr1);

	int numArr[5] = { 11, 22, 33, 44, 55 };
	void* ptr2 = &numArr[2];

	printf("%d\n", *((int*)ptr2 + 1));


	// struct 포인터 연산
	struct Data d[3] = { {11,22}, {33,44}, {55,66} };
	struct Data* ptr3;
	ptr3 = d;

	printf("%d %d\n", (ptr3 + 1)->num1, (ptr3 + 1)->num2);


	// void 포인터
	void* ptr4 = malloc(sizeof(struct Data) * 3);
	struct Data d2[3];

	((struct Data*)ptr4)->num1 = 10;
	((struct Data*)ptr4)->num2 = 20;
	((struct Data*)ptr4 + 1)->num1 = 30;
	((struct Data*)ptr4 + 1)->num2 = 40;
	((struct Data*)ptr4 + 2)->num1 = 50;
	((struct Data*)ptr4 + 2)->num2 = 60;

	memcpy(d2, ptr4, sizeof(struct Data) * 3);

	printf("%d %d\n", ((struct Data*)ptr4 + 2)->num1, ((struct Data*)ptr4 + 2)->num2);
	printf("%d %d\n", d2[2].num1, d2[2].num2);

	free(ptr4);

	return 0;
}