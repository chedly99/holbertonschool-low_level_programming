#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*get_op_func - pointer to a function
*@s: char
*Return: integer
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

while (ops[i].op != NULL)
{
if (*s == ops[i].op)
{
return (ops[i].f);
}
i++
}
printf("Error\n");
exit(99)
}
