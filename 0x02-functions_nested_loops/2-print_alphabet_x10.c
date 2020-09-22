#include "holberton.h"
/**
*print_alphabet_x10 - void
*/
void print_alphabet_x10(void)
{
int ch1 = 'a';
char ch2 = '\n';
int i = 0;
for (i = 0; i <  10; i++)
{
for (ch1 = 'a' ; ch1 <= 'z' ; ch1++)
{_putchar(ch1);
}
_putchar(ch2);
}
}
