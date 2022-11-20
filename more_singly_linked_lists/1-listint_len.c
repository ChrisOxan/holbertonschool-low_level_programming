#include "lists.h"
/**
 *  * listint_len - returns the elements at the list.
 *   * @h: A pointer to the head of the list.
 *    * Return: The number of elements in the list.
**/
size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		h = h->next;
	}
	return (nd);
}
