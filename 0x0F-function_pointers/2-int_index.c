#include "function_pointers.h"
/**
* int_index - searches for ints.
* @array: array.
* @size: size.
* @cmp: compares
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
}
