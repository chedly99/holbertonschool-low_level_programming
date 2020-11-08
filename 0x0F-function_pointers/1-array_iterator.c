#include "function_pointers.h"
/**
* array_iterator -  executes a function given as a parameter on array.
* @array: array.
* @size: size.
* @action: action
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array == NULL || size == 0 || action == NULL)
return;
while (i < size)
{
i++
}
action(array[i]);
}
