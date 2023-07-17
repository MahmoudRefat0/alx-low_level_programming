#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cH = 'A';

	/* Print a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* Print A - Z */
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}

	putchar('\n');

	return (0);
}
