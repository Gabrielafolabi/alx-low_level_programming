#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
