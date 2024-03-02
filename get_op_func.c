#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func()- gets the function for each operator
 * @s: the operator in question
 *
 * Return: result of op
 */

int (*get_op_func(&op))(buffpoint, buffer, copy_args)
{
	op_t ops[] = {
	{"c", print_char},
	{"s", print_str},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == c)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL); 
}
