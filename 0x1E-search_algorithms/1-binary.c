#include <stdio.h>
#include <stddef.h>

/**
 * print_array - Prints the elements of an array within a specified range.
 *
 * @array: Pointer to the array.
 * @start: Starting index of the range.
 * @end: Ending index of the range.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using the binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		size_t middle = start + (end - start) / 2;

		print_array(array, start, end);
		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}
