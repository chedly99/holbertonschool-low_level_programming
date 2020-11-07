#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*op_add - sums integers
*@a: integer
*@b: integer
*Return: integer
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - substracts integers
*@a: integer
*@b: integer
*Return: integer
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - multiplies integers
*@a: integer
*@b: integer
*Return: integer
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - divises integers
*@a: integer
*@b: integer
*Return: integer
*/
int op_div(int a, int b)
{
if (a == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
*op_mod - rest of numbers
*@a: integer
*@b: integer
*Return: integer
*/
int op_mod(int a, int b)
{
if (a == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
