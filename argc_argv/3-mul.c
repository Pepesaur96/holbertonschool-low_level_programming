#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers given as arguments
 *and prints the result \n
 *@argc: # of input strings
 *@argv: array of input strings
 *Return: 0 if success or 1 if error
 */

int main(int argc, char *argv[])
{
int i = 1, result = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		while (i < argc)
		{
			result *= strtol(argv[i], NULL, 10);
			i++;
		}

		printf("%d\n", result);
	}

	return (0);
}
