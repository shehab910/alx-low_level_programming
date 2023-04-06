#include "main.h"

/**
 * check_palindrome - check if a string is a palindrome
 * @s: string to check
 * @len: length of the string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	return (check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);
	while (s[len] != '\0')
		len++;
	return (check_palindrome(s, len));
}
