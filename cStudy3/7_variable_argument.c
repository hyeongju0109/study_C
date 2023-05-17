#include <stdio.h>
#include <stdarg.h>

void printNumbers(int args, ...)
{
	// ���� ������ �޸� �ּҸ� �����ϴ� ������ ����
	va_list ap;

	// ���� ���ڸ� ������ �� �ֵ��� ��Ͽ� �� ����
	va_start(ap, args);
	for (int i = 0; i < args; i++)
	{
		// ���� ���� �����Ϳ��� Ư�� �ڷ��� ũ�⸸ŭ ���� ������
		int num = va_arg(ap, int);
		printf("%d ", num);
	}
	// �����͸� NULL�� �ʱ�ȭ
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