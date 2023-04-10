#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: the address of bytes to be filled
 * @b: the byte with which all bytes are filled with
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*(p++) = b;
	return (s);
}
