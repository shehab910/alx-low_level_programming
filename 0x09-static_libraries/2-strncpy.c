#include "main.h"

/**
 * _strncpy - Your function should work exactly like strncpy
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
