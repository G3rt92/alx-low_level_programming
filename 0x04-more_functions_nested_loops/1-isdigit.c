#include "main.h"
/**
 * _isdigit - check if c is a digit
 * 
 *@c: int
 * Return: 1 if c is a digit
 * Return: 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
