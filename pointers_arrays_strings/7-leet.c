#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @elite: input string
 * Return: char
 */

char *leet(char *elite)
{
int i, j;
char letters[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char numbers[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; elite[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (elite[i] == letters[j])
			{
				elite[i] = numbers[j];
			}
		}
	}
	return (elite);
}
