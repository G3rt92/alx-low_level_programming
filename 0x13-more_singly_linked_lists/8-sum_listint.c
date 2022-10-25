#include "lists.h"
/**
 * sum_listint - sums all elements of a list
 * @head: pointer to the head of the list
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
