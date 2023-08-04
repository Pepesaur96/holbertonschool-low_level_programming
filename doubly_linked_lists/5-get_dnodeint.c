#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node in a list
 * @head: ppointer to starting node in a list
 * @index: node to return
 * Return: pointer to the nodeor NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
