#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - value of a bit at a given index.
 * @n: number to convert
 * @index: index of the bit
 * index starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	int size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);
	mask <<= index;
	return (n & mask);
}
