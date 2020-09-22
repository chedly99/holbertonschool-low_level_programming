#include "holberton.h"
/**
*last digit - print_last_digit
*@n : int
*Return:
*/
int print_last_digit(int n)
{
int (r);
if (n < 0) {
  n = n * -1;
}
r = n % 10;
_putchar('0' + r);
return(r);
}
