#define _CRT_SECURE_NO_WARNINGS
#define SIZE 25

#include <stdio.h>
#include <locale.h>


int Process(int[SIZE][SIZE], int, int, int, int);

int main(void)
{
	setlocale(LC_ALL, "Russian-Russia.2088");

	int s = 0;
	int n = 0;
	int m = 0;
	int num = 1;

	int arr[SIZE][SIZE];

	printf("Input size N and size M:\n");
	scanf("%d %d", &n, &m);
	printf("Input arr[i][j]:\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	printf("___________________________\n");
	printf("№ n/n |   i |   j | Результат |\n");
	printf("===========================\n");
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			printf("%c #%4d %c %4d %c %4d %c %4d %c\n", 186, num++, 186, i, 186, j, 186, Process(arr, i, j, n, m), 186);
		}
	}
}

int Process(int a[SIZE][SIZE], int ii, int jj, int n, int m) 
{
	int min = a[ii][jj];

	for (int i = ii; i < n; ++i) 
	{
		for (int j = jj; j < m; ++j)
		{
			if (a[i][j] <= a[ii][jj]) 
			{
				min = a[i][j];
			}
		}
	}
	return min;
}
