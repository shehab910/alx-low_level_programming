#include "main.h"

/**
 * factorial - factorial of a given number.
 * If n is lower than 0,
 * Function should return -1 to indicate an error
 * @n: number to factorial
 * Return: factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
