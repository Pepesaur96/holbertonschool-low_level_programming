#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first elment of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: -1 if array is NULL or value not found,
 * otherwise index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int index = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);

			else
				printf("%d, ", array[i]);
		}

		if (array[index] == value)
			return (index);

		if (array[index] < value)
			left = index + 1;

		else
			right = index - 1;
	}

	return (-1);
}
