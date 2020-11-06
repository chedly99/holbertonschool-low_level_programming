#include <stdlib.h>
/**
*alloc_grid - creates a 2D array
*@width: width of array
*@height: height of array
*Return: 2D array
*/
int **alloc_grid(int width, int height)
{
int i, j, **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(height * sizeof(int *));
if (a == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
a[i] = malloc(width * sizeof(int));
if (a[i] == NULL)
{
i--;
while (i >= 0)
{
free(a[i]);
i--;
}
free(a);
return (NULL);
}
}
for (i = 0 ; i < height ; i++)
{
for (j = 0; j < width ; j++)
{
a[i][j] = 0;
}
}
return (a);
}
