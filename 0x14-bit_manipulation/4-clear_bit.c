#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to convert
 * @index: index of the bit
 * where index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);
	mask <<= index;
	*n &= ~mask;
	return (1);
}
