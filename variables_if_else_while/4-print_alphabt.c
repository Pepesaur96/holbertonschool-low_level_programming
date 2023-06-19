#include <stdio.h>
/**
 *main - Print every letter of the alphabet in lowercase followed by a new line
 *Return: always!0
 */

int main(void)
	{
		char alphabet;
			for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
			{
				putchar(alphabet);
			}
		putchar('\n');
		return (0);
	}

