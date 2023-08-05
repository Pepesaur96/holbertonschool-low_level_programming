#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index specified
 * @head: double pointer to start of lists
 * @index: specified index
 * Return: (1) if success, (-1) if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (temp == NULL)
			return (-1);

	temp = temp->next;
	index--;
	}

	if (temp == *head)
	{
	*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
	temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
