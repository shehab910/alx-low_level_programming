#include "main.h"

/**
 * sqrt - find the natural square root of a number.
 * @n: number to find the square root
 * @i: number to compare
 * Return: the natural square root of a number.
 */
int sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - the natural square root of a number.
 * If n doesn't have natural sqrt, should return -1
 * @n: number to find the square root
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt(n, 1));
}
