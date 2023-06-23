#include "main.h"
#include <stdio.h>


/**
 * print_triangle - Prints triangle of squares according to size parameter
 * @size: The size of the squares triangle
 * Return: void
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
for (z = 0; z < x + 1; z++)
{
putchar('#');
}
putchar('\n');
}
}
}
