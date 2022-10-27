#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	int i;
	char *k;

	i = 1;
	test = (char *)&i;
	return ((int)k[0]);
}
