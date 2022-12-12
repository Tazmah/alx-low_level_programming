#include "lists.h"

/**
 * listint_len - returns the number of element in a linked list
 * @h: the first node(memory location)
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
