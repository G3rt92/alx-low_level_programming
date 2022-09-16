#include "main.h"
/**
 * print_diagonal - outputs a diagonal line
 *@x: print int
 * Return: 0 (success).
 */
void prit_diagonal(int x)
{
	int i;
	int j;

	if (x > 0)
	{
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
				_putchar (92);
				_putchar ('\n');
		}

	}

	else
	{
	_putchar ('\n');
	}

}
