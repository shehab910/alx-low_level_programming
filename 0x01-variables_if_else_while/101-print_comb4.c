#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j && j != k && i != k)
				{
					printf("%d%d%d", i, j, k);
					if (i != 7)
						printf(", ");
					else
						printf("\n");
				}
			}
		}
	}
	return (0);
}
