#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: input string
 *@c: input char to be looked for
 *Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		else
			s++;
	}

	if (c == '\0')
		return (s);

	return ('\0');
}
