#include<stdio.h>
int get_max(int arr[]);
int get_min(int arr[]);

main()
{
	int i, max, min;
	int a[] = { 10, 25, 45, 2, 100, 3, 70, 50 };
	printf("”z—ñ‚Ì“à—e\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", a[i]);
	}

	max = get_max(a);
	min = get_min(a);

	printf("\nmax = %d\tmin = %d\n", max, min);
}

int get_max(int arr[])
{
	int i, j, w, max;
	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (arr[i] < arr[j])
			{
				w = arr[i];
				arr[i] = arr[j];
				arr[j] = w;
			}
		}
	}

	max = arr[0];

	return(max);
}
int get_min(int arr[])
{
	int i, j, w, min;
	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (arr[i] > arr[j])
			{
				w = arr[i];
				arr[i] = arr[j];
				arr[j] = w;
			}
		}
	}

	min = arr[0];

	return(min);
}