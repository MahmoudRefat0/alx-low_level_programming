#include <stdio.h>

/**
 * print_triangle - prints a triangle, off squares according to the parameter
 * @size: The size of the square triangle
 */
void print_triangle(int size)
{
    int x, y, z;

    if (size <= 0)
    {
        putchar('\n');
    }
    else
    {
        for (x = 0; x < size; x++)
        {
            for (y = size - x; y > 1; y--)
            {
                putchar(' ');
            }

            for (z = 0; z <= x; z++)
            {
                putchar('#');
            }

            putchar('\n');
        }
    }
}
