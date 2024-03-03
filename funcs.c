#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char()- prints char to buffer
 * @point: current write pos of buffer
 * @ buffer: the buffer
 * @a: the char to write
 *
 * Return: point
 */

int print_char(int point, char* buffer, va_list args)
{
	char c;
	c = va_arg(args, int);
	buffer[point] = (char)c;
	point++;
	return(point);
}

/**
 * print_str()- prints string to buffer
 * @point: current write pos of buffer
 * @buffer- the buffer
 * @str: the string to write
 *
 * Return: point
 */

int print_str(int point, char* buffer, va_list copy_args)
{
	int i;

	char* str = va_arg(copy_args, char*);
	i = 0;
	while (str[i] != '\0')
	{
		buffer[point] = str[i];
		i++;
		point++;
	}
	return (point);
}

/**
 * print_d()- prints an int to buffer
 * @point- current write pos of buffer
 * @buffer- the buffer
 * @d: the int to write
 *
 * Return: point (and FREE _iota())
 */

int print_d(int point, char* buffer, va_list copy_args)
{
	char *str;
	int i, d;
	
	d = va_arg(copy_args, int);
	str = _itoa(d);
	i = 0;
	while (str[i] != '\0')
	{
		buffer[point] = str[i];
		i++;
		point++;
	}
	free(str);
	return (point);
}

int print_modulo(int point, char* buffer, va_list args)
{
	buffer[point] = '%';
	point++;	
	return (point);
}
