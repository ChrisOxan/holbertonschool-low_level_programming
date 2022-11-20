#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node of
 *                        a linked list.
 * @head: A pointer to the head of the list.
 * @index: The index to search
 * Return: the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int new;

	for (new = 0; new < index; new++)
	{
	if (head == NULL)
		return (NULL);
	head = head->next;
	}
	return (head);
}
