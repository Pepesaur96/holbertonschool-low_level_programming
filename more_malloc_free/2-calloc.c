#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocates memory for an array and sets it to 0
 *@nmemb: array of elements
 *@size: # of bytes
 *Return: NULL if arguments are 0 or fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, l = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
