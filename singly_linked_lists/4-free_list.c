#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free _list - free list structure
 * @head: pointer to first node in list
 */

void free_list(list_t *head)
{
list_t *temp;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
