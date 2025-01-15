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
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		else
			high = pos - 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	}
	/* Value is not in the array */
	if (low <= high)
    printf("Value checked array[%ld] is out of range\n", high);
    return (-1);
}
