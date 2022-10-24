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


	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	if (new_node == NULL)
		return (NULL);
	else
		return (*head);
}
