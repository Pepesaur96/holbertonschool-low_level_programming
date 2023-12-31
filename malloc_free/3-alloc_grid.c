#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - returns a pointes to a 2 dimensional array
 *@width: width of the array
 *@height: height of the array
 *Return: NULL on failure & if width || height = 0
 */

int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	while (i < height)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			while (j < i)
				free(ptr[j++]);

			free(ptr);
			return (NULL);
		}

		i++;
	}
	return (ptr);
}
