#include <stdio.h>
/**
 *main - print 0-9 with a new line after
 *Return: always !0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
