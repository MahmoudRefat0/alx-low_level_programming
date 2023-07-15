#include <stdio.h>
/**
 * main - A program that prints the size of various computer types  
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of along long int: %d byte(s)", sizeof (long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
