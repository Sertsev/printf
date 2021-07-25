#include "holberton.h"

int printaddr(va_list pargs)
{
    char *s;
    int a;
    int i = 0;

    s = malloc(256);

    a = va_arg(pargs, unsigned int);
    _itoa(a, s, 16); 

    while(s[i] != '\0')
    {
        _putchar(s[i++]);
    }

    return (1);
}

