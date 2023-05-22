#include <stdio.h>

int oldFirst(int num1, int num2)
{
	if (num1 >= num2) return num1;
	else return num2;
}

int youngFirst(int num1, int num2)
{
	if (num1 <= num2) return num1;
	else return num2;
}

void whoIsFirst(int num1, int num2, int (*pf)(int, int))
{
	int num3;
	num3 = pf(num1, num2);
	printf("%d is first\n", num3);
}


void main()
{
	int num1 = 24;
	int num2 = 27;

	whoIsFirst(num1, num2, oldFirst);
	whoIsFirst(num1, num2, youngFirst);

}