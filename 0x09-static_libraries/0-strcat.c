#include "main.h"

/**
 * _strcat - check the code
 * @dest: dest
 * @src: src
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*(dest++) = *(src++);
	*dest = '\0';
	return (p);
}
