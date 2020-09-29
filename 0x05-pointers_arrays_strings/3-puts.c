#include "holberton.h"
/**
 * _puts - prints a string.
 * @str: pointer
 * Return: N/A .
 */
void _puts(char *str)
{
int n;
n = 0;
while (*(str + n) != '\0')
{
_putchar(*(str + n));
n += 1;
}
_putchar('\n');
}
