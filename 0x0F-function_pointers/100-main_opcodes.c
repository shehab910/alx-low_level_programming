#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * Usage: ./main number_of_bytes
 * Output format:
 * the opcodes should be printed in hexadecimal,
 * lowercase
 * each opcode is two char long
 * listing ends with a new line
 * see example
 * You are allowed to use printf and atoi
 * You have to use atoi to convert the argument to an int
 * If the number of argument is not the correct one,
 * print Error, followed by a new line, and exit with
 * the status 1
 * If the number of bytes is negative, print Error,
 * followed by a new line, and exit with the status 2
 * You do not have to compile with any flags
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
