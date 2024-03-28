#define _CRT_SECURE_NO_WARNINGS
#define SIZE 25

#include <stdio.h>
#include <locale.h>

#pragma warning(disable: 4996)

int main(void)
{
	setlocale(LC_ALL, "Russian");

	int matrix[SIZE][SIZE] = { 0 };

	int n, m, key = 1;
	char tmp;

	printf("Input count of rows:\n");

	if ((scanf("%d%c", &n, &tmp) != 2) || (n <= 0) || (tmp != '\n'))
	{
		printf("\nIncorrect input!\n\n");
		key = 0;
	}

	if (key != 0)
	{
		printf("Input count of columns:\n");

		if ((scanf("%d%c", &m, &tmp) != 2) || (m <= 0) || (tmp != '\n'))
		{
			printf("\nIncorrect input!\n");
			key = 0;
		}
	}

	if (key != 0)
	{
		printf("Input elements of array:\n");
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (key == 0)
				{
					break;
				}

				if ((scanf("%d%c", &matrix[i][j], &tmp) != 2) || (tmp != '\n' && tmp != ' '))
				{
					printf("\nIncorrect input!\n");
					key = 0;
					break;
				}
			}
		}

		if (key != 0)
		{
			printf("Yours elements:\n");
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					printf("matrix[%d][%d] = %3d ", i, j, matrix[i][j]);
				}
				printf("\n");
			}
		}
	}

	if (key != 0)
	{
		printf("\nProcess...\n");
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (j != 0 && (j != m - 1) && (matrix[i][j] % 2 == 0))
				{
					matrix[i][j] = matrix[i][j - 1] + matrix[i][j + 1];
				}
			}
		}

		printf("Your elements after process:\n");
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				printf("matrix[%d][%d] = %3d ", i, j, matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
