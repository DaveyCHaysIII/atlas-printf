#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/**
 * _strlen() - returns length of string
 * @str: the string in question
 *
 * Return: length
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _itoa() - converts integer to string
 * @num: the int in question
 *
 * Return: the string (also you HAVE TO FREE)
 */

char* _itoa(int num)
{
	char* str;
	char temp;
	int i, digit, start, end, is_neg;

	str = malloc(sizeof(char) * 10);
	i = 0;
	is_neg = 0;
	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}
	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
	}
	while (num != 0)
	{
		digit = num % 10;
		str[i++] = digit + '0';
		num /= 10;
	}
	if (is_neg > 0)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = str[end];
		str[end] = str [start];
		str[start] = temp;
		start++;
		end++;
	}
	return (str);
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
