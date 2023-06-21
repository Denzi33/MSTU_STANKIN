#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>


int Process(int[5][5], int, int, int, int);

int main()
{
	setlocale(LC_ALL, "rus");

	int i = 0, j = 0;
	int s = 0;
	int n = 0;
	int m = 0;
	int num = 1;

	int a[5][5] =
	{
	0, -2, 3, -7, 9,
	4, 4, -9, -3, 3,
	-8, -3, 0, 4, 0,
	3, -5, -5, 2, -3,
	2, -1, 6, -7, -9
	};

	n = 5;
	m = 5;

	printf("___________________________\n");
	printf("|№ n/n| i | j | Результат |\n");
	printf("---------------------------\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s = Process(a, i, j, n, m);
			printf("|%3d | %4d | %4d | %4d |\n", num++, i, j, s);
		}
	}
	printf("---------------------------\n");

	return 0;
}

int Process(int a[5][5], int ii, int jj, int n, int m)
{
	int sum = 0;

	for (int i = ii; i > -1; --i)
	{
		for (int j = jj; j > -1; --j)
		{
			if (a[i][j] < 0)
			{
				sum += a[i][j];
			}
		}
	}

	return sum;
}
