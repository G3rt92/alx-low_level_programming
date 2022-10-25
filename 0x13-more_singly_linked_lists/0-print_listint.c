#include "lists.h"
/**
 * print_listint- prints all the elements of a listint_t list
 * @h: pointer to the listint_t list t
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		n_nodes++;
	}
	return (n_nodes);
}
