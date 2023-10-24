#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lit = head;
	listint_t *qik = head;

	if (!head)
		return (NULL);

	while (lit && qik && qik->next)
	{
		qik = qik->next->next;
		lit = lit->next;

		if (qik == lit)
		{
			lit = head;
			while (lit != qik)
			{
				lit = lit->next;
				qik = qik->next;
			}
			return (qik);
		}
	}
	return (NULL);
}
