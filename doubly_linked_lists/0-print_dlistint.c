#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to first node in list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
