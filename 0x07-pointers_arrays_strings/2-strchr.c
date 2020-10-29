#include "holberton.h"
/**
*_strchr - search c in s
*@s: string
*@c: character
*Return: null
*/
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
