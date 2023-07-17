#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print alphabet in lower case then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints a - z*/
	while (ch <= 'Z')
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
