#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert
 * Format: see example
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int size = sizeof(unsigned long int) * 8;
	int i = 0;

	mask <<= size - 1;
	while (i < size)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
		i++;
	}
}
