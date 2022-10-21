#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to singly linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

	}
	return (s);
}
