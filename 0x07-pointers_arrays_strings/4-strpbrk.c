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
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string that will be searched
 * @accept: bytes that will be accepted
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (!includes(accept, *(p++)))
	{}
	return (--p);
}
