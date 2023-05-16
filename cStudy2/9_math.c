#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int x;
	int y;
} Point2D;

int main9()
{
	Point2D p1;
	Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	int a = p2.x - p1.x;
	int b = p2.y - p1.y;
	
	double c = sqrt(pow(a, 2) + pow(b, 2));

	printf("distance between a and b : %f\n", c);

	return 0;
}