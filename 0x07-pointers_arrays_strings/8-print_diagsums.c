#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0; /* Stores the sum of the main diagonal */
int sum2 = 0; /* Stores the sum of the secondary diagonal */

int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i]; /* Accessing main diagonal elements */
sum2 += a[i * size + (size - 1 - i)]; /* Accessing secondary diagonal element*/
}

printf("%d, %d\n", sum1, sum2);
}
