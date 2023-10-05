#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: Input  character in the array
  *
  * Return: The array filled
  */


char *create_array(unsigned int size, char c)
{

	char *string;
	unsigned int i;


	string = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		string[i] = c;

	}
	return (string);

}
