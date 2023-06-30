#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory sith a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
