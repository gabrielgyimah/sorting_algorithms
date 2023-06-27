#include "sort.h"

/**
 * bubble_sort - sorts array in ascending order
 *
 * @array: array being sorted
 * @size: length of the array
 *
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, flag;

	if (!size || !array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				flag = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}

		if (flag == 0)
			break;
	}
}
