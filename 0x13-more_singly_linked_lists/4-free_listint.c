#include "lists.h"
/**
 * free_listint - write a function that frees a list
 * @head: location of node
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
