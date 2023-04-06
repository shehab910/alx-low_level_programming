#include "main.h"

/**
 * _pow_recursion - x raised to the power of y.
 * If y is lower than 0, should return -1
 * @x: base
 * @y: exponent
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}