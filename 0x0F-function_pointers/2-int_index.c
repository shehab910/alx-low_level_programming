#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * where size is the number of elements in
 * the array array
 * cmp is a pointer to the function to be
 * used to compare values
 * int_index returns the index of the first
 * element for which the cmp function
 * does not return 0
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * Return: if no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
