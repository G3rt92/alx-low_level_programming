#include "main.h"
/**
 * sqrt_by_subtract - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: counter
 * Return: the resulting square root
 */
int sqrt_by_subtract(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (i);
	if (n == 1)
		return (-1);
	n = n - (2 * i + 1);
	return (sqrt_by_subtract(n, i + 1));
}
/**
 *_sqrt_recursion - recurses to find the natural
 *square root of a number
 *@n: number to calculate the sqaure root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);

	return (sqrt_by_subtract(n, 0));
}
