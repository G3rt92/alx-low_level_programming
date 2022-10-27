#include "main.h"
/**
 * flip_bits - returns the number of bits to be flipped
 * @n: base number
 * @m: to be changed to
 * Return: the number of transformed bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, out;

	out = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)

		if (((n ^ m) >> i) & 1)
			out++;
	return (out);
}
