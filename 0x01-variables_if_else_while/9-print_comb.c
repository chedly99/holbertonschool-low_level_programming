#include <stdio.h>
/**
* main - main
* Return: 0
*/
int main(void)
{
char ch;

for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
if (ch != '9')
{
putchar(',');
putchar(' ');
}
}

putchar ('\n');
return (0);
}
