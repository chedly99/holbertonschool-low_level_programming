#include "holberton.h"
/**
*print_last_digit - print_last_digit
*@n: int
*Return: r
*/
int print_last_digit(int n)
{
long int r;
if (n < 0)
{
n = n * -1;
}
r = n % 10;
_putchar('0' + r);
return (r);
}
