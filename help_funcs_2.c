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
	if (s == NULL)
		return (-1);

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
	if (s == NULL)
		return (-1);

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
	if (s == NULL)
		return (-1);

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

/**
 * printstr_custom - a function to print a reverse of a given string
 * @pargs: a variadic list
 *
 * Return: 1 in success
 */

int printstr_custom(va_list pargs)
{
	char *s;
	int i = 0;
	int n, t;
	char *c;

	c = malloc(4);
	if (c == NULL)
		return (-1);

	s = va_arg(pargs, char *);

	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (s[i] <= 15)
			{
				_putchar('0');
				n = s[i++];
				_uitoa(n, c, 16);
				if (c[0] >= 'a' && c[0] <= 'z')
					c[0] -= 32;
				_putchar(c[0]);
				continue; }
			n = s[i++];
			_uitoa(n, c, 16);
			t = 0;
			while (t < 2)
			{
				if (c[t] >= 'a' && c[t] <= 'z')
					c[t] -= 32;
				_putchar(c[t++]); }
			continue; }
		_putchar(s[i++]); }

	return (i);
}
