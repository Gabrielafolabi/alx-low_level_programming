#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: The alphabetic character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, and 0 otherwise.
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
