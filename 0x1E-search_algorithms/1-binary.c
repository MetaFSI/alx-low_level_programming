#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integer
 *
 * @array: The array to be printeded
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *
 * @array: Pointer to the first eleme of the array to search in
 * @size: Number of elements in @arr
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_array(array + l, r - l + 1);
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
