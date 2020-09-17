#include <stdio.h>
/**
* main - main
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar ('\n');
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar ('\n');
return (0);
}
