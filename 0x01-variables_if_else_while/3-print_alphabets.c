#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, first;

	for (i = first = 'a'; i <= (first + 25); i++)
	{
		putchar(i);
		if (i == 'z')
		{
			i = first = 'A';
			i--;
		}
	}
	putchar('\n');
	return (0);
}
