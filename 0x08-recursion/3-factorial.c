#include "main.h"
/**
*factorial - returns a factorial of a given number
*@n: given number
*Return: -1 if lower than 0,else !n
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

	return (-1);
}
