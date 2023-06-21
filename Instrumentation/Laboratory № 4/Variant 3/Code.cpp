#include<stdio.h>

int main(void)
{
	char ch;
	char array[25] = { 0 };
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		array[i] = ch;
		++i;
	}

	int N = i;
	i = 1;
	int count = 1;

	while (i < N)
	{
		if ((array[i] >= 65) && (array[i] <= 90) || (array[i] >= 97) && (array[i] <= 122))
		{
			if (((array[i] >= 65) && (array[i] <= 90) && (count % 2 == 0)) || (count == 0))
			{
				array[i] = array[i] + 32;
			}
			else
			{
				if ((array[i] >= 97) && (array[i] <= 122) && (count % 2 == 0))
				{
					array[i] = array[i] - 32;
				}
			}
			++count;
		}
		++i;
	}

	i = 0;

	while (i < N)
	{
		putchar(array[i]);
		++i;
	}

	return 0;
}
