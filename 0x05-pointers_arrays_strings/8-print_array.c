#include<stdio.h>
#include "holberton.h"
/**
 *print_array - prints the array
 *@a: points to int a
 *@n: points to int n
 *Return: not.
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
}
