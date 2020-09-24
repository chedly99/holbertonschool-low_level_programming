#include "holberton.h"
/**
* print_line - print_line
*@n: int
*/
void print_line(int n)
{
int i = 0;
if (n >= 0)
{
while (n > i)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
