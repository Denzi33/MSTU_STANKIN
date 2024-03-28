#include<stdio.h>
#include<locale.h>

#pragma warning (disable : 4996)

int main(void)
{
	setlocale(LC_ALL, "Rus");

	int ch;

	printf("Input string:\n");
	ch = getchar();

	printf("Processing string:\n");
		while (ch != '\n')
		{
			if (ch == '\n') 
			{
				return 0;
			}

			if (ch == ':')
			{
				putchar(';');
			}
			else 
			{
				putchar(ch);
			}
			ch = getchar();
		}

	return 0;
}
