#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array using
* Interpolation search algorithm.
* @array: Pointer to first element of array to search in.
* @size: Number of elements in array.
* @value: Value to search for.
*
* Return: first index where value is located, or -1 if not found
*         or if array is NULL.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos = 0;

	if (!array)
		return (-1);
	pos = POSITION(low, high, array, value);
	while (low < high && value <= array[high] && value >= array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
		{
			low = pos + 1;
			pos = POSITION(low, high, array, value);
		}
		else if (array[pos] > value)
		{
			high = pos - 1;  /* Fixed decrement */
			pos = POSITION(low, high, array, value);
		}
	}
		/* Print the correct index */
	printf("Value checked array[%ld] is out of range\n", high);
	return (-1);
}
