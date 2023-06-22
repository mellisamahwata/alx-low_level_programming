#include <stdio.h>


/**
 * Prints a triangle pattern using '#'.
 *
 *@param size The size of the triangle
 *
 * Prints a triangle pattern of the specified size using the '#' character.
 * If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
if (size <= 0)
{
printf("\n");
return;
}

int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
printf("#");
}
printf("\n");
}
}
