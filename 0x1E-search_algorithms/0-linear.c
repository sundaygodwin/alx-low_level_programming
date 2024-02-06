#include "search_algos.h"

/**
  * linear_search - function searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: first index where value is located,
  *	If value is not present in array or if array is NULL,
  *	function must return -1.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
