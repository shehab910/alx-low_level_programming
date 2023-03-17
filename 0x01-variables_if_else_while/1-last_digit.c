#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	printf("Last digit of %d is %d and is ", n, lastD);
	if (lastD > 5)
		printf("greater than 5\n");
	else if (lastD < 6)
		printf("less than 6 and not 0\n");
	else
		printf("0\n");
	return (0);
}
