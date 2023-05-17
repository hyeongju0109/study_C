#include <stdio.h>

void hello()
{
	printf("hello world\n");
}

void bonjour()
{
	printf("bonjour le monde\n");
}

int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

// struct
struct Calc {
	int(*fp)(int, int);
};


// argument
void executer(int (*fp)(int, int))
{
	printf("%d\n", fp(10, 20));
}

// return
int (*getAdd())(int, int)
{
	return add;
}

// typedef
typedef int(*FP)(int, int);

FP getAdd2()
{
	return add;
}

struct Calc2 {
	FP fp;
};

void excuter2(FP fp)
{
	printf("%d\n", fp(70, 80));
}


int main9()
{
	// function pointer
	void(*fp1)();

	fp1 = hello;
	fp1();

	fp1 = bonjour;
	fp1();

	// function pointer - array
	int(*fp2[2])(int, int);
	
	fp2[0] = add;
	printf("%d\n", fp2[0](3, 4));

	fp2[1] = mul;
	printf("%d\n", fp2[1](3, 4));

	// function pointer - struct
	struct Calc c;

	c.fp = add;

	printf("%d\n", c.fp(3, 4));

	// function pointer - argument
	executer(add);

	// function pointer - return
	printf("%d\n", getAdd()(10, 20));

	int(*fp3)(int, int);
	fp3 = getAdd();
	printf("%d\n", fp3(10, 20));

	// typedef
	printf("%d\n", getAdd2()(20, 30));

	FP fp4;
	fp4 = add;
	printf("%d\n", fp4(10, 20));

	FP fp5[10];
	fp5[0] = add;
	fp5[1] = mul;
	printf("%d %d\n", fp5[0](70, 80), fp5[1](7, 8));

	struct Calc2 c2;
	c2.fp = add;
	printf("%d\n", c2.fp(60, 70));

	excuter2(add);

	return 0;
}