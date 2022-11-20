#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list.
 * @head: A pointer to the address of the
 *        head of the list
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int o;

	if (*head == NULL)
		return (0);

	node = *head;
	o = (*head)->n;
	*head = (*head)->next;
	free(node);
	return (o);
}
