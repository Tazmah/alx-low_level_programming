#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: the starting node
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	while (head != NULL)
	{
		curr = *head;

		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
