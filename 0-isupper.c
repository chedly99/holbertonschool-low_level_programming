#include "holberton.h"
/**
*_isupper - isupper
*@c: int
*Return: 1
*/
int _isupper(int c)
{
if (c <= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
