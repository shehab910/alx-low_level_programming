/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to another int to be swapped with a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
