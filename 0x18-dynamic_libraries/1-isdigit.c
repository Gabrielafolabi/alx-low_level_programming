#include <stdio.h>
#include "main.h"

/**
 * _isdigit  -function that checks for uppercase character
 *
 * @c: character to check
 * Return: Always 1 when character is digit,0 otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);

	}

	else
	{
		return (0);

	}


}
