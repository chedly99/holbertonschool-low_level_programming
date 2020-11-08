/**
 * _strchr - locates a character in a string
 * @s: char
 * @c: char
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}

