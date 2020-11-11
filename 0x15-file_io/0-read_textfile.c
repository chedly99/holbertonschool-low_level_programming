#include "holberton.h"
/**
*read_textfile - Read a text file
*@filename: pointer to the name of file
*@letters: number of letters the function print and read
*Return:
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *bufffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == 0)
return (0);
o = open(filename, O_RDONLY);
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);
free(buffer);
close(o);
return (w);
}
