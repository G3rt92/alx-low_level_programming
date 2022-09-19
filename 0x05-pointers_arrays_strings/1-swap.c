#include "main.h"
/**
 *swap_int - swaps the values of integer a and integer b
 *@a: a pointer that points to the first integer
 *@b: a pointer that points to the second integer
 *Return: nothing if successful
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b; /*the value of b is now value of a*/
	*b = tmp;
}
