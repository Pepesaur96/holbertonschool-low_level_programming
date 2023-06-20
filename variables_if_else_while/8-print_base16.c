#include <stdio.h>
/**
 *main - print hexidecimal line with a new line after
 *Return: always !0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		printf("%x", i);
	}
	printf("\n");
	return (0);
}
