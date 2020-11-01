#include <stdio.h>
/**
* main - prints args
* @argc: size of array argv
* @argv: array
* Return: int
*/
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
