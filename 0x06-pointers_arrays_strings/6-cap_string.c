/**
*cap_string - capitalise letters
*@a: string
*Return: char
*/
char *cap_string(char *a)
{
int i = 0, j;
char ch[] = " \t\n,;.!?\"(){}";
while (a[i] != '\0')
{
if (a[i] >= 'a' && a[i] <= 'z')
{
if (i == 0)
a[i] -= 32;
else
{
for (j = 0; ch[j] != '\0'; j++)
{
if (ch[j] == a[i - 1])
a[i] -= 32;
}
}
}
i++;
}
return (a);
}
