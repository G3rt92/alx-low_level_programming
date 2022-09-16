#include "main.h"
/**
 * print_triangle - outputs a triangle
 * @size: print size
 * Return: 0 (success).
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int m;

	if (size > 0)
	{
		k = size - 1;
		for (i = 0; i < size ; i++)
		{
			for (j = k; j > 0 ; j--)
			{
				_putchar (' ');
			}

			for (m = 0; m <= i; p++)
			{
				_putchar (35);
			}
		k--;
		_putchar ('\n');
		}
	}

	else
	{
		_putchar ('\n');
	}
}
