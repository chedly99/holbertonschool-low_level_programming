#include "holberton.h"
/**
* _pow_recursion - the power of y
* @x: int type
* @y: int type
* Return: void
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
y--;
return (x * _pow_recursion(x, y));
}
