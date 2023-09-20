#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
  */

char *_strncpy(char *dest, char *src, int n)
{

	int len_string;

	for (len_string = 0; len_string < n && src[len_string] != '\0';)
	{
		dest[len_string] = src[len_string];
		len_string++;
	}

	for (; len_string < n ; len_string++)
	
	dest[len_string] = '\0';
	return (dest);
}
