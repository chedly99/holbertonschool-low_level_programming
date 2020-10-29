#include "holberton.h"
#include <string.h>
/**
*_memset - fills n bytes of a memory with b a constant
*@s: pointer to the area
*@b: constant to fill with
*@n: number of bytes to fill
*Return: filled pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
