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

int print_char(int point, char* buffer, char a)
{
	buffer[point] = a;
	point++; 
	return (point);
}

/**
 * print_str()- prints string to buffer
 * @point: current write pos of buffer
 * @buffer- the buffer
 * @str: the string to write
 *
 * Return: point
 */

int print_str(int point, char* buffer, char* str)
{
	int i;

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

int print_d(int point, char* buffer, int d)
{
	char* str;
	int i;

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
