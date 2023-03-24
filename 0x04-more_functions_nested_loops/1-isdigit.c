#include "main.h"

/**
 * isdigit - check if upper.
 * @c: char to be checked
 * Return: return 1 if is digit.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
