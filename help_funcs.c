#include "holberton.h"

/**
 * _putint - a function to print a int
 * @c: ainteger variable
 *
 * Return: void function
 */

int _putint(int n)
{

write(1, &n, 4);

return (1);
}

