#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string input to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int length, right, left, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	length = count - 1;

	for (left = 0, right = length; left < right; left++, right--)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
	}
}
