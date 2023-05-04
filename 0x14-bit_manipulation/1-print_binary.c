#include <stdio.h>
#include "main.h"

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
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (!flag)
	{
		putchar('0');
	}
}
