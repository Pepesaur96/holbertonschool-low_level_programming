#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - frees space in memory by list
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
