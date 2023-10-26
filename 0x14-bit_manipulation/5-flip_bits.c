#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *	flipped to get from one number to another.
 * @n: The number.
 * @m: The number n is flipped  to.
 *
 * Return: The number of bits to be flipped to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit = 0;

	while (flip > 0)
	{
		bit += (flip & 1);
		flip >>= 1;
	}

	return (bit);
}
