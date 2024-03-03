#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func()- gets the function for each operator
 * @buffpoint: point on buff
 * @buffer: the buffer
 * @copy_args: the args list
 *
 * Return: result of op
 */

int (*get_op_func(char op))(int buffpoint, char* buffer, va_list copy_args)
{
	op_t ops[] = {
	{"c", print_char},
	{"s", print_str},
	{"d", print_d},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL); 
}
