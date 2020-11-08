#include "holberton.h"
/**
*_strncpy - copies the first num characters
*@dest: pointer to char
*@src: pointer to char
*@n: int
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *(src + i))
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

