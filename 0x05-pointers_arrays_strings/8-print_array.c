#include <stdio.h>
/**
*print_array - print an Array
*@a: array of integer
*@n: integer
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
continue;
printf(", ");
}
printf("\n");
}
