#include <stdio.h>

/**
 * FizzBuzz program - prints numbers from 1 to 100 with replacements.
 *
 *This program prints numbers from 1 to 100, replacing multiples of 3 with "Fizz",
 *multiples of 5 with "Buzz",and multiples of both 3 and 5 with "FizzBuzz".
 *Numbers or words are separated by a space,and a newline is printed at the end.
 *
 * @return 0 on successful execution
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}

printf("\n");

return (0);
}
