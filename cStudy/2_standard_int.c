#include <stdio.h>
#include <stdint.h>

int main2()
{
	int8_t num1 = -128;
	int16_t num2 = 32767;
	uint16_t unum2 = 65535;
	int32_t num3 = 2147483647;
	int64_t num4 = 9223372036854775807;
	uint64_t unum4 = 18446744073709551615;

	printf("%d %d %u %d %lld %llu\n", num1, num2, unum2, num3, num4, unum4);
	printf("%d %d %lld %llu", INT8_MAX, INT32_MAX, INT64_MAX, UINT64_MAX);
}