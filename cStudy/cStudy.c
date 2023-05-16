#include <stdio.h>

void bubbleSort(int arr[])
{
	int temp;
	for (int i = 0; i < sizeof(arr)-1; i++)
	{
		for (int j = 0; sizeof(arr) - 1; j++)
		{


			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j] = temp;
			}
		}
	}
}

int main_()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	bubbleSort(arr);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}