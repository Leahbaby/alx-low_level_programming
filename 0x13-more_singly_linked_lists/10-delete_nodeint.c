#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *curt = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	while (i < index - 1)
	{
		if (!cur || !(cur->next))
			return (-1);

		cur = cur->next;
		i++;
	}

	curt = cur->next;
	cur->next = curt->next;
	free(curt);

	return (1);
}
