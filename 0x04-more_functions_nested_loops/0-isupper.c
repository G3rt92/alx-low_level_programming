#include "main.h"
/**
 * _isupper - evaluates if letter is uppercase .
 *@c: int
 * Return: 1 if c is uppercase
 * Return: 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
