#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using
 * linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size && array != NULL; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
