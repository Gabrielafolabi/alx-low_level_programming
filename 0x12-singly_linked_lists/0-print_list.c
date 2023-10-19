#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @i: The list_t list.
 *
 * Return: The number of nodes in i called block.
 */

size_t print_list(const list_t *i)
{
	size_t block = 0;

	while (i)
	{
		if (i->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", i->len, i->str);
		}

		block++;
		i = i->next
	}

	return (block);
}
