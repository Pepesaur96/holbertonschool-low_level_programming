#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *string_nconcat - joins two strings
 *@s1: input string
 *@s2: input string
 *@n: int to determine # of chars to join
 *Return: if fails NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0;
unsigned int s1len = 0, s2len = 0;
char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n < s2len)
		ptr = malloc(sizeof(char) * (s1len + n + 1));

	else
		ptr = malloc(sizeof(char) * (s1len + s2len + 1));

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
