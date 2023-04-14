#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _puts - Prints a string to standard output.
 * @s: The string to print.
 */
void _puts(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
}

/**
 * print_error - Prints an error message to standard error and exits.
 */
void print_error(void)
{
	_puts("Error\n");
	exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *res;
	int len1, len2, lenres, carry, n1, n2, prod, i, j;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	lenres = len1 + len2;
	res = malloc(lenres + 1);

	if (!res)
		return (1);

	for (i = 0; i < lenres; i++)
		res[i] = '0';

	res[lenres] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]))
			print_error();

		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			if (!_isdigit(num2[j]))
				print_error();

			n2 = num2[j] - '0';
			prod = n1 * n2 + carry + (res[i + j + 1] - '0');
			carry = prod / 10;
			res[i + j + 1] = (prod % 10) + '0';
		}

		res[i + j + 1] = carry + '0';
	}

	while (*res == '0' && *(res + 1))
		res++;

	_puts(res);
	putchar('\n');

	free(res);

	return (0);
}
