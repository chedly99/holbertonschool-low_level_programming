#include "holberton.h"
/**
*print_triangle - printing triangles
*@size: size
*/
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
for (i = 1; i <= size; i++)
{
for (j = 1; j <= (size - i); j++)
_putchar (' ');
for (k = 1; k <= (size - (size - i)); k++)
_putchar ('#');
_putchar ('\n');
}
else
_putchar ('\n');
}
