#include<stdio.h>
void console(int data, int arr[]);
void get_max(int arr[]);
void get_min(int arr[]);

main()
{
	int i, num;
	int a[] = { 10, 25, 45, 2, 100, 3, 70, 50 };

	printf("ソート方法（0:昇順  1:降順)");
	scanf("%d", &num);

	if (num == 0)
	{
		console(num, a);
		get_min(a);
		printf("ソート後（昇順）\n");
		for (i = 0; i < 8; i++)
		{
			printf("%d ", a[i]);
		}

	}
	else if (num == 1)
	{
		console(num, a);
		get_max(a);
		printf("ソート後（降順）\n");
		for (i = 0; i < 8; i++)
		{
			printf("%d ", a[i]);
		}
	}
	else
	{
		console(num, a);
	}

}

void console(int data, int arr[])
{
	int i;
	if (data == 0 || data == 1)
	{
		printf("ソート前\n");
		for (i = 0; i < 8; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	else
	{
		printf("エラー。0か1を入力してください ");
	}
	return;
}

void get_max(int arr[])
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

	return;
}
void get_min(int arr[])
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

	return;
}