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
	int (*f)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
