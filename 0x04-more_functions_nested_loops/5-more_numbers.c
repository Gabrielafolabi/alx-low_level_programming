#include <stdio.h>
#include "main.h"


/**
 * more_numbers -prints 10 times the numbers, from 0 to 14,
 *	followed by a new line
 *
 */

void more_numbers(void)
{

	int count;


	for (count = 0; count <= 9; count++)
	{
		int num = 0;

		while (num <= 14)
		{
			_putchar((num % 10) + '0');
			num++;
			if (num > 9)
				_putchar((num / 10) + '0');
		}

		_putchar('\n');

	}

}
