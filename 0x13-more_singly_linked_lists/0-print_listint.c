#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes list_t list
 */
size_t print_listint(const listint_t *h)
{
 size_t nodes = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (nodes);
}
