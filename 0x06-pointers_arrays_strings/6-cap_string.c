#include "holberton.h"
/**
*cap_string - capitalise letters
*@s: string
*Return: char
*/
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0' ; i++)
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i]  <= 'z')
s[i + 1] -= 32;
}
}
return (s);
}
