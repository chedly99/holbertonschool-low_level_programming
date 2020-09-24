#include "holberton.h"

#include "stdio.h"
/**
* more_numbers - more_numbers
*/
void more_numbers(void)
{
int a = 0;
int b = 0;
while (a <= 9)
{
b = 0;
while (b <= 14)
{
if (b > 9)
{
_putchar('0' + b / 10);
}
_putchar('0' + b % 10);
b++;
}
_putchar('\n');
a++;
}
}
