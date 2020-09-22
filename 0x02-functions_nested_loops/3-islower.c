#include "holberton.h"
/**
*_islower - islower
*@c: int
*Return: 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
