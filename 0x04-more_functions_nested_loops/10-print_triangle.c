#include <stdio.h>


/**
 * Prints a triangle pattern using '#'.
 *
 * @param size The size of the triangle (must be a positive integer)
 *
 * Prints a triangle pattern of the specified size using the '#' character.If size is 0 or less, only a new line is printed.
*/
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
printf("#");
}
printf("\n");
}
}
