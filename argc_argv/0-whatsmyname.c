#include "main.h"
#include <stdio.h>
/**
 *main - prints program name \n
 *@argc: determines # of strings in argv
 *@argv: array of strings input
 *Return: 0 is successful
 */

int main(int argc, char *argv[])
{
int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}

	return (0);
}
