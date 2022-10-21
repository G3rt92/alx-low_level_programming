#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - finds the number of nodes in a linked list_t list.
 * @h: pointer singly linked list list_t
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
