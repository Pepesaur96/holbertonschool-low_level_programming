#include <stdio.h>
/**
 *main - print 0-9 with a new line after
 *Return: always !0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)

		x++;
	}
	putchar('\n');

	return (0);
}
