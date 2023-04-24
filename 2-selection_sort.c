#include "sort.h"

/**
 * swap_int - sort two by swap
 * @a: first integer.
 * @b: second integer.
 *
 * Return: nothing
 */

void swap_int(int *a,  int *b)
{
	int temp;

	temp =  *a;
	*a =  *b;
	*b =  temp;
}

/**
 * selection_sort - selection sorting of arrays
 * @array: arrays to sort
 * @size: size of arrays
 *
 * Retun: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array  ==  NULL || size < 2)
		return;

	for (i =  0; i < size; i++)
	{
		min =  i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min !=  i)
		{
			swap_int(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
