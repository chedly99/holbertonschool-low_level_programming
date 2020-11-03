#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars.
* @size: the size of the array.
* @c: charachter to initialize the array.
* Return: NULL if size = 0.
*/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;
p = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
if (p == NULL)
return (0);
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
