#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an array of chars
 *@size: the size of the array
 *@c: initialization char
 *Return: pointer to an array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int pos;

	if (size == 0)
		return (NULL);
	str = (char *) malloc(size * sizeof(c));
	if (str == NULL)
		return (NULL);
	pos = 0;
	while (pos < size)
	{
		*(str + pos) = c;
		pos++;
	}
	return (str);
}
