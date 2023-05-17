#include <stdio.h>
#include <stdarg.h>

void printNumbers(int args, ...)
{
	// 가변 인자의 메모리 주소를 저장하는 포인터 생성
	va_list ap;

	// 가변 인자를 가져올 수 있도록 목록에 값 설정
	va_start(ap, args);
	for (int i = 0; i < args; i++)
	{
		// 가변 인자 포인터에서 특정 자료형 크기만큼 값을 가져옴
		int num = va_arg(ap, int);
		printf("%d ", num);
	}
	// 포인터를 NULL로 초기화
	va_end(ap);

	printf("\n");
}

void printValues(char* types, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, types);
	while (types[i] != '\0')
	{
		switch (types[i])
		{
		case 'i':
			printf("%d ", va_arg(ap, int));
			break;
		case 'd':
			printf("%f ", va_arg(ap, double));
			break;
		case 'c':
			printf("%c ", va_arg(ap, char));
			break;
		case 's':
			printf("%s ", va_arg(ap, char*));
			break;
		default:
			break;
		}
		i++;
	}
	va_end(ap);
	
	printf("\n");
}


int main7()
{
	printNumbers(1, 10);
	printNumbers(2, 10, 20);
	printNumbers(3, 10, 20, 30);
	printNumbers(4, 10, 20, 30, 40);

	printValues("i", 10);
	printValues("ci", 'a', 10);
	printValues("dci", 1.234567, 'a', 10);
	printValues("sicd", "hello world", 10, 'a', 1.234567);

	return 0;
}