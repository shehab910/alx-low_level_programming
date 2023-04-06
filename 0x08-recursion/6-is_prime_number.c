#include "main.h"

/**
 * prime - checks if a number is prime.
 * @n: number to check
 * @i: number to compare
 * Return: 1 if input is a prime number,
 * otherwise return 0.
 */
int prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}


/**
 * is_prime_number - checks if a number is prime.
 * @n: number to check
 * Return: 1 if input is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}