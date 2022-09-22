#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array of integers
 * @a: array pointer
 * @n: number of elements of array
 *
 * Return: nothing if success
 */
void reverse_array(int *a, int n)
{
	int *start, *end, temp;

	start = a;
	end = a + n - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
