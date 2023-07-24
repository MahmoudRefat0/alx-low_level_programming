#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src.
 * @dest: Copy to.
 * @src: Copy from.
 * Return: String.
 */
char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int X = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for (; X < I; X++)
	{
		dest[X] = src[X];
	}
	dest[I] = '\0';
	return (dest);
}
