#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ass a new node to the end of a list
 * @head: double pointer to the start of a list
 * @str: pointer to string value in list
 * Return: address of a new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

	while(str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
