#include "holberton.h"

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


    while(s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return (1);
}

int printuns(va_list pargs)
{
    char *s;
    unsigned int a;
    int i = 0;
    s = malloc(256);

    a = va_arg(pargs, unsigned int);
    _uitoa(a, s, 10);


    while(s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return (1);
}

int printuoct(va_list pargs)
{
    char *s;
    unsigned int a;
    int i = 0;
    s = malloc(256);

    a = va_arg(pargs, unsigned int);
    _uitoa(a, s, 8);


    while(s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return (1);
}

int printubin(va_list pargs)
{
    char *s;
    unsigned int a;
    int i = 0;
    s = malloc(256);

    a = va_arg(pargs, unsigned int);
    _uitoa(a, s, 2);


    while(s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return (1);
}

int printuhex(va_list pargs)
{
    char *s;
    unsigned int a;
    int i = 0;
    s = malloc(256);

    a = va_arg(pargs, unsigned int);
    _uitoa(a, s, 16);


    while(s[i] != '\0')
    {
        _putchar(s[i++]);
    }
    return (1);
}

