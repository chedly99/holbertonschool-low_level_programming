#include "holberton.h"
/**
* _strlen_recursion -nprints length of string
* @s: str
* Return: void
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}
