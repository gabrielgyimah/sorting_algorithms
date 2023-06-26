#include "sort.h"

/**
 * quick_sort - sort an array using quick sort algorithm
 * @arr: array to be sorted
 * @size: length of the array
 * Return: Nothing
 */

void quick_sort(int *arr, size_t size)
{
	if (!arr)
		return;
	qs(arr, 0, size - 1, size);
}


/**
 * prtn - partition the array
 * @arr: array to be partition
 * @lo: the lower bond
 * @hi: the upper bond
 * @size: length of the array
 * Return: index of the pivot
 */

int prtn(int *arr, int lo, int hi, int size)
{
	int pvt = arr[hi], tmp;
	int idx = lo - 1;
	int i;

	for (i = lo; i <= hi; i++)
	{
		if (arr[i] <= pvt && i != ++idx)
		{
			tmp = arr[i];
			arr[i] = arr[idx];
			arr[idx] = tmp;
			print_array(arr, size);

		}
	}
	return (idx);
}


/**
 * qs - do the recursive call
 * @arr: array to be sorted
 * @lo: the lower bond
 * @hi: the upper bond
 * @size: length of the arr
 * Return: Nothing
 */
void qs(int *arr, int lo, int hi, int size)
{
	int pidx;

	if (lo >= hi)
		return;

	pidx = prtn(arr, lo, hi, size);

	qs(arr, lo, pidx - 1, size);
	qs(arr, pidx + 1, hi, size);
}