#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 *
 * Return: 1 if c is lowercase.
 * Return: 0 if c is not lowercase. 
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
