#include "main.h"
#include <stdio.h>
/**
 *_strncat - joinstwo strings with variable diff
 *@dest: input string
 *@src: input string
 *@n: variable of bytes to join
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
