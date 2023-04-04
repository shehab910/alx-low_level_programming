#include "main.h"

/**
 * includes - determines if a char present in str
 * @str: the string
 * @c: the character
 * Return: 1 if char found else 0
 */
int includes(char *str, char c)
{
	char *p = str;

	while (*p != c && *p != '\0')
		p++;

	return (*p != '\0');
}