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

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: accept string
 * Return: number of bytes in the initial segment of s,
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = s;

	while (includes(accept, *(p++)))
		len++;

	return (len);
}
