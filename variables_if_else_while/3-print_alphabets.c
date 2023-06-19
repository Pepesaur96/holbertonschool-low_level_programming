#include <stdio.h>
/**
 *main - Print the alphabet once per letter in a new line
 *for both upper and lower case
 *Return: always !0
*/

int main(void)
	{
	char alphabet;
		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		{
			putchar(alphabet);
		}
		for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
		{
			putchar(alphabet);
		}
	putchar('\n');
	return (0);
	}
