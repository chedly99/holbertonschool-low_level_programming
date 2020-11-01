#include <stdio.h>
#include <stdlib.h>
/**
* main - prints args
* @argc: size of array argv
* @argv: array
* Return: int
*/
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int i;
int j;
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", (i *j));
return (0);
}
