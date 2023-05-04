#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number from
 * @m: number to
 * You are not allowed to use the % or / operators
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned int count = 0;

	while (size--)
	{
		if ((n & mask) != (m & mask))
			count++;
		mask <<= 1;
	}
	return (count);
}
