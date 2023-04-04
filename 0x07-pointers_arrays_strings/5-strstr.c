#include "main.h"

/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: string to be searched
 * @needle: substring to be searched for
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q = needle;

	while (*p)
	{
		if (*p == *q)
		{
			while (*q)
			{
				if (*p != *q)
					break;
				p++;
				q++;
			}
			if (!*q)
				return (p - (q - needle));
		}
		p++;
	}
	return (NULL);
}
