#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - print sum of 2 digona
* @a:int
* @size:int size
* Return:void
*/
void print_diagsums(int *a, int size)
{
int i, m = 0, n = 0;
for (i = 0; i < size; i++)
{
m += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
n += a[i];
a -= size;
}
printf("%d, %d\n", m, n);
}
