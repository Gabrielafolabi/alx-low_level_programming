#include "lists.h"

/**
 * list_len - Function that finds the number of elements in
 *            a linked list_t list.
 * @i: Linked list_t list.
 *
 * Return: The number of elements in i.
 */
size_t list_len(const list_t *i)
{
	size_t values = 0;

	while (i)
	{
		values++;
		i = i->next;
	}

	return (values);
}
