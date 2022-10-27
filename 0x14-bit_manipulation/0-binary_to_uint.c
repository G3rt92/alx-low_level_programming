#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer
 *@s: String
 * Return: Return the num
 **/
int _atoi(const char *s)
{
	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;



	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (s[i] - 48) + num * 10;

			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}

	}

	return (num * sign);
}
/**
 * binary_to_uint - converts a string of 1's and 0's to a decimal number
 * @b: string to convert
 * Return: unsigned decimal number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, bin_num, dec_num, base, rem;
	int i;

	dec_num = 0;
	base = 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == 'e')
			return (0);
	}
	num = _atoi(b);
	bin_num = num;

	while (num > 0)
	{
		rem = num % 10;
		dec_num = dec_num + rem * base;
		base = base * 2;
		num = num / 10;
	}
	return ((int)dec_num);
}
