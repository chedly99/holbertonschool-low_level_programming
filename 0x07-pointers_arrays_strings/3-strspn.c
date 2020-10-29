#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: char
* @accept: char
* Return: n
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, n;
n = 0;
for (i = 0 ; accept[i] != '\0'; i++)
{
for (j = 0 ; s[j] != '\0' ; j++)
{
if (accept[i] == s[j])
{
n++;
break;
}
}
}
n++;
return (n);
}
