#include "main.h"
#include <stdio.h>

/**
  * _strcat - function that concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int len_string = 0, i;

	while (dest[len_string] != '\0')
	{
		len_string++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len_string] = src[i];
		len_string++;
	}

	dest[len_string] = '\0';
	return (dest);
}
