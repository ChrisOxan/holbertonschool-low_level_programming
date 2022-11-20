#include "lists.h"
/**
 * print_listint - Prints all the elements at the list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
