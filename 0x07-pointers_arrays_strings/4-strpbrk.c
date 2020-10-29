#include "holberton.h"
/**
* _strpbrk -  searches a string for any of a set of bytes
* @s:string
* @accept:string
* Return:char
*/
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0 ; accept[j] != '\0' ; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}
return ('\0');
}
