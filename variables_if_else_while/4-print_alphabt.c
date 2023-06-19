#include <stdio.h>
/**
 *main - Print every letter of the alphabet in lowercase followed by a new line
 *Return: always!0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z';)
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
