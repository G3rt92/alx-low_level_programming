#include "main.h"
/**
 * more_numbers - prints numbers 10 times, from 0 to 14
 *
 * Return: 0 (success).
 */

void more_numbers(void)
{
	int i;
	int f_number;
	int s_number;
	int outcome;

	i = 0;
	outcome = 0;
	while (i < 10)
	{
		while (outcome <= 14)
		{
			if (outcome < 10)
			{
				s_number = outcome;
			}

			else
			{
				f_number = outcome / 10;
				s_number = outcome % 10;
				_putchar (first_number + '0');
			}

		_putchar (s_number + '0');
		outcome++;
		}
	i++;
	outcome = 0;
	_putchar ('\n');
	}

}
