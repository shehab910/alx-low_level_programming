#include "main.h"

/**
 * _strcmp -  compares two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 0 if the strings can be considered identical,
 * otherwise return difference between
 * first two differing bytes
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
