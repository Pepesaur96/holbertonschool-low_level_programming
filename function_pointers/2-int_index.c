#include "function_pointers.h"
/**
 * int_index - function that searches for an interger
 * @array: array of ints
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first elements that matches with cmp, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}

	return (-1);
}
