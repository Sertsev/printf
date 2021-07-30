#include "holberton.h"

/**
 * tstr - a function to convert a number to string
 * @n: unsigned long long int n
 *
 * Return: only 1
 */

char tstr(unsigned int n)
{
	switch (n)
	{
		case 1:
			return ('1');
		case 2:
			return ('2');
		case 3:
			return ('3');
		case 4:
			return ('4');
		case 5:
			return ('5');
		case 6:
			return ('6');
		case 7:
			return ('7');
		case 8:
			return ('8');
		case 9:
			return ('9');
		case 0:
			return ('0');
		case 0xa:
			return ('a');
		case 0xb:
			return ('b');
		case 0xc:
			return ('c');
		case 0xd:
			return ('d');
		case 0xe:
			return ('e');
		case 0xf:
			return ('f');
	}

	return (1);
}

/**
 * reve - a function to reverse a string
 * @buff: a string variable
 *
 * Return: void
 */

void reve(char *buff)
{
	int i = 0, j = 0;
	char *strb;

	strb = malloc(128);
	if (strb == NULL)
		return;

	while (buff[i] != '\0')
	{
		strb[i] = buff[i];
		i++;
	}

	while (--i >= 0)
	{
		buff[j++] = strb[i];
	}
}

/**
 * _itoa - a function to covert a number to string
 * @v: a long long integer value
 * @s: a converted string location pointer
 * @base: the base integer
 *
 * Return: only 1
 */

void _itoa(long int v, char *s, int base)
{
	char *buf;
	int rem;
	int i = 0;

	buf = malloc(128);
	if (buf == NULL)
		return;

	if (v < 0)
	{
		v *= (-1);
		s[i] = '-';
	}

	while (v > 0)
	{
		rem = v % base;
		buf[i] = tstr(rem);
		if (v >= base)
		{
			v = v / base;
			if (v < base)
			{
				buf[++i] = tstr(v);
				i++;
				break;
			}
		}
		else if (v < base)
		{
			i++;
			break;
		}
		i++;
	}

	buf[i] = '\0';
	reve(buf);
	strcat(s, buf);
	free(buf);
}

/**
 * _uitoa - a function to convert an unsigned int to a string
 * @v: unsigned long long int value
 * @s: a coonverted string location  pointer
 * @base: a number base
 *
 * Return: void function
 */

void _uitoa(unsigned long int v, char *s, unsigned int base)
{
	char *buf;
	int rem;
	int i = 0;

	buf = malloc(128);
	if (buf == NULL)
		return;

	while (v > 0)
	{
		rem = v % base;
		buf[i] = tstr(rem);
		if (v >= base)
		{
			v = v / base;
			if (v < base)
			{
				buf[++i] = tstr(v);
				i++;
				break;
			}
		}
		else if (v < base)
		{
			i++;
			break;
		}
		i++;
	}
	buf[i] = '\0';

	reve(buf);

	strcat(s, buf);
}

