#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: A pointer to the head of the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
