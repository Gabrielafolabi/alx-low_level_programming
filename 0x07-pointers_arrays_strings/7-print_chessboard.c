#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - function that prints the chessboard.
 *@a: first value -char
 *
 */

void print_chessboard(char (*a)[8])
{
	int j, k;
	k = 0;

	for (j = 0; j < 8; j++)
	{
		
		while (k < 8)
		{
			_putchar (a[j][k]);
			k++;
		}
		_putchar('\n');
	}
}
