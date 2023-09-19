#include "main.h"

/**
  * rev_string - Funtion that Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */

void rev_string(char *s)i
{
	int i, b, c;
	char *a, rev;

	a = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		a++;
	}

	for (i = 0; i < (b / 2); i++)
	{
		rev = s[i];
		s[i] = *a;
		*a = rev;
		a--;
	}
}
