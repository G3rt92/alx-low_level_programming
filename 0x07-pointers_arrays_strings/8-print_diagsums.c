#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 * Return: nothing, but prints
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int f_sum;
	unsigned int s_sum;

	s_sum = 0;
	f_sum = 0;

	for (i = 0; i < size; i++)
	{
		f_sum += a[(size * i) + i];
		s_sum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", f_sum, s_sum);
}
