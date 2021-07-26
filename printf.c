#include "holberton.h"

/**
 * _putchar - a function to print a char
 * @c: a charcter to prinr
 *
 * Return: void function
 */

int _putchar(char c)
{

	write(1, &c, 1);

	return (1);
}

/**
 * printchar - a function to print a character argument
 * @pargs: a variadic list
 *
 * Return: 1 in success
 */

int printchar(va_list pargs)
{
	_putchar(va_arg(pargs, int));
	return (1);
}

/**
 * printstr - a function to print a string variable argument
 * @pargs: a variadic list
 *
 * Return: 1 in success
 */

int printstr(va_list pargs)
{
	char *s;
	int i = 0;

	s = va_arg(pargs, char *);

	while (s[i] != '\0')
	_putchar(s[i++]);

	return (i);
}

/**
 * _printf - a function to replace printf
 * @format: a string pointer
 *
 * Return: returns an integer
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[++i] == '%')
			{
				_putchar(format[i++]);
				count++;
				continue;
			}
			else if (get_func(format[i]) == NULL)
			{
				_putchar(format[i - 1]);
				_putchar(format[i++]);
				count++;
				continue;
			}
			count += get_func(format[i])(args);
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
		count++;
	}

	return (count);
}

/**
 * get_func - a function finder for the conversion specifiers
 * @c: a character to act like as a specifier
 *
 * Return: an integer
 */

int (*get_func(char c))(va_list)
{
	spec funcs[] = {
		{ 'c', printchar},
		{ 's', printstr},
		{ 'd', printint},
		{ 'i', printint},
		{ 'u', printuns},
		{ 'b', printubin},
		{ 'o', printuoct},
		{ 'x', printuhex},
		{ 'X', printuhex_C},
		{ 'p', printaddr},
		{ 'r', printrevstr},
		{ '\0', NULL}
			};

	int i = 0;

	while (funcs[i].ch != '\0' && funcs[i].ch != c)
		i++;

	return (funcs[i].f);
}
