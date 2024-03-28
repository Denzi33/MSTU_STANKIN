#define SIZE 50

#include<stdio.h>

int main(void)
{
	char arr[SIZE] = { 0 };

	int N;	
	int i = 0;
	
	int ch;

	printf("Your string:\n");

	ch = getchar();

	while (ch != '\n')
	{
		arr[i] = ch;
		++i;
		ch = getchar();
	}

	N = i;
	i = 0;

	while (i < N)
	{
		if ((arr[i] == ',') && (i > 0))
		{
			if (arr[i - 1] >= 65 && arr[i - 1] <= 90)
			{
				arr[i - 1] = arr[i - 1] + 32;
			}

			if ((arr[i] == '.') && (i > 0))
			{
				if (arr[i - 1] >= 97 && arr[i - 1] <= 122)
				{
					arr[i - 1] = arr[i - 1] - 32;
				}
			}
		}
	++i;
	}

	i = 0;

	while (i < N)
	{
		putchar(arr[i]);
		++i;
	}

	return 0;
}
