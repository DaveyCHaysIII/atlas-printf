#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen() - returns length of string
 * @str: the string in question
 *
 * Return: length
 */

int _strlen(char *str)
{
	int i, remainder;

	i = 0;
	while (str[i] != "\0")
	{
		i++;
	}
	return (i);
}

/**
 * _itoa() - converts integer to string
 * @num: the int in question
 *
 * Return: the string
 */

char* _itoa(int num)
{

}

/**
 * _putchar()- puts a char
 * @a: the char in question
 *
 * Return: 0 on success
 */

int _putchar(char a)
{
	write(1, a, 1);
	return (0);
}
