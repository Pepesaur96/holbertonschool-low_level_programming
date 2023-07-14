#include "main.h"
#include <stdio.h>
/**
 *_strdup - returns a pointer to new allocated space
 *in memory, that contains a copy of the string
 *@str: input string
 *Return: Null if string is NULL
 */

char *_strdup(char *str)
{
char *duplicate = NULL;
		size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
		strcpy(duplicate, str);

	return (duplicate);
}
