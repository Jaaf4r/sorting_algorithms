#include "sort.h"

/**
 * swap_ints - Swaps integers of an array.
 * @a: The first integer.
 * @b: The second integer.
*/
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, len = size - 1;
	int flag = 1;

	if (array == NULL || size < 2)
		return;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < len; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				flag = 1;
			}
		}
		len--;
	}
}
