#include<stdio.h>
#include<locale.h>

#pragma warning (disable : 4996)

int main(void)
{
	setlocale(LC_ALL, "Rus");

	int ch, sym1, sym2 = 1, count = 0, key = 1;

	ch = getchar();

	if (ch == '\n')
	{
		printf("Your string is empty!\n");
		return 0;
	}

	while (ch == ' ')
	{
		ch = getchar();
	}

	if (ch == '\n')
	{
		printf("Your string is empty!\n");
		return 0;
	}

	while (1)
	{
		sym1 = ch;

		while (ch != ' ')
		{
			if (ch == '\n')
			{
				key = 0;
				break;
			}

			sym2 = ch;
			ch = getchar();
		}

		if (sym1 == sym2)
		{
			++count;
		}

		if (key == 0) break;

		while (ch == ' ')
		{
			ch = getchar();
		}

	}

	printf("%d", count);
	return 0;
}
