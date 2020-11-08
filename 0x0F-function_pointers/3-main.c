#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*main - print calc
*@argc: argc
*@argv: argv
*Return: int
*/
int main(int argc, char **argv)
{
int calc, num1, num2;
int (*operator)(int, int);
if (argc !=4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);

calc = operator(num1, num2);
printf("%d\n", calc);
return(0);
}
