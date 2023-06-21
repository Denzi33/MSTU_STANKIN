#include<stdio.h>
#include<locale.h>

#pragma warning (disable : 4996)

int main(void)
{
	setlocale(LC_ALL, "Rus");

	int ch;

	ch = getchar();

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
