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

	int len;
	char *rep;
	list_t *recent;

	recent = malloc(sizeof(list_t));
	if (recent == NULL)
	{
		return (NULL);
	}
	rep = strdup(str);
	if (rep == NULL)
	{
		free(recent);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}
	recent->str = rep;
	recent->len = len;
	recent->next = *head;

	*head = recent;

	return (recent);
}
