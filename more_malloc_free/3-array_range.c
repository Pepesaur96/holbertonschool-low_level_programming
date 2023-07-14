#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - creates an array of ints
 *@min: start of range
 *@max: end of range
 *Return: Null if min > max || malloc fails
 */

int *array_range(int min, int max)
{
int *ptr, i = 0, size = (max - min) + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}
