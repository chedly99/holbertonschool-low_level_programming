#include "holberton.h"
/**
*_islower - checks lowercase
*@c : char
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
