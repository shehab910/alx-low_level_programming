#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @a: pointer to the string
 * Return: pointer to the string
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)
				a[i] -= 32;
			else if (a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n'

					 || a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.'

					 || a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"'

					 || a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{'

					 || a[i - 1] == '}')
				a[i] -= 32;
		}
	}
	return (a);
}
