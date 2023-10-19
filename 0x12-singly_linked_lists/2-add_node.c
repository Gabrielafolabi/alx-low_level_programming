#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{

	int num;
	char *rep;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	rep = strdup(str);
	if (rep == NULL)
	{
		free(new);
		return (NULL);
	}

	for (num = 0; str[num];)
	{
		num++;
	}
	new->str = rep;
	new->num = num;
	new->next = *head;

	*head = new;

	return (new);
}
