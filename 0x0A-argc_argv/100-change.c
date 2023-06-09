#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of change
 * if the number of arguments passed to your program
 * is not exactly 1, print Error, followed by a new line,
 * and return 1
 * you should use atoi to parse the parameter passed to
 * your program
 * If the number passed as the argument is negative,
 * print 0, followed by a new line
 * You can use an unlimited number of coins of values:
 * 25, 10, 5, 2, and 1 cent
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
