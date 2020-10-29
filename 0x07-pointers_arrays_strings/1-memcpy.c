#include "holberton.h"
#include "string.h"
/**
*_memcpy - copy a memory area
*@dest: destination
*@src: source
*n: integer
*return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
