#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: neWode
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = NULL;
	const listint_t *las = NULL;
	size_t cnt = 0;
	size_t neW;

	cur = head;
	while (cur)
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		cnt++;
		cur = cur->next;
		las = head;
		neW = 0;
		while (neW < cnt)
		{
			if (cur == las)
			{
				printf("-> [%p] %d\n", (void *)cur, cur->n);
				return (cnt);
			}
			las = las->next;
			neW++;
		}
		if (!head)
			exit(98);
	}
	return (cnt);
}
