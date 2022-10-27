#include "holberton.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number
 * @index: index of bit to modify
 * Return: 1 for success, -1 for error
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
