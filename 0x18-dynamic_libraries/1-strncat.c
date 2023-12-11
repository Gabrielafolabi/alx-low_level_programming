#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */


char *_strncat(char *dest, char *src, int n)
{
	int len_string = 0, i;

	while (dest[len_string] != '\0')
	{
		len_string++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_string] = src[i];
		len_string++;
	}

	dest[len_string] = '\0';
	return (dest);
}
