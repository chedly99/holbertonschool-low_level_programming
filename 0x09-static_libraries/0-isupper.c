#include "holberton.h"
/**
*_isupper - checks uppercase
*@c : int
*Return: 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
