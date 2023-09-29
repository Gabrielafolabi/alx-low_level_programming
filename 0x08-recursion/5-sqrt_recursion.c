#include "main.h"

/**
 * square_root - function that computes the natural sqr root.
 *
 * @a: input number
 * @b: root
 * Return: Always 0
 */

int square_root(int a, int b)
{

	if ((b * b) == a )
	{
		return (b);
	}
	else if ((b * b) > a )
	{
		return (-1);
	}
	else
		return (square_root(a, (b + 1)));

} 




/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n - input number
 * Return - Always 0
 */

int _sqrt_recursion(int n)
{

	if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, 0));
	}

}











