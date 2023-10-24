#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and return its data.
 * @head: a pointer to pointer to the head of the linked list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
