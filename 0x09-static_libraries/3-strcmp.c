#include "holberton.h"
/**
*_strcmp - compares two digits
*@s1: pointer to char
*@s2: pointer to char
*Return: cmp
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
i++;
return (s1[i] - s2[i]);
}

