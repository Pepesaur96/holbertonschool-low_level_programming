#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - allocates memory
 *@b: input int
 *Exit: 98 if function fails
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
char *ptr;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
