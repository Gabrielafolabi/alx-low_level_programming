#include "main.h"
/**
 * string_toupper - function that change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int len;

	len = 0;

	while (n[len] != '\0')
	{
		if (n[len] >= 'a' && n[len] <= 'z')
		{
			n[len] = n[len] - 32;
		}
		len++;
	}
	return (n);
}
