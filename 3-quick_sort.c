#include "sort.h"

/**
 * swap - swap two integers
 * @array: two elements in arrays to swap
 * @i: index of first element
 * @j: index of second element
 */

void swap(int  *array, int  i, int  j)
{
	int  temp;

	temp  =  array[i];
	array[i]  =  array[j];
	array[j]  =  temp;
}

/**
 * partition - partition array
 * @array: arrays to sort
 * @lb: first element index
 * @ub: last element index
 * @size: arrays size
 * Return: index of pivot
 */

int partition(int  *array, int  fe, int  le, size_t size)
{
	int i  =  fe - 1, j;

	for (j  =  fe; j  <=  le - 1; j++)
	{
		if (array[j] < array[le])
		{
			i++;
			if (i < j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[le])
	{
		swap(array, (i + 1), le);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * sort - sorting arrays recursion
 * @array: arrays
 * @fe: index of first element
 * @le: index of last element
 * @size: size of arrays
 */

void sort(int *array, int fe, int le, size_t size)
{
	int loc;

	if (lb < ub)
	{
		loc = partition(array, fe, le, size);
		sort(array, fe, loc - 1, size);
		sort(array, loc + 1, le, size);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */

void quick_sort(int *array, size_t size)
{
	if (array  ==  NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}
