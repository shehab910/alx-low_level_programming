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
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n'
		|| a[i] == ',' || a[i] == ';' || a[i] == '.'
		|| a[i] == '!' || a[i] == '?'
		|| a[i] == '"' || a[i] == '('
		|| a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
}
