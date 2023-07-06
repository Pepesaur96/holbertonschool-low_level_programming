#include "main.h"
/**
 *main - prints program arguments
 *@argc: determines # of strings in argv
 *@argv: array of strings input
 *Return: 0 is successful
 */

int main(int argc, char *argv[])
{
int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
