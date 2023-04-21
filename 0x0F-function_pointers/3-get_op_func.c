#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user.
 * @s: operator passed as argument to the program.
 * Return: res
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
