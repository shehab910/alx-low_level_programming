#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * print the result of the multiplication,
 * followed by a new line
 * assume that the two numbers and result
 * of the multiplication can be stored in an integer
 * if the program does not receive two arguments,
 * your program should print Error, followed by a new line,
 * and return 1
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0, 1 if an error happens.
 */
int main(int argc, char **argv)
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
