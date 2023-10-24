#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *pot = h;
size_t cnt = 0;

while (pot != NULL)
{
printf("%d\n", pot->n);
cnt += 1;
pot = pot->next;
}
return (cnt);
}
