#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit = 0, secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = 0;
		while (secondDigit <= 99)
		{
			if (secondDigit > firstDigit)
			{
				putchar((firstDigit / 10) + '0');
				putchar((firstDigit % 10) + '0');
				putchar(' ');
				putchar((secondDigit / 10) + '0');
				putchar((secondDigit % 10) + '0');

				if (firstDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
