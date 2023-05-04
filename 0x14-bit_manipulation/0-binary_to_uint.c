/**
 * twoPower - compute the the power of a number for base 2
 * @pow: the power
 * Return: result
 */
unsigned int twoPower(int pow)
{
	unsigned int value = 1;

	while (pow--)
		value *= 2;
	return (value);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containg binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int res = 0;
	const char *tmp;

	if (!b)
		return (0);
	tmp = b;
	while (*(tmp++) != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
			continue;
		else if (b[i] == '1')
			res += twoPower(len - 1 - i);
		else
			return (0);
	}
	return (res);
}
