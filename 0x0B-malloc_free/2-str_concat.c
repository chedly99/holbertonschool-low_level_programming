#include <stdlib.h>
#include <stdio.h>
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
*str_concat- concat 2 string
*@s1: str
*@s2: str
*Return: str
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, k;
int l = length(s1) + length(s2);
str = malloc(sizeof(char) * (l + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < length(s1) ; i++)
{
str[i] = s1[i];
k = 0;
j = i + 1;
}
while (s2[k] != '\0' && j < l)
{
str[j] = s2[k];
j++;
k++;
}
str[j + 1] = '\0';
return (str);
}
