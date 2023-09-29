#include "main.h"

/**
 * prime_num -function that compute  a prime number,
 *
 *  @a: Input number
 *  @b: Reference number
 *  Return: Always 0
 */

int prime_num(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);

	}
	else if (a == b)
	{
		return (1);
	}
	else
		return (prime_num(a, b + 1));
}




/**
 * is_prime_number -function that returns 1 if the input integer
 *	is a prime number, otherwise return 0
 *
 *  @n: Input number
 *  Return: Always 0
 */

int is_prime_number(int n)
{
	return (prime_num(n, 2));

}
