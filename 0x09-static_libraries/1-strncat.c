#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src;
 * src doesn't need to be null-terminated if contains n or more bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
