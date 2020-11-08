#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_name - a program that adds positive numbers.
*@name: the name to print.
*@f: function to apply.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
