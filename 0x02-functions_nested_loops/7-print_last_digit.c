#include "holberton.h"
/**
*print_last_digit - print_last_digit
*@n: int
*Return: r
*/
int print_last_digit(int n)
{
long int r;
r = n % 10;
if (r < 0)
{
r = r * -1;
}

_putchar('0' + r);
return (r);
}
