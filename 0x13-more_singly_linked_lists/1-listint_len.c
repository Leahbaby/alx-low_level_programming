#include <stdio.h>
#include "lists.h"

/*
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: points to the header of the linked list
 *
 * Return: The number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
