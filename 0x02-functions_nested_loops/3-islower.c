#include "main.h"

/**
 * _isslower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _isslower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
