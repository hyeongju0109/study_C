#include <stdio.h>
#include <float.h>

int main3()
{
	float num1 = 3.e5f;
	double num2 = -1.3827e-2;
	long double num3 = 5.21e+9l;

	printf("%f %f %Lf\n", num1, num2, num3);
	printf("%e %e %Le\n", num1, num2, num3);

	float min1 = FLT_MIN;
	float max1 = FLT_MAX;
	double min2 = DBL_MIN;
	double max2 = DBL_MAX;
	long double min3 = LDBL_MIN;
	long double max3 = LDBL_MAX;

	printf("%.40f %.2f\n", min1, max1);
	printf("%e %e\n", min2, max2);
	printf("%Le %Le\n", min3, max3);
	return 0;
}