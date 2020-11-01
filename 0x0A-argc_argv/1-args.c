#include <stdio.h>

/**
  * main - print num of arg
  * @argc: size of array argv
  * @argv: array
  * Return: int
  */

int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
