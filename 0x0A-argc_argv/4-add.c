#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program,
 * print 0, followed by a new line
 * If one number contains symbols that aren't digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of all
 * the numbers can be stored in an int
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j, k = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
