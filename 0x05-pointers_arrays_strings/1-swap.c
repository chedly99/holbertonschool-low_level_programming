#include "holberton.h"
/**
*swap_int - swap_int
*@a: int
*@b: int
*@n: int
*/
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
