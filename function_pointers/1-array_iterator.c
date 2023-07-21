#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - execute a function pointer on each element of array
 * @array: pointer to function
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[1]);
			i++;
		}
	}
}
