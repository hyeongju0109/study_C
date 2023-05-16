#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point2D;

int main11()
{
	// memset
	Point2D p1;
	memset(&p1, 0, sizeof(Point2D));
	printf("%d %d\n", p1.x, p1.y);


	Point2D* p2 = malloc(sizeof(Point2D));
	memset(p2, 0, sizeof(Point2D));
	printf("%d %d\n", p2->x, p2->y);

	free(p2);

	// memcpy
	Point2D p3;
	Point2D p4;
	p3.x = 30; p3.y = 40;
	memcpy(&p4, &p3, sizeof(Point2D));
	printf("%d %d\n", p4.x, p4.y);

	Point2D* p5 = malloc(sizeof(Point2D));
	Point2D p6;
	p5->x = 30; p5->y = 40;
	memcpy(&p6, p5, sizeof(Point2D));
	printf("%d %d\n", p6.x, p6.y);
	
	free(p5);

	return 0;
}