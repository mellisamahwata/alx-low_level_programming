#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char *av[]);

/**
 * main - entry point of the program
 * @ac: the number of command-line arguments
 * @av: an array of strings representing the command-line arguments
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
