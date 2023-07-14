#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - joins two strings
 *@s1: input string
 *@s2: input string
 *Return: pointer to a new memory with s1 >> s2,
 *or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * (strlen(s1) + (strlen(s2) + 1)));

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}

	return (ptr);
}
