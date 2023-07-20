#include "main.h"

/**
 * _isupper - check if the character is an uppercase letter
 * @c: char to check
 *
 * Return: 0 if it's not an uppercase letter, 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
