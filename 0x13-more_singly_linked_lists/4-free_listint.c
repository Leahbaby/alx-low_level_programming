#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: pointer to the 1st node of the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head)
	{
		cur = head->next;
		free(head);
		head = cur;
	}
}
