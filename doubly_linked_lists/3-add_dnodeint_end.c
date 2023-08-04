#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: double pointer to the first node of a list
 * @n: interger values to be added
 * Return: pointer to the new address or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp = *head;

new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

new->n = n;
new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		while (temp->next)
			temp = temp->next;
	}

new->prev = temp;
return (new);
}
