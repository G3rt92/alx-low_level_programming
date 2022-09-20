#include "main.h"
/**
 *puts_half - outputs a second half of a string
 *@str: a character pointer args
 *Return: nothing if successful;
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i > length / 2) || (i > (length - 1) / 2))
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
