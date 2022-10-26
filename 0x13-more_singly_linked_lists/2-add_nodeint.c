#include "lists.h"

/**
 * add_nodeint -  add new node at the begining of a linked list
 * @head: the head node or starting node
 * @n: new param
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t **h;

	h = head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
	}
	else
	{
		new_node->next = *h;
		*h = new_node;
	}
	return (new_node);
}
