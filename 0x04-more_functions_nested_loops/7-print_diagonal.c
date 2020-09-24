#include "holberton.h"
/**
* print_diagonal - print_diagonal
*@n: int
*/
void print_diagonal(int n)
{
int i = 0;
int j = 0;
if (n > 0)
{
while (n > i)
{
j = 0;
while (i > j)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
