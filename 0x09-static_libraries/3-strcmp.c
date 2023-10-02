#include "main.h"


/**
 * _strcmp - function that compares two strings
 *
 * @s1 - pointer to the first string
 * @s2 - pointer to the second string
 * Return: 0 if string is equal
 */

int _strcmp(char *s1, char *s2)
{

	int len;
	int value;

	len = 0;

	while (s1[len] == s2[len] && s1[len] != '\0')
		len++;

	value = s1[len] - s2[len];
	return (value);
}
