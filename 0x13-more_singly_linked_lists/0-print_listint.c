#include "lists.h"
/**
 * print_listint - prints all the element of a listint n
 * @h: value or memory of the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
