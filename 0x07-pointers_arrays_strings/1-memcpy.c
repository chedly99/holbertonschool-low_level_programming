#include "holberton.h"
#include "string.h"
/**
*_memcpy - copy n bytes from src to dest
*@dest: destination
*@src: source
*@n: integer
*Return: the destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
