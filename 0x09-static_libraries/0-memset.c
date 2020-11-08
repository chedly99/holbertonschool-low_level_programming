/**
 * _memset - fill memory with a constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
	for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
