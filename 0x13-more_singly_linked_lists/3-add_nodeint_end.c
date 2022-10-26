#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: location of the starting node
 * @n: the value the new node will be equated to
 * Return: address of the new element or NUll if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
