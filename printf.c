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
 * print_str - a function to print a string variable argument
 * @str: a character string pointer
 *
 * Return: void function
 */

void print_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
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
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					print_str(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					break;
				default:
					i++;
					continue;
			}
		}
		else if (format[i] == '\\')
		{
			i++;
			continue;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	return (0);
}
