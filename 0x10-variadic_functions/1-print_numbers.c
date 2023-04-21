#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by nl.
 * where separator is the string to be
 * printed between numbers
 * and n is the number of integers passed
 * to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
