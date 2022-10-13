#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);

	return (sum);
}
