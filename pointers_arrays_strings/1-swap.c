#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two intergers
 * @a: input int 1
 * @b: input int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
