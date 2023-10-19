#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function that adds a new node
 *	at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *	else - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *rep;
	list_t *recent, *end;

	recent = malloc(sizeof(list_t));
	if (recent == NULL)
	{
		return (NULL);
	}
	rep = strdup(str);
	if (str == NULL)
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
	recent->next = NULL;

	if (*head == NULL)
	{
		*head = recent;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = recent;
	}

	return (*head);
}
