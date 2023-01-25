#include "sort.h"

/**
 * swap_ints - Swap two ints in an array.
 * @first: The first integer.
 * @second: The second integer.
 */
void swap_ints(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

/**
 * bubble_sort - Sort an array of ints in ascending order.
 * @array: Array to sort.
 * @size: Array size.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool isSorted = false;

	if (array == NULL || size < 2)
		return;

	while (isSorted == false)
	{
		isSorted = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				isSorted = false;
			}
		}
		len--;
	}
}
