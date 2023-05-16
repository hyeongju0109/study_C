#include <stdio.h>

typedef enum _DayOfWeek {
	Sun = 0,
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat,
	DayOfWeekCnt
} DayOfWeek;


int main17()
{
	for (DayOfWeek i = Sun; i < DayOfWeekCnt; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}