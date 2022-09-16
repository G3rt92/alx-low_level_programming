#include "main.h"
/**
 * _isupper - evaluates if letter is uppercase .
 *@c: int
 * Return: 0 (success)
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
