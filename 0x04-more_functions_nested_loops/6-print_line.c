#include "main.h"
/**
 * print_line - doutputs a straight line in the terminal.
 *@n: print int
 * Return: 0 (success).
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar (95);
		}

			_putchar ('\n');
	}

	else
	{
	_putchar ('\n');
	}

}