#include <stdio.h>
/**
 *main - print 0-9 divided by "," and with a new line after
 *Return: always !0
 */

int main(void)
{
	int e
		;
	for (e = 0; e < 10; e++)
	{
		putchar(e + '0');
		if (e < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
