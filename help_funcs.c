#include "holberton.h"

/**
 * printrevstr - a function to print a reverse of a given string
 * @pargs: a variadic list
 *
 * Return: 1 in success
 */

int printrevstr(va_list pargs)
{
	char *s;
	int i = 0;

	s = va_arg(pargs, char *);

	if (s == NULL)
	{
		_putchar('%');
		_putchar('r');
		return (1);
	}

	reve(s);

	while (s[i] != '\0')
	_putchar(s[i++]);

	return (i);
}

/**
 * printint - a function to print a int
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printint(va_list pargs)
{
	char *s;
	long int a;
	int i = 0;

	s = malloc(256);

	a = va_arg(pargs, int);
	_itoa(a, s, 10);

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}

	return (i);
}

/**
 * printuns - a function to print unsigned int
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printuns(va_list pargs)
{
	char *s;
	unsigned int a;
	int i = 0;

	s = malloc(256);

	a = va_arg(pargs, unsigned int);
	_uitoa(a, s, 10);

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}

	return (i);
}

/**
 * printuoct - a function to print an unsigned oct
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printuoct(va_list pargs)
{
	char *s;
	unsigned long int a;
	int i = 0;

	s = malloc(256);

	a = va_arg(pargs, unsigned long int);
	_uitoa(a, s, 8);

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}

	return (i);
}

/**
 * printubin - a function to print a unsigned int in binary
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printubin(va_list pargs)
{
	char *s;
	unsigned long int a;
	int i = 0;

	s = malloc(256);

	a = va_arg(pargs, unsigned long int);
	_uitoa(a, s, 2);

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}

	return (i);
}

