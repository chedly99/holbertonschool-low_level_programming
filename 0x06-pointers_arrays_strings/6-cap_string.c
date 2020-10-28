#include "holberton.h"
/**
*cap_string - capitalise letters
*@s: string
*Return: char
*/
char *cap_string(char *s)
{
int i = 0, j;
char ch[] = " \t\n,;.!?\"(){}";
while (s[i] != '\0')
{
for (j = 0; ch[j] != '\0'; j++)
{
if (s[i] == ch[j])
{
if (s[i + 1] >= 'a' && s[i]  <= 'z')
{
s[i + 1] -= 32;
break;
}
}
}
i++;
}
return (s);
}
