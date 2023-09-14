#include <stdio.h>
#include "main.h"

/**
 * _isupper -function that checks for uppercase character
 *
 * @c: The character to be checked
 *
 * Return: Always 1 when c is uppercase and 0 when c lowercase.
 *
 */

int _isupper(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (0);

	}
	else
	{

		return (1);
	}



}
