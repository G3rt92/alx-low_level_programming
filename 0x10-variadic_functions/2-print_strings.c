#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: seperator
 * @n: number of arguements
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	char *str;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char *);
		if (!str)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ls);
}
