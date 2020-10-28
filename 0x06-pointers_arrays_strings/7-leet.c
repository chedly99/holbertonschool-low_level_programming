#include "holberton.h"
/**
**leet - Encodes a string into 1337
*@d: pointer
*Return: pointer
*/
char *leet(char *d)
{
char *k = "aeotl";
char *v = "AEOTL";
char *leet = "43071";
int i, j;

for (i = 0; d[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (d[i] == k[j] || d[i] == v[j])
{
d[i] = leet[j];
}
}
}
return (d);
}
