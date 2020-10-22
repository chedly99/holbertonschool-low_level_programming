#include "holberton.h"
/**
*_strncat - concatenates 2 string
*@dest:char
*@src:char
*@n
*Return:char
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; *dest != 0; i++)
for (j = 0 ; j < n && src[j] != '\0' ; j++)
{
dest[i+j] = src[j];
}
dest[i+j] = '\0';
return(dest);
}
