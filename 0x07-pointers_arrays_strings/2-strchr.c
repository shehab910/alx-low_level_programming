#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string that will be searched
 * @c: char to locate
 * Return: pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *tmp = s;

	while (*tmp != '\0' && *tmp != c)
		tmp++;

	return (*tmp == '\0' ? NULL : tmp);
}
