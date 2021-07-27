#include "holberton.h"

/**
 * rot13 - a function to encode a string in rot13 rule
 * @s: a string pointer
 *
 * Return: returns a charcter pointer
 */

void rot13(char *s)
{
	int i = 0;

while (s[i] != '\0')
{
	if ((s[i] <= 77 && s[i] >= 65) || (s[i] > 96 && s[i] < 105))
		s[i] = s[i] - 13;
	else if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		s[i] = s[i] + 13;
	i++;
}
}
/* printrotstr - a function to print a reverse of a given string
 * @pargs: a variadic list
 *
 * Return: 1 in success
 */

int printrotstr(va_list pargs)
{
	char *s;
	int i = 0;

	s = va_arg(pargs, char *);



	while (s[i] != '\0')
		_putchar(s[i++]);

	return (i);
}
