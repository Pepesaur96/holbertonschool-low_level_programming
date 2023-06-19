#include <stdio.h>
/**
 *main - to print each ;letter of the alphabet once per line
 *Return: always !0
 */

int main(void)
	{ char alphabet;
		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		{
			putchar(alphabet);
		}
	putchar('\n');
	return (0);
}

