#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, last = '9';

	for (i = '0'; i <= last; i++)
	{
		putchar(i);
		if (i == '9')
		{
			i = 'a' - 1;
			last = 'f';
		}
	}
	putchar('\n');
	return (0);
}
