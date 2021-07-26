#include "holberton.h"

/**
 * printaddr - a function to print an address
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printaddr(va_list pargs)
{
	char *s;
	unsigned long int a;
	int i = 0;

	s = malloc(256);

	a = (unsigned long int) va_arg(pargs, void *);
	_uitoa(a, s, 16);

	_putchar('0');
	_putchar('x');

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}

	return (i);
}

/**
 * printuhex - a function to print an hexadecimal value
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printuhex(va_list pargs)
{
	char *s;
	unsigned long int a;
	int i = 0;

	s = malloc(256);

	a = va_arg(pargs, unsigned long int);
	_uitoa(a, s, 16);

	while (s[i] != '\0')
	{
		_putchar(s[i++]);
	}

	return (i);
}

/**
 * printuhex_C - a function to print an hexadecimal value
 * @pargs: a variadic function list
 *
 * Return: only 1
 */

int printuhex_C(va_list pargs)
{
	char *s;
	unsigned long int a;
	int i = 0;

	s = malloc(256);

	a = va_arg(pargs, unsigned long int);
	_uitoa(a, s, 16);

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		_putchar(s[i++]);
	}

	return (i);
}


