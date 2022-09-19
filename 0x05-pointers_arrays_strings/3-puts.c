#include "main.h"
/**
 *_puts - sends a string to stdout
 *@str: arguement of _puts of char type
 *Return: nothing upon successful completion
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar (str[index]);
		index = index + 1;
	}
	_putchar ('\n');
}
