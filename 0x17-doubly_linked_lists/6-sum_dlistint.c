#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t list
 * @head: head pointe
 * Return: sum of all nodes or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
