#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * where format is a list of types of
 * arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL,
 * print (nil) instead
 * any other char should be ignored
 * see example
 * You are not allowed to use for,
 * goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your
 * function
 * @format: list of types of arguments passed
 * @...: arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		j = i;
		while (format[j] && (format[j] == 'c' || format[j] == 'i' ||
							 format[j] == 'f' || format[j] == 's'))
			j++;
		if (format[j])
			printf(", ");
		i = j;
	}
	printf("\n");
	va_end(args);
}
