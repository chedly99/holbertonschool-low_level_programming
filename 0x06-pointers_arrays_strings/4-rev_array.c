#include "holberton.h"
/**
*reverse_array - array reversed
*@*a:array
*@n:integer
*Return:
*/
void reverse_array(int *a, int n)
{
int i, s;
i = 0;
while (i < n / 2)
{
s = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = s;
i++;
}
}
