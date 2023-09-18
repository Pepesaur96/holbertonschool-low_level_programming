#include "search_algos.h"
/**
 *linear_search - searches for a value using linear search
 *@array: pointer to the first element of the array
 *@size: the numbers in array
 *@value: the number to search fo
 *Return: -1 if array is NULL or value not found,
 *or the index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		index++;
	}

	return (-1);
}
