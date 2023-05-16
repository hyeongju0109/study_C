#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point2D;

int main12()
{
	Point2D p1[3];

	p1[0].x = 10;
	p1[0].y = 20;
	p1[1].x = 30;
	p1[1].y = 40;
	p1[2].x = 50;
	p1[2].y = 60;
	printf("%d %d\n", p1[1].x, p1[1].y);

	// 포인터 구조체 배열
	Point2D* p2[3];

	for (int i = 0; i < sizeof(p2) / sizeof(Point2D*); i++)
	{
		p2[i] = malloc(sizeof(Point2D));
	}

	p2[0]->x = 10;
	p2[0]->y = 20;
	p2[1]->x = 30;
	p2[1]->y = 40;
	p2[2]->x = 50;
	p2[2]->y = 60;
	printf("%d %d\n", p2[1]->x, p2[1]->y);

	for (int i = 0; i < sizeof(p2) / sizeof(Point2D*); i++)
	{
		free(p2[i]);
	}



	return 0;
}