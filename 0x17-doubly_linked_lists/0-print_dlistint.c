#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node
 * Return: the number of nodes
 * Description: function that prints all the elements of a dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
