#include <stdio.h>
#include <stdlib.h>

enum TYPE {
	TYPE_CHAR,
	TYPE_INT,
	TYPE_FLOAT
};

void swapValue(void* ptr1, void* ptr2, enum TYPE t)
{
	switch (t)
	{
	case TYPE_CHAR:
	{
		char temp;
		temp = *(char*)ptr1;
		*(char*)ptr1 = *(char*)ptr2;
		*(char*)ptr2 = temp;
		break;
	}
	case TYPE_INT:
	{
		int temp;
		temp = *(int*)ptr1;
		*(int*)ptr1 = *(int*)ptr2;
		*(int*)ptr2 = temp;
		break;
	}
	case TYPE_FLOAT:
	{
		float temp;
		temp = *(float*)ptr1;
		*(float*)ptr1 = *(float*)ptr2;
		*(float*)ptr2 = temp;
		break;
	}
	}
}

int main4()
{
	char c1 = 'a'; char c2 = 'b';
	int num1 = 3; int num2 = 5;
	float f1 = 3.14f; float f2 = 2.71f;
	
	swapValue(&c1, &c2, TYPE_CHAR);
	printf("%c %c\n", c1, c2);

	swapValue(&num1, &num2, TYPE_INT);
	printf("%d %d\n", num1, num2);

	swapValue(&f1, &f2, TYPE_FLOAT);
	printf("%f %f\n", f1, f2);


	return 0;
}