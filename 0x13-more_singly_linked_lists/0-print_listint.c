#include "lists.h"

/**
<<<<<<< HEAD
 * print_listint - prints all the element of a listint n
 * @h: value or memory of the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	while (h != NULL)
		h = h->next;
		i++;
	return (i);
=======
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
>>>>>>> eaf4bd902e98a7e18313088c905409bfe25c6059
}
