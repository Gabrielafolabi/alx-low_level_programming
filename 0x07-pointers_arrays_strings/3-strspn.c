#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0;
	unsigned int i = 0;

	while (s[a] != ' ' && s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				i++;
			b++;
		}
		a++;
		b = 0;
	}
	return (i);
}
