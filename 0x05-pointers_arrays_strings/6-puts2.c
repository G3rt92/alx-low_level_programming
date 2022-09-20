#include "main.h"
/**
 *puts2 - print each character of a string
 *@str: A pointer to a char
 *
 *Return: nothing if success
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar (str[x]);
	}
	_putchar ('\n');
}
