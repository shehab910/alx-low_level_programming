#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: strings to be printed
 * where separator is the string to be
 * printed between the strings
 * and n is the number of strings passed
 * to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print
 * (nil) instead
 * Print a new line at the end of your
 * function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
