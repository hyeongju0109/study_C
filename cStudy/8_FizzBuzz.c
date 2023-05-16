#include <stdint.h>
#include <stdio.h>

int main8()
{

	//for (int8_t i = 1; i <= 100; i++)
	//{
	//	if (i % 15 == 0) printf("FizzBuzz\n");
	//	else if (i % 3 == 0) printf("Fizz\n");
	//	else if (i % 5 == 0) printf("Buzz\n");
	//	else printf("%d\n", i);
	//}
	
	for (int8_t i = 0; ++i <= 100;)
	{
		printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);
	}

	return 0;
}