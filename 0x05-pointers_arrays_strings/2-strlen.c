#include "holberton.h"
/**
*_strlen - strln
*@s: string
*Return: lengh
*/
int _strlen(char *s)
 {
int i;
 for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}
