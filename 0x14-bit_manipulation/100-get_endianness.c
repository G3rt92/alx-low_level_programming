#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	char zahl;
	char *p;

	zahl = '1';
	p = &zahl;
	if (*p == 0)
		return (0);
	else
		return (1);
}
