#include <stdlib.h>
/**
*length - the length of a string
*@str: string
*Return: length of str
*/
int length(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
/**
*_strdup - string copies in it a string
*@str: string
*Return: a string
*/
char *_strdup(char *str)
{
int i;
char *s;
if (str == NULL)
return (NULL);
s = malloc(sizeof(char) * length(str) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i <= length(str); i++)
s[i] = str[i];
s[length(str) + 1] = '\0';
return (s);
}
