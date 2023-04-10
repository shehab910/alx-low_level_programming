#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to the string we copy from
 * Num in string can be preceded by infinite num of char
 * You need to take into account
 * all the - and + signs before the number
 * If there are no numbers in the string,
 * the function must return 0
 * You aren't allowed to use long
 * You aren't allowed to declare arrays
 * You aren't allowed to hard-code special values
 * Return: the converted number, or 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int digit;
	int int_max = 2147483647;
	int int_min = -2147483648;

	/* skip any non-numeric characters at the beginning of the string */
	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	/* read the numeric characters and convert them to an integer */
	while (*s != '\0' && *s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (num > int_max / 10 || (num == int_max / 10 && digit > int_max % 10))
		{
			if (sign == 1)
				return (int_max);
			return (int_min);
		}
		num = num * 10 + digit;
		s++;
	}

	return (sign * num);
}

