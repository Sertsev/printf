#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * struct conv - a struct of a function pointer and a character
 * @ch: a conversion specifier character
 * @f: a function pointer
 */

typedef struct conv
{
	char ch;
	int (*f)(va_list);
} spec;

char tstr(unsigned int n);
void reve(char *buff);
int printrevstr(va_list pargs);
void _itoa(long int v, char *s, int base);
void _uitoa(unsigned long int v, char *s, unsigned int base);
int printchar(va_list pargs);
int printuns(va_list pargs);
int printuoct(va_list pargs);
int printubin(va_list pargs);
int printuhex(va_list pargs);
int printuhex_C(va_list pargs);
int printaddr(va_list pargs);
int (*get_func(char c))(va_list);
int printstr(va_list pargs);
int printstr_custom(va_list pargs);
int _putchar(char c);
int _printf(const char *format, ...);
void print_str(char *str);
int printint(va_list pargs);

#endif
