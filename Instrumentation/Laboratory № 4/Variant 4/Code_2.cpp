#include<stdio.h>

int main(void)
{
	int i = 0;
	int N;
	int ch;
	char arr[25] = {0};
	int w = 0;

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
		if (arr[i] == ':')
		{

			int j = i;
			while (j < N - 1)
			{
				arr[j] = arr[j + 1];
				j++;
			}
			N--;
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
