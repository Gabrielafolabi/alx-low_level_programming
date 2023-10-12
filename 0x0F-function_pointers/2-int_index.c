#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: Array size.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{	
			return (index);
		}
	}

	return (-1);
}
