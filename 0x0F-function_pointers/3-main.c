#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * you:
 * are not allowed to code any other
 * function than main in this file
 * are not allowed to directly call op_add,
 * op_sub, op_mul, op_div or op_mod from the
 * main function
 * have to use atoi to convert arguments to int
 * are not allowed to use any kind of loop
 * are allowed to use a maximum of 3 if statements
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
