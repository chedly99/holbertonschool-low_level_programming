#include "holberton.h"
/**
*_print_rev_recursion - print recursion in reverse
*@s: arr
*Return: void
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
