#include "lists.h"
/**
 * dlistint_len - count and returns the number of elements of dlistint_t list
 * @h: head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
