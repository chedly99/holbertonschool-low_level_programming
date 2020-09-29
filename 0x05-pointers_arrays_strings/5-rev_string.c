#include <stdio.h>
/**
*rev_string - reverse string
*@s: char
*/
void rev_string(char *s)
{
int i, j;
char str;
for (i = 0; s[i]; i++)
{}
for (j = 0; j < i / 2; j++)
{
str = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = str;
}
}
