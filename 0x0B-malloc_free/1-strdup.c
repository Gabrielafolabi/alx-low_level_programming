#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a
  *	newly allocated space in memory
  * @str: the string to duplicate
  *
  * Return: duplicated string
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	strd = malloc(sizeof(char) * (i  + 1));

	if (strd == NULL)
	{
		return (NULL);
	}
	while (a < i)
	{
		strd[a] = str[a];
		a++;
	}

	strd[a] = '\0';
	return (strd);
}
