#ifndef LISTS_HEAD
#define LISTS_HEAD


#include <stdlib.h>

/**
 * struct list_single - list singly linked
 * @str: string - (malloc string)
 * @len: string length
 * @num: still length
 * @next: points to the next node
 */


typedef struct list_single
{
	char *str;
	unsigned int len;
	struct list_single *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);
void __attribute__((constructor)) print_tor(void);

#endif
