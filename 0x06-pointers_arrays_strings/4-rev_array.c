#include "main.h"


/**
 * reverse_array -reverses the content of an array of integers
 *
 * @n: number of element in an array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	n = n - 1;

	for( i = 0; i < n--; i++)
	{	
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}


}
