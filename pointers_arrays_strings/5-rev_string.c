#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string input to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int length, j, i, count = 0;
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}

	length = count - 1;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[1] = s[j];
		s[j] = temp;
	}
}
