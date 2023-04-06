#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome without using loops
 * @s: string to check
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	// without using loops
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (1);
	return (is_palindrome(s + 1));
}
