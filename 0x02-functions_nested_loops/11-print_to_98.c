#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - print to 89
*@n : int
*Return:
*/
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n = n - 1;
}
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
printf("\n");
}
