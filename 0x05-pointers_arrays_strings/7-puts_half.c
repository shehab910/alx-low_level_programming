#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * If the number of characters is odd,
 * the function should print the last n
 * characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, j, len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		j = len / 2;
	else
		j = (len - 1) / 2;
	for (i = j; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
