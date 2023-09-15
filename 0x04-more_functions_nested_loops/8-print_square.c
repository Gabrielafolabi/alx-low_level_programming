#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{

	int sqr;
	int wid;

	if (size > 0)
	{

		for (sqr = 0; sqr < size; sqr++)
		{
			for (wid = 0; wid < size; wid++)
			{	_putchar('#');
			}
			if (sqr == size - 1)
				continue;
			_putchar('\n');

		}

	}
	else
	{
		_putchar('\n');
	}


}
