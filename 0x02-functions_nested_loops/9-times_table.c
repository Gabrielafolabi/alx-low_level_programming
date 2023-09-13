#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num;
	int mult; 
	int times;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			times = num * mult;

			if (times <= 9)
				_putchar(' ');
			else
				_putchar((times / 10) + '0');

			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
