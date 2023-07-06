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

	if (argc == 1)
		printf("%d\n", argc - 1);

	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
