#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add a new node at the start of the list
 * @head: double pointer to start of list
 * @str: new string to add
 * Return: address of new element por NULL(if failed)
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

	while(str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
