#include "holberton.h"
/**
*puts2 - print an even string
*@str: string to print
*/
void puts_half(char *str)
{
int i, j, n;

for (i = 0; str[i]; i++)
{}
if (i % 2 == 0)
{
n = i / 2;
for (j = n; j < i; j++)
{
_putchar (str[j]);
}
_putchar ('\n');
}
}
