#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements
 * @h: pointer to first address node
 * Return: returns length of list
 */

size_t list_len(const list_t *h)
{
size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
