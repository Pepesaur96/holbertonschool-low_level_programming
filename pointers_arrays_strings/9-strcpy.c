#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy string pointed by src including '\0'
 * copy to dest
 * @dest: variable
 * @src: variable
 * Return: dest variable
 */

char *_strcpy(char *dest, char *src)
{
	char TEMP = *src;
	*src = *dest;
	*dest = TEMP;

	return (dest);
}
