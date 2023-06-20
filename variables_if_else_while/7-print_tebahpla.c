#include <stdio.h>
/**
 *main - print the alphabet in reverse order
 *Return: always !0
 */

int main(void)
{ char alphabet;
	for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

