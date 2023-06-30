#include "main.h"
#include <stdio.h>
/**
 *_memcpy - copies memory area
 *@dest: memory area to be copied into
 *@src: memory area to be copied from
 *@n: # of bytes to copy
 *Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
