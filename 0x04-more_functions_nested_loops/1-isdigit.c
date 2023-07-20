#include "main.h"

/**
 * _isdigit - check if the character is a digit between 0 - 9
 * @c: char to be checked
 *
 * Return: 0 if it's not a digit, 1 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
