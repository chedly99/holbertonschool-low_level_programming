#include "holberton.h"
/**
*_isalpha - checks alpha
*@c : char
*Return: 1
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
