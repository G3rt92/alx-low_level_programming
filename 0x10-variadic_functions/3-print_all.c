#include "variadic_functions.h"
/**
 * print_all - prints all
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *sep = "";
	va_list ls;

	i = 0;

	va_start(ls, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
