#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	printf("Lowercase letters:\n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	printf("\nUppercase letters:\n");
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
