#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- generates random number
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* Code to determine positive, null or negative */
	if (n > 0)
	{
		 printf("The number %d is positive.\n", n);
	}
	else if (n < 0)
	{
		 printf("The number %d is negative.\n", n);
	}
	else
	{
		 printf("The number %d is null.\n", n);
	}

	return (0);
}
