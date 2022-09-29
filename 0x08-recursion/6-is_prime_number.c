#include "main.h"
/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 **/
int is_prime_number(int n)
{

	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	else
		return (1);

	return (is_prime_number(n));
}
