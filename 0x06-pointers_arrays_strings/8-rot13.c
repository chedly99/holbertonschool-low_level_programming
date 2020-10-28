#include "holberton.h"
/**
  **rot13 - rotate to 13
*@d: pointer
*Return: pointer
*/
char *rot13(char *d)
{
char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

int i, j;

for (i = 0; d[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (d[i] == a[j])
{
d[i] = b[j];
break;
}
}
}
return (d);
}
