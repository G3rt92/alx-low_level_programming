#include "main.h"

/**
 * print_alphabet: outputs alphabet in lowercase
 * Return: 0 for success.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
