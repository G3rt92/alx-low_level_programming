#include "variadic_functions.h"
/**
 * print_numbers - prints numbers given as parameters
 * @separator: string char to be printed between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ls);

	printf("\n");
}
