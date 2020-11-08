#include "holberton.h"
/**
*_strncat - concatenates two strings
*@dest: pointer to char
*@src: pointer to char
*@n: int
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while (j < n && *(src + j))
{
dest[i] = src[j];
i++;
j++;
}
if (j < n)
dest[i] = src[j];
return (dest);
}

