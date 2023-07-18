#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers n to 98
 * @n: The number to start printing from 
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if(n <= 90)
	{
	for (; n <= 90; n++)
	{
	if (n == 90)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 90; n--)
	{
	if (n == 90)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
